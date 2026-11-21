#include "ppc/title_runtime.hpp"

#include "ppc/function_table.hpp"
#include "ppc/boot_hle.hpp"

#include <algorithm>
#include <chrono>
#include <cstring>
#include <limits>
#include <vector>

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

bool initialize_guest_thread(GuestAddressSpace& memory,
                             const LoadedPeImage& image,
                             const XexImportResult& xex,
                             GuestHeap& runtime_heap,
                             GuestHeap& stack_heap,
                             std::uint32_t requested_stack_size,
                             std::uint32_t thread_id,
                             std::uint32_t start_address,
                             std::uint32_t start_context,
                             std::uint32_t process_info_block_address,
                             std::uint32_t creation_flags,
                             GuestThreadStartup& state,
                             std::string* error) {
    if (!memory.valid()) {
        if (error) *error = "Guest address space must be reserved before thread startup";
        return false;
    }
    if (image.bytes.empty() || image.bytes.size() != image.image_size) {
        if (error) *error = "Guest thread startup requires a complete mapped-image description";
        return false;
    }
    const auto image_end = static_cast<std::uint64_t>(image.image_base) + image.image_size;
    if (thread_id == 0 || image_end > GuestAddressSpace::kSize ||
        start_address < image.image_base ||
        static_cast<std::uint64_t>(start_address) + 4u > image_end ||
        (start_address & 3u) != 0) {
        if (error) *error = "Guest thread ID or start address is invalid";
        return false;
    }
    if (process_info_block_address != 0) {
        if ((process_info_block_address & 3u) != 0 ||
            static_cast<std::uint64_t>(process_info_block_address) + 0x60u >
                GuestAddressSpace::kSize) {
            if (error) *error = "Guest ProcessInfoBlock address is invalid";
            return false;
        }
        const auto allocation_size = runtime_heap.allocation_size(process_info_block_address);
        if (!allocation_size || *allocation_size < 0x60u) {
            if (error) *error = "Guest ProcessInfoBlock must reference an allocated 0x60-byte heap object";
            return false;
        }
    }
    state = GuestThreadStartup{};
    const auto fail = [&](const char* message) {
        if (error) *error = message;
        return false;
    };

    const std::uint32_t effective_stack_size =
        requested_stack_size != 0 ? requested_stack_size :
        (xex.default_stack_size != 0 ? xex.default_stack_size : 0x40000u);
    const auto native_page_size = GuestAddressSpace::page_size();
    if (native_page_size < 0x1000u ||
        (native_page_size & (native_page_size - 1u)) != 0 ||
        native_page_size > std::numeric_limits<std::uint32_t>::max()) {
        return fail("Host page size is outside the supported guest stack range");
    }
    const auto guard_size = static_cast<std::uint32_t>(native_page_size);
    const std::uint64_t page_mask = guard_size - 1u;
    const std::uint64_t min_stack =
        (0x4000u + page_mask) & ~page_mask;
    if (static_cast<std::uint64_t>(effective_stack_size) >
        std::numeric_limits<std::uint32_t>::max() - 2ull * guard_size - page_mask) {
        return fail("Guest thread stack size is outside the supported range");
    }
    // Keep a 16 KiB minimum and align both guard boundaries to native host pages.
    const auto rounded_stack_size =
        (static_cast<std::uint64_t>(effective_stack_size) + page_mask) & ~page_mask;
    const auto stack_size64 = std::max(rounded_stack_size, min_stack);
    const auto stack_size = static_cast<std::uint32_t>(stack_size64);
    const auto stack_allocation_size =
        static_cast<std::size_t>(stack_size) + 2ull * guard_size;

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

    std::vector<std::uint32_t> runtime_allocations;
    runtime_allocations.reserve(4);
    const auto allocate = [&](std::size_t size, std::size_t alignment,
                              std::uint32_t& out) -> bool {
        const auto address = runtime_heap.allocate(size, alignment);
        if (!address || *address == 0) return false;
        out = *address;
        std::memset(memory.base() + out, 0, size);
        runtime_allocations.push_back(out);
        return true;
    };

    const auto stack_allocation = stack_heap.allocate(stack_allocation_size, guard_size);
    if (!stack_allocation) return fail("Guest stack heap could not allocate the guest thread stack");
    state.stack_allocation_base = *stack_allocation;
    const bool create_process_info_block = process_info_block_address == 0;
    state.owns_process_info_block = create_process_info_block;
    const auto rollback_allocations = [&] {
        (void)memory.protect_region(state.stack_allocation_base,
                                    stack_allocation_size,
                                    GuestMemoryProtection::ReadWrite, nullptr);
        (void)stack_heap.deallocate(state.stack_allocation_base);
        for (auto it = runtime_allocations.rbegin();
             it != runtime_allocations.rend(); ++it) {
            (void)runtime_heap.deallocate(*it);
        }
        state = GuestThreadStartup{};
    };
    const auto fail_after_allocation = [&](const char* message) {
        rollback_allocations();
        return fail(message);
    };

    if (!allocate(0xAB0, 16, state.kthread_address) ||
        !allocate(0x2D8, 16, state.pcr_address) ||
        (create_process_info_block &&
         !allocate(0x60, 16, state.process_info_block_address)) ||
        !allocate(tls_total_size, 16, state.tls_static_address)) {
        return fail_after_allocation("Runtime virtual heap could not allocate guest thread state");
    }
    if (!create_process_info_block)
        state.process_info_block_address = process_info_block_address;

    state.stack_allocation_size = static_cast<std::uint32_t>(stack_allocation_size);
    state.stack_guard_size = guard_size;
    state.stack_limit = state.stack_allocation_base + guard_size;
    state.stack_base = state.stack_limit + stack_size;
    state.stack_size = stack_size;
    state.tls_size = tls_total_size;
    state.tls_dynamic_address = state.tls_static_address + tls_data_size;
    state.thread_id = thread_id;
    state.start_address = start_address;
    state.start_context = start_context;
    state.creation_flags = creation_flags;

    std::memset(memory.base() + state.stack_allocation_base, 0xBE,
                state.stack_allocation_size);
    if (!memory.protect_region(state.stack_allocation_base, guard_size,
                               GuestMemoryProtection::NoAccess, error) ||
        !memory.protect_region(state.stack_base, guard_size,
                               GuestMemoryProtection::NoAccess, error)) {
        return fail_after_allocation("Could not protect the guest thread stack guard pages");
    }

    // Xenia's layout places the static TLS template at tls_static_address;
    // the dynamic TLS slot array is based at tls_static_address+data_size.
    if (tls_raw_size != 0) {
        std::memcpy(memory.base() + state.tls_static_address,
                    image.bytes.data() + tls_source_offset, tls_raw_size);
    }

    // The ProcessInfoBlock is process-wide. Only the first thread creates it.
    if (create_process_info_block) {
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
    }

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
    store_be16(kthread + 0x056, (creation_flags & 0x01u) != 0 ? 1u : 0u);
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
    store_be32(kthread + 0x150, start_address);
    store_be32(kthread + 0x154, state.kthread_address + 0x154);
    store_be32(kthread + 0x158, state.kthread_address + 0x154);
    store_be32(kthread + 0x160, 0);
    store_be32(kthread + 0x16C, creation_flags);
    store_be32(kthread + 0x17C, 1);

    state.context = PPCContext{};
    state.context.r1.u32 = state.stack_base & ~0xFu;
    state.context.r3.u32 = start_context;
    state.context.r13.u32 = state.pcr_address;
    state.context.lr = 0;
    return true;
}

