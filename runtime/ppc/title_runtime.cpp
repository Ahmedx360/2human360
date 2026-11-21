#include "ppc/title_runtime.hpp"

#include "ppc/function_table.hpp"
#include "ppc/boot_hle.hpp"

#include <chrono>
#include <cstring>
#include <limits>

namespace toohuman::runtime {
namespace {

void store_be16(std::uint8_t* p, std::uint16_t value) {
    p[0] = static_cast<std::uint8_t>(value >> 8);
    p[1] = static_cast<std::uint8_t>(value);
}
void store_be32(std::uint8_t* p, std::uint32_t value) {
    p[0] = static_cast<std::uint8_t>(value >> 24);
    p[1] = static_cast<std::uint8_t>(value >> 16);
    p[2] = static_cast<std::uint8_t>(value >> 8);
    p[3] = static_cast<std::uint8_t>(value);
}
void store_be64(std::uint8_t* p, std::uint64_t value) {
    store_be32(p, static_cast<std::uint32_t>(value >> 32));
    store_be32(p + 4, static_cast<std::uint32_t>(value));
}

std::uint64_t guest_system_time_100ns() {
    constexpr std::uint64_t kWindowsEpochOffset100ns = 116444736000000000ull;
    const auto now = std::chrono::system_clock::now().time_since_epoch();
    const auto unix_100ns =
        std::chrono::duration_cast<std::chrono::nanoseconds>(now).count() / 100;
    return kWindowsEpochOffset100ns + static_cast<std::uint64_t>(unix_100ns);
}

} // namespace

bool initialize_guest_main_thread(GuestAddressSpace& memory,
                                  const LoadedPeImage& image,
                                  const XexImportResult& xex,
                                  GuestHeap& runtime_heap,
                                  GuestMainThreadStartup& state,
                                  std::string* error) {
    if (!memory.valid()) {
        if (error) *error = "Guest address space must be reserved before thread startup";
        return false;
    }
    if (image.bytes.empty() || image.bytes.size() != image.image_size) {
        if (error) *error = "Guest thread startup requires a complete mapped-image description";
        return false;
    }
    const auto fail = [&](const char* message) {
        if (error) *error = message;
        return false;
    };

    const std::uint32_t requested_stack_size =
        xex.default_stack_size != 0 ? xex.default_stack_size : 0x40000u;
    if (requested_stack_size < 0x1000u ||
        requested_stack_size > std::numeric_limits<std::uint32_t>::max() - 0x2FFFu) {
        return fail("XEX default stack size is outside the supported range");
    }
    // Xenia rounds the guest stack up to the page size and reserves one
    // page on either side for guard-page support.
    const std::uint32_t stack_size =
        (requested_stack_size + 0xFFFu) & ~0xFFFu;

    const std::uint32_t tls_slots =
        xex.tls_info && xex.tls_info->slot_count != 0 ? xex.tls_info->slot_count : 1024u;
    const std::uint32_t tls_data_size = xex.tls_info ? xex.tls_info->data_size : 0u;
    const std::uint32_t tls_raw_size = xex.tls_info ? xex.tls_info->raw_data_size : 0u;
    if (tls_slots > 0x3FFFu ||
        static_cast<std::uint64_t>(tls_slots) * 4u + tls_data_size >
            std::numeric_limits<std::uint32_t>::max() ||
        tls_raw_size > tls_data_size) {
        return fail("XEX TLS slot count or data size is outside the supported range");
    }
    const auto tls_total_size =
        static_cast<std::uint32_t>(static_cast<std::uint64_t>(tls_slots) * 4u + tls_data_size);

    std::size_t tls_source_offset = 0;
    if (tls_raw_size != 0) {
        if (!xex.tls_info || xex.tls_info->raw_data_address < image.image_base) {
            return fail("XEX TLS raw-data address does not belong to the guest image");
        }
        const auto offset = static_cast<std::uint64_t>(
            xex.tls_info->raw_data_address) - image.image_base;
        if (offset > image.bytes.size() || tls_raw_size > image.bytes.size() - offset) {
            return fail("XEX TLS raw-data template exceeds the loaded PE image");
        }
        tls_source_offset = static_cast<std::size_t>(offset);
    }

    const auto allocate = [&](std::size_t size, std::size_t alignment,
                              std::uint32_t& out) -> bool {
        const auto address = runtime_heap.allocate(size, alignment);
        if (!address || *address == 0) return false;
        out = *address;
        std::memset(memory.base() + out, 0, size);
        return true;
    };

    const auto stack_allocation_size = static_cast<std::size_t>(stack_size) + 0x2000u;
    if (!allocate(stack_allocation_size, 0x1000, state.stack_allocation_base) ||
        !allocate(0xAB0, 16, state.kthread_address) ||
        !allocate(0x2D8, 16, state.pcr_address) ||
        !allocate(0x60, 16, state.process_info_block_address) ||
        !allocate(tls_total_size, 16, state.tls_static_address)) {
        return fail("Runtime virtual heap could not allocate the guest main-thread state");
    }

    state.stack_allocation_size = static_cast<std::uint32_t>(stack_allocation_size);
    state.stack_limit = state.stack_allocation_base + 0x1000u;
    state.stack_base = state.stack_limit + stack_size;
    state.stack_size = stack_size;
    state.tls_size = tls_total_size;
    state.tls_dynamic_address = state.tls_static_address + tls_data_size;
    state.thread_id = 1;

    std::memset(memory.base() + state.stack_allocation_base, 0xBE,
                state.stack_allocation_size);
    if (!memory.protect_region(state.stack_allocation_base, 0x1000u,
                               GuestMemoryProtection::NoAccess, error) ||
        !memory.protect_region(state.stack_base, 0x1000u,
                               GuestMemoryProtection::NoAccess, error)) {
        return fail("Could not protect the main-thread stack guard pages");
    }

    // Xenia's layout places the static TLS template at tls_static_address;
    // the dynamic TLS slot array is based at tls_static_address+data_size.
    if (tls_raw_size != 0) {
        std::memcpy(memory.base() + state.tls_static_address,
                    image.bytes.data() + tls_source_offset, tls_raw_size);
    }

    // Match Xenia's 0x60-byte ProcessInfoBlock. Process type 1 is user/title.
    auto* process_info = memory.base() + state.process_info_block_address;
    store_be32(process_info + 0x04, 0);
    store_be32(process_info + 0x08, 0);
    store_be32(process_info + 0x0C, 0x0000007Fu);
    store_be32(process_info + 0x10, 0x001F0000u);
    store_be32(process_info + 0x14, 0); // Thread count is maintained by scheduler.
    process_info[0x1B] = 0x06;
    store_be32(process_info + 0x1C, 16u * 1024u);
    store_be32(process_info + 0x24, tls_data_size);
    store_be32(process_info + 0x28, tls_raw_size);
    store_be16(process_info + 0x2C, static_cast<std::uint16_t>(tls_slots * 4u));
    process_info[0x2F] = 1; // X_PROCTYPE_USER.
    store_be32(process_info + 0x54, 0);
    store_be32(process_info + 0x58, 0);

    auto* pcr = memory.base() + state.pcr_address;
    store_be32(pcr + 0x00, state.tls_static_address);
    store_be32(pcr + 0x30, state.pcr_address);
    store_be32(pcr + 0x70, state.stack_base);
    store_be32(pcr + 0x74, state.stack_limit);
    store_be32(pcr + 0x100, state.kthread_address);
    store_be32(pcr + 0x10C, 0); // First virtual Xenon CPU.
    store_be32(pcr + 0x150, 0); // Not executing a DPC.

    auto* kthread = memory.base() + state.kthread_address;
    kthread[0] = 6; // X_DISPATCH_HEADER type: thread.
    store_be32(kthread + 0x010, state.kthread_address + 0x010);
    store_be32(kthread + 0x014, state.kthread_address + 0x010);
    store_be32(kthread + 0x040, state.kthread_address + 0x020);
    store_be32(kthread + 0x044, state.kthread_address + 0x020);
    store_be32(kthread + 0x048, state.kthread_address);
    store_be32(kthread + 0x04C, state.kthread_address + 0x018);
    store_be16(kthread + 0x054, 0x0102);
    store_be16(kthread + 0x056, 1);
    store_be32(kthread + 0x05C, state.stack_base);
    store_be32(kthread + 0x060, state.stack_limit);
    store_be32(kthread + 0x068, state.tls_static_address);
    kthread[0x06C] = 0;
    store_be32(kthread + 0x074, state.kthread_address + 0x074);
    store_be32(kthread + 0x078, state.kthread_address + 0x074);
    store_be32(kthread + 0x07C, state.kthread_address + 0x07C);
    store_be32(kthread + 0x080, state.kthread_address + 0x07C);
    store_be32(kthread + 0x084, state.process_info_block_address);
    kthread[0x08B] = 1;
    store_be32(kthread + 0x09C, 0xFDFFD7FFu);
    store_be32(kthread + 0x0D0, state.stack_base);
    store_be64(kthread + 0x130, guest_system_time_100ns());
    store_be32(kthread + 0x144, state.kthread_address + 0x144);
    store_be32(kthread + 0x148, state.kthread_address + 0x144);
    store_be32(kthread + 0x14C, state.thread_id);
    store_be32(kthread + 0x150, image.entry_point);
    store_be32(kthread + 0x154, state.kthread_address + 0x154);
    store_be32(kthread + 0x158, state.kthread_address + 0x154);
    store_be32(kthread + 0x160, 0);
    store_be32(kthread + 0x16C, 0);
    store_be32(kthread + 0x17C, 1);

    state.context = PPCContext{};
    state.context.r1.u32 = state.stack_base & ~0xFu;
    state.context.r13.u32 = state.pcr_address;
    state.context.lr = 0;
    return true;
}

bool initialize_title_runtime(GuestAddressSpace& memory,
                              const LoadedPeImage& image,
                              std::span<const std::uint8_t> xex_file,
                              PpcImportRegistry& imports,
                              TitleRuntimeInitReport* report,
                              std::string* error) {
    if (memory.valid() && memory.image_mapped()) {
        if (error) *error = "Title runtime initialization requires a fresh guest address space";
        return false;
    }

    const auto import_result = parse_xex2_imports(xex_file, image);
    if (!import_result) {
        if (error) *error = import_result.error;
        return false;
    }

    if (!memory.valid()) {
        if (error) *error = "Reserve the 4 GiB guest address space before title initialization";
        return false;
    }

    // Patch all data pointers in a private image copy before mapping applies
    // read-only section permissions. Function IATs point to guest code thunks;
    // variable IATs point to stable kernel-export storage in the runtime heap.
    LoadedPeImage mapped_image = image;
    std::size_t function_iat_count = 0;
    if (!patch_xex_function_iat_slots(
            mapped_image, import_result.imports, &function_iat_count, error)) {
        return false;
    }

    std::size_t variable_import_count = 0;
    if (!imports.prepare_variable_imports(
            memory, mapped_image, xex_file, import_result.imports,
            &variable_import_count, error)) {
        return false;
    }
    boot_hle::set_executable_module_handle(imports.executable_module_handle());

    if (!memory.map_image(mapped_image, error)) return false;

    std::size_t translated_count = 0;
    if (!initialize_recompiled_function_table(memory, &translated_count, error)) {
        return false;
    }

    std::size_t registered_count = 0;
    if (!imports.install(memory, import_result.imports, &registered_count, error)) {
        return false;
    }

    auto* runtime_heap = imports.runtime_heap();
    if (runtime_heap == nullptr) {
        if (error) *error = "Guest runtime heap was not initialized before main-thread startup";
        return false;
    }
    GuestMainThreadStartup main_thread{};
    if (!initialize_guest_main_thread(memory, mapped_image, import_result,
                                      *runtime_heap, main_thread, error)) {
        return false;
    }

    if (report) {
        report->translated_functions = translated_count;
        report->function_imports = registered_count;
        report->function_iat_slots = function_iat_count;
        report->variable_imports = variable_import_count;
        report->default_stack_size = import_result.default_stack_size;
        report->default_heap_size = import_result.default_heap_size;
        report->tls_info = import_result.tls_info;
        report->main_thread = main_thread;
    }
    return true;
}

} // namespace toohuman::runtime
