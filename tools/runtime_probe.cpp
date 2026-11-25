#include "image/xbox360_pe.hpp"
#include "image/xex_image.hpp"
#include "memory/guest_address_space.hpp"
#include "ppc/title_runtime.hpp"
#include "ppc/boot_hle.hpp"
#include "ppc/guest_thread_execution.hpp"

#include <atomic>
#include <chrono>
#include <condition_variable>
#include <cstddef>
#include <cstdint>
#include <fstream>
#include <cstdlib>
#include <iostream>
#include <limits>
#include <optional>
#include <string>
#include <mutex>
#include <stop_token>
#include <thread>
#include <vector>

namespace {

std::uint32_t boot_watchdog_seconds() {
    const char* value = std::getenv("TH_BOOT_WATCHDOG_SECONDS");
    if (!value || !*value) return 0;
    char* end = nullptr;
    const auto parsed = std::strtoul(value, &end, 10);
    if (end == value || *end != '\0' || parsed > 3600ul) return 0;
    return static_cast<std::uint32_t>(parsed);
}

void print_last_import(const toohuman::runtime::PpcImportRegistry& imports) {
    const auto last = imports.last_import_diagnostic();
    std::cerr << "Last guest import at watchdog: count=" << std::dec << last.count
              << " ordinal=0x" << std::hex << last.ordinal
              << " thunk=0x" << last.thunk
              << " lr=0x" << last.lr
              << " args(r3-r10)=" << last.r3 << ',' << last.r4 << ','
              << last.r5 << ',' << last.r6 << ',' << last.r7 << ','
              << last.r8 << ',' << last.r9 << ',' << last.r10
              << std::dec << '\n';
}

void print_guest_context(const PPCContext& context) {
    std::cerr << "Guest context at watchdog boundary:"
              << " r1=0x" << std::hex << context.r1.u32
              << " r3=0x" << context.r3.u32
              << " r4=0x" << context.r4.u32
              << " r5=0x" << context.r5.u32
              << " r6=0x" << context.r6.u32
              << " r7=0x" << context.r7.u32
              << " r8=0x" << context.r8.u32
              << " r9=0x" << context.r9.u32
              << " r10=0x" << context.r10.u32
              << " r13=0x" << context.r13.u32
              << " lr=0x" << context.lr
              << std::dec << '\n';
}

std::uint32_t read_guest_be32(const std::uint8_t* p) {
    return (static_cast<std::uint32_t>(p[0]) << 24) |
           (static_cast<std::uint32_t>(p[1]) << 16) |
           (static_cast<std::uint32_t>(p[2]) << 8) |
           static_cast<std::uint32_t>(p[3]);
}

void print_critical_section_state(
    const toohuman::runtime::PpcImportRegistry& imports,
    const PPCContext& context, std::uint8_t* base) {
    const auto last = imports.last_import_diagnostic();
    if (last.ordinal != 0x125u && last.ordinal != 0x130u) return;
    if (!toohuman::runtime::GuestAddressSpace::is_accessible_range(
            base, last.r3, 0x1Cu, toohuman::runtime::GuestMemoryAccess::Read)) {
        std::cerr << "Critical-section snapshot unavailable at guest address 0x"
                  << std::hex << last.r3 << std::dec << '\\n';
        return;
    }
    const auto* cs = base + last.r3;
    const auto pcr_thread = context.r13.u32 != 0 &&
        toohuman::runtime::GuestAddressSpace::is_accessible_range(
            base, context.r13.u32 + 0x100u, 4u,
            toohuman::runtime::GuestMemoryAccess::Read)
        ? read_guest_be32(base + context.r13.u32 + 0x100u) : 0u;
    std::cerr << "Critical-section snapshot: address=0x" << std::hex << last.r3
              << " lock_count=0x" << read_guest_be32(cs + 0x10)
              << " recursion=0x" << read_guest_be32(cs + 0x14)
              << " owner=0x" << read_guest_be32(cs + 0x18)
              << " PCR.current_thread=0x" << pcr_thread
              << " (28-byte object)" << std::dec << '\\n';
}

bool read_file(const char* path, std::vector<std::uint8_t>& bytes) {
    std::ifstream stream(path, std::ios::binary | std::ios::ate);
    if (!stream) {
        std::cerr << "Could not open: " << path << '\n';
        return false;
    }
    const auto end = stream.tellg();
    if (end < 0) {
        std::cerr << "Could not determine file size: " << path << '\n';
        return false;
    }
    const auto size = static_cast<std::uint64_t>(end);
    if (size > static_cast<std::uint64_t>(std::numeric_limits<std::size_t>::max()) ||
        size > static_cast<std::uint64_t>(std::numeric_limits<std::streamsize>::max())) {
        std::cerr << "File is too large for this host: " << path << '\n';
        return false;
    }
    bytes.resize(static_cast<std::size_t>(size));
    stream.seekg(0);
    if (!bytes.empty() &&
        !stream.read(reinterpret_cast<char*>(bytes.data()),
                     static_cast<std::streamsize>(bytes.size()))) {
        std::cerr << "Could not read complete file: " << path << '\n';
        return false;
    }
    return true;
}

} // namespace

