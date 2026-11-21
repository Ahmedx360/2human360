#include "image/xbox360_pe.hpp"
#include "image/xex_image.hpp"
#include "memory/guest_address_space.hpp"
#include "ppc/title_runtime.hpp"
#include "ppc/boot_hle.hpp"

#include <cstdint>
#include <fstream>
#include <iostream>
#include <limits>
#include <optional>
#include <string>
#include <vector>

namespace {

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
    if (!toohuman::runtime::register_boot_imports(imports, &error)) {
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
    std::cout << "Registered startup HLE handlers: 39" << '\n';
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
              << " (this may terminate the process or hit an unimplemented HLE).\n";
    entry(report.main_thread.context, memory.base());
    std::cout << "Guest entry point returned to the host probe.\n";
    return 0;
}