bool release_guest_thread_context(GuestAddressSpace& memory,
                                    GuestHeap& runtime_heap,
                                    GuestHeap& stack_heap,
                                    GuestThreadStartup& state,
                                    std::string* error) {
    const auto fail = [&](const char* message) {
        if (error) *error = message;
        return false;
    };
    if (!memory.valid() || state.kthread_address == 0 ||
        state.pcr_address == 0 || state.tls_static_address == 0 ||
        state.process_info_block_address == 0 || state.tls_size == 0 ||
        state.stack_allocation_base == 0 || state.stack_allocation_size == 0 ||
        state.stack_size == 0 || state.stack_guard_size == 0 ||
        state.stack_limit != state.stack_allocation_base + state.stack_guard_size ||
        static_cast<std::uint64_t>(state.stack_allocation_base) +
                state.stack_allocation_size > GuestAddressSpace::kSize ||
        static_cast<std::uint64_t>(state.stack_limit) + state.stack_size != state.stack_base ||
        static_cast<std::uint64_t>(state.stack_size) + 2ull * state.stack_guard_size !=
            state.stack_allocation_size ||
        static_cast<std::uint64_t>(state.stack_base) + state.stack_guard_size !=
                static_cast<std::uint64_t>(state.stack_allocation_base) +
                    state.stack_allocation_size) {
        return fail("Guest thread context is incomplete or internally inconsistent");
    }

    const auto has_allocation = [](const GuestHeap& heap, std::uint32_t address,
                                   std::size_t expected_size) {
        const auto actual = heap.allocation_size(address);
        return actual && *actual == expected_size;
    };
    if (!has_allocation(runtime_heap, state.kthread_address, 0xAB0u) ||
        !has_allocation(runtime_heap, state.pcr_address, 0x2D8u) ||
        !has_allocation(runtime_heap, state.tls_static_address, state.tls_size) ||
        !has_allocation(stack_heap, state.stack_allocation_base,
                        state.stack_allocation_size)) {
        return fail("Guest thread allocations no longer match the startup record");
    }
    if (state.owns_process_info_block) {
        if (!has_allocation(runtime_heap, state.process_info_block_address, 0x60u))
            return fail("Owned ProcessInfoBlock allocation is missing or has the wrong size");
    } else {
        const auto process_info_size =
            runtime_heap.allocation_size(state.process_info_block_address);
        if (!process_info_size || *process_info_size < 0x60u)
            return fail("Shared ProcessInfoBlock allocation is missing");
    }

    // Stack guard pages were protected during initialization. Restore the full
    // allocation before returning it to the heap so a later owner can reuse it.
    if (!memory.protect_region(state.stack_allocation_base,
                               state.stack_allocation_size,
                               GuestMemoryProtection::ReadWrite, error)) {
        return fail("Could not restore guest stack permissions before release");
    }

    std::memset(memory.base() + state.tls_static_address, 0, state.tls_size);
    std::memset(memory.base() + state.pcr_address, 0, 0x2D8u);
    std::memset(memory.base() + state.kthread_address, 0, 0xAB0u);
    if (state.owns_process_info_block)
        std::memset(memory.base() + state.process_info_block_address, 0, 0x60u);
    std::memset(memory.base() + state.stack_allocation_base, 0,
                state.stack_allocation_size);

    // Exact allocation ownership was checked above. The ProcessInfoBlock is
    // released only by the thread context that created it.
    const bool tls_released = runtime_heap.deallocate(state.tls_static_address);
    const bool pcr_released = runtime_heap.deallocate(state.pcr_address);
    const bool kthread_released = runtime_heap.deallocate(state.kthread_address);
    const bool process_released = !state.owns_process_info_block ||
        runtime_heap.deallocate(state.process_info_block_address);
    const bool stack_released = stack_heap.deallocate(state.stack_allocation_base);
    if (!tls_released || !pcr_released || !kthread_released ||
        !process_released || !stack_released) {
        return fail("Guest thread heap metadata changed during context release");
    }

    state = GuestThreadStartup{};
    return true;
}

bool initialize_guest_main_thread(GuestAddressSpace& memory,
                                  const LoadedPeImage& image,
                                  const XexImportResult& xex,
                                  GuestHeap& runtime_heap,
                                  GuestHeap& stack_heap,
                                  GuestMainThreadStartup& state,
                                  std::string* error) {
    return initialize_guest_thread(
        memory, image, xex, runtime_heap, stack_heap,
        xex.default_stack_size, 1u, image.entry_point, 0u, 0u, 0u,
        state, error);
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
    set_executable_module_handle(imports.executable_module_handle());

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
    auto* stack_heap = imports.stack_heap();
    if (runtime_heap == nullptr || stack_heap == nullptr) {
        if (error) *error = "Guest runtime/stack heaps were not initialized before main-thread startup";
        return false;
    }
    GuestMainThreadStartup main_thread{};
    if (!initialize_guest_main_thread(memory, mapped_image, import_result,
                                      *runtime_heap, *stack_heap, main_thread, error)) {
        return false;
    }

    if (!imports.initialize_thread_runtime(
            memory, mapped_image, import_result, main_thread, error)) {
        std::string ignored;
        (void)release_guest_thread_context(memory, *runtime_heap, *stack_heap,
                                           main_thread, &ignored);
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