int main(int argc, char** argv) {
    bool run_entry_point = false;
    std::vector<const char*> positional;
    for (int i = 1; i < argc; ++i) {
        if (std::string(argv[i]) == "--run") run_entry_point = true;
        else positional.push_back(argv[i]);
    }
    if (positional.empty() || positional.size() > 2) {
        std::cerr << "Usage: TooHumanRuntimeProbe <default.xex> [default.exe] [--run]\n";
        return 2;
    }

    std::vector<std::uint8_t> xex_bytes;
    if (!read_file(positional[0], xex_bytes)) return 2;

    std::optional<toohuman::runtime::LoadedPeImage> loaded_image;
    if (positional.size() == 1) {
        const auto xex_image = toohuman::runtime::load_xex2_image(xex_bytes);
        if (!xex_image) {
            std::cerr << "XEX image load failed: " << xex_image.error << '\n';
            return 1;
        }
        loaded_image = *xex_image.image;
        std::cout << "XEX compression type: " << xex_image.compression_type
                  << "  decompressed image bytes: 0x" << std::hex
                  << xex_image.decompressed_size << std::dec << '\n';
    } else {
        std::vector<std::uint8_t> pe_bytes;
        if (!read_file(positional[1], pe_bytes)) return 2;
        const auto pe = toohuman::runtime::load_xbox360_pe(pe_bytes);
        if (!pe) {
            std::cerr << "PE load failed: " << pe.error.message << '\n';
            return 1;
        }
        loaded_image = *pe.image;
    }

    std::string error;
    auto memory = toohuman::runtime::GuestAddressSpace::reserve(&error);
    if (!memory.valid()) {
        std::cerr << "Guest address-space reservation failed: " << error << '\n';
        return 1;
    }

    toohuman::runtime::PpcImportRegistry imports;
    std::size_t startup_hle_count = 0;
    if (!toohuman::runtime::register_boot_imports(imports, &error, &startup_hle_count)) {
        std::cerr << "Startup HLE registration failed: " << error << '\n';
        return 1;
    }
    toohuman::runtime::TitleRuntimeInitReport report{};
    if (!toohuman::runtime::initialize_title_runtime(
            memory, *loaded_image, xex_bytes, imports, &report, &error)) {
        std::cerr << "Runtime initialization failed: " << error << '\n';
        return 1;
    }

    std::cout << "Guest image mapped at 0x" << std::hex << std::uppercase
              << loaded_image->image_base << " (size 0x" << loaded_image->image_size
              << ", entry 0x" << loaded_image->entry_point << ")\n" << std::dec;
    std::cout << "Registered PPC functions: " << report.translated_functions << '\n';
    std::cout << "Registered startup HLE handlers: " << startup_hle_count << '\n';
    std::cout << "Registered function imports: " << report.function_imports << '\n';
    std::cout << "Patched function IAT slots: " << report.function_iat_slots << '\n';
    std::cout << "Bound kernel variable exports: " << report.variable_imports << '\n';
    std::cout << "XEX default stack size: 0x" << std::hex << report.default_stack_size
              << "  default heap size: 0x" << report.default_heap_size << std::dec << '\n';
    if (report.tls_info) {
        std::cout << "XEX TLS slots: " << report.tls_info->slot_count
                  << "  template: 0x" << std::hex << report.tls_info->raw_data_address
                  << "  data size: 0x" << report.tls_info->data_size
                  << "  raw size: 0x" << report.tls_info->raw_data_size
                  << std::dec << '\n';
    }
    const auto& startup = report.main_thread;
    std::cout << "Main guest thread: KTHREAD=0x" << std::hex << startup.kthread_address
              << " PCR=0x" << startup.pcr_address
              << " PIB=0x" << startup.process_info_block_address
              << " TLS=0x" << startup.tls_static_address
              << " stack=0x" << startup.stack_limit << "-0x" << startup.stack_base
              << " (SP=0x" << startup.context.r1.u32
              << ", r13=0x" << startup.context.r13.u32 << ")" << std::dec << '\n';

    if (!run_entry_point) {
        std::cout << "Runtime memory, import dispatch and a single guest main-thread "
                     "context are initialized. The game entry point was NOT invoked. "
                     "Use --run to attempt execution; thread scheduling, filesystem, "
                     "graphics, audio and many kernel services remain incomplete.\n";
        return 0;
    }

    const auto entry = memory.get_function<PPCFunc*>(loaded_image->entry_point);
    if (entry == nullptr) {
        std::cerr << "Entry point 0x" << std::hex << loaded_image->entry_point
                  << " has no translated function-table entry.\n";
        return 1;
    }
    std::cout << "Invoking game entry point 0x" << std::hex
              << loaded_image->entry_point << std::dec
              << " (this may hit an unimplemented HLE).\n";
    const auto watchdog_seconds = boot_watchdog_seconds();
    std::stop_source boot_stop;
    std::mutex watchdog_mutex;
    std::condition_variable_any watchdog_condition;
    std::atomic<bool> entry_finished{false};
    std::jthread watchdog;
    if (watchdog_seconds != 0) {
        watchdog = std::jthread([&](std::stop_token stop) {
            std::unique_lock lock(watchdog_mutex);
            const bool finished = watchdog_condition.wait_for(
                lock, stop, std::chrono::seconds(watchdog_seconds),
                [&] { return entry_finished.load(std::memory_order_acquire); });
            if (!finished && !stop.stop_requested() &&
                !entry_finished.load(std::memory_order_acquire)) {
                boot_stop.request_stop();
            }
        });
        std::cout << "Guest boot watchdog: " << watchdog_seconds
                  << " seconds (cooperative import-boundary stop).\n";
    }

    const auto finish_watchdog = [&] {
        entry_finished.store(true, std::memory_order_release);
        watchdog.request_stop();
        watchdog_condition.notify_all();
    };

    try {
        // The process entry point runs on the already prepared guest main
        // thread. The watchdog token interrupts execution at the next HLE
        // import boundary so the guest CPU context can be preserved.
        toohuman::runtime::GuestThreadExecutionScope main_thread_scope(
            boot_stop.get_token());
        entry(report.main_thread.context, memory.base());
    } catch (const toohuman::runtime::GuestThreadExitSignal& exit) {
        finish_watchdog();
        if (boot_stop.stop_requested()) {
            std::cerr << "Guest boot watchdog expired after " << watchdog_seconds
                      << " seconds; execution stopped at a cooperative guest import boundary.\n";
            print_guest_context(report.main_thread.context);
            print_last_import(imports);
            print_critical_section_state(imports, report.main_thread.context, memory.base());
            return 124;
        }
        std::cout << "Guest main thread terminated with exit code 0x"
                  << std::hex << exit.exit_code() << std::dec << ".\n";
        return 0;
    }
    finish_watchdog();
    std::cout << "Guest entry point returned to the host probe.\n";
    return 0;
}
