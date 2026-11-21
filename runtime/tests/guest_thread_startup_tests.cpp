#include "memory/guest_address_space.hpp"
#include "memory/guest_heap.hpp"
#include "ppc/title_runtime.hpp"

#include <cassert>
#include <cstdint>
#include <string>

namespace {
std::uint16_t read_be16(const std::uint8_t* p) {
    return static_cast<std::uint16_t>((std::uint16_t(p[0]) << 8) | p[1]);
}
std::uint32_t read_be32(const std::uint8_t* p) {
    return (std::uint32_t(p[0]) << 24) | (std::uint32_t(p[1]) << 16) |
           (std::uint32_t(p[2]) << 8) | std::uint32_t(p[3]);
}
}

int main() {
    using namespace toohuman::runtime;
    std::string error;
    auto memory = GuestAddressSpace::reserve(&error);
    assert(memory.valid());

    GuestHeap heap(memory, 0xA0000000u, 0x00100000u);
    GuestHeap stack_heap(memory, 0x70000000u, 0x00100000u);
    assert(heap.initialize(&error));
    assert(stack_heap.initialize(&error));

    LoadedPeImage image{};
    image.image_base = 0x82000000u;
    image.image_size = 0x2000u;
    image.entry_point = 0x82001000u;
    image.bytes.resize(image.image_size);
    for (std::uint32_t i = 0; i < 0x450u; ++i) {
        image.bytes[0x800u + i] = static_cast<std::uint8_t>(i ^ 0xA5u);
    }

    XexImportResult xex{};
    xex.default_stack_size = 0x40000u;
    xex.tls_info = XexTlsInfo{64u, image.image_base + 0x800u, 0x450u, 0x450u};

    GuestMainThreadStartup state{};
    assert(initialize_guest_main_thread(memory, image, xex, heap, stack_heap, state, &error));

    assert(state.thread_id == 1u);
    assert(state.stack_size == 0x40000u);
    assert(state.stack_allocation_base == 0x70000000u);
    assert(state.stack_guard_size == GuestAddressSpace::page_size());
    assert(state.stack_allocation_size == 0x40000u + 2u * state.stack_guard_size);
    assert(stack_heap.available_bytes() == 0x00100000u - state.stack_allocation_size);
    assert(state.kthread_address >= 0xA0000000u);
    assert(state.stack_limit == state.stack_allocation_base + state.stack_guard_size);
    assert(state.stack_base == state.stack_limit + 0x40000u);
    assert(state.context.r1.u32 == state.stack_base);
    assert(state.context.r13.u32 == state.pcr_address);
    assert(state.context.lr == 0);

    const auto* bytes = memory.base();
    // The initializer has already protected both stack guard pages.
    assert(memory.protect_region(state.stack_allocation_base, state.stack_guard_size,
                                 GuestMemoryProtection::NoAccess, &error));
    assert(memory.protect_region(state.stack_base, state.stack_guard_size,
                                 GuestMemoryProtection::NoAccess, &error));

    assert(state.tls_size == 0x550u);
    assert(state.tls_dynamic_address == state.tls_static_address + 0x450u);
    assert(bytes[state.tls_static_address] == image.bytes[0x800u]);
    assert(bytes[state.tls_static_address + 0x44Fu] == image.bytes[0xC4Fu]);
    for (std::uint32_t i = 0; i < 0x100u; ++i)
        assert(bytes[state.tls_dynamic_address + i] == 0);

    const auto* pcr = bytes + state.pcr_address;
    assert(read_be32(pcr + 0x00) == state.tls_static_address);
    assert(read_be32(pcr + 0x30) == state.pcr_address);
    assert(read_be32(pcr + 0x70) == state.stack_base);
    assert(read_be32(pcr + 0x74) == state.stack_limit);
    assert(read_be32(pcr + 0x100) == state.kthread_address);
    assert(read_be32(pcr + 0x10C) == 0);
    assert(read_be32(pcr + 0x150) == 0);

    const auto* kthread = bytes + state.kthread_address;
    assert(kthread[0] == 6);
    assert(read_be32(kthread + 0x05C) == state.stack_base);
    assert(read_be32(kthread + 0x060) == state.stack_limit);
    assert(read_be32(kthread + 0x068) == state.tls_static_address);
    assert(read_be32(kthread + 0x084) == state.process_info_block_address);
    assert(read_be32(kthread + 0x14C) == 1);
    assert(read_be32(kthread + 0x150) == image.entry_point);

    const auto* pib = bytes + state.process_info_block_address;
    assert(read_be32(pib + 0x0C) == 0x7Fu);
    assert(read_be32(pib + 0x10) == 0x001F0000u);
    assert(read_be32(pib + 0x1C) == 16u * 1024u);
    assert(read_be32(pib + 0x24) == 0x450u);
    assert(read_be32(pib + 0x28) == 0x450u);
    assert(read_be16(pib + 0x2C) == 0x100u);
    assert(pib[0x2F] == 1u);

    // A worker thread receives an independent KTHREAD, PCR, stack and TLS,
    // while sharing the process-wide ProcessInfoBlock with the main thread.
    GuestThreadStartup worker{};
    assert(initialize_guest_thread(
        memory, image, xex, heap, stack_heap,
        0x20000u, 2u, image.image_base + 0x1800u, 0xCAFEBABEu,
        state.process_info_block_address, 0x80u, worker, &error));
    assert(worker.thread_id == 2u);
    assert(worker.start_address == image.image_base + 0x1800u);
    assert(worker.start_context == 0xCAFEBABEu);
    assert(worker.creation_flags == 0x80u);
    assert(worker.process_info_block_address == state.process_info_block_address);
    assert(worker.kthread_address != state.kthread_address);
    assert(worker.pcr_address != state.pcr_address);
    assert(worker.tls_static_address != state.tls_static_address);
    assert(worker.stack_allocation_base != state.stack_allocation_base);
    assert(worker.stack_size == 0x20000u);
    assert(worker.stack_guard_size == GuestAddressSpace::page_size());
    assert(worker.stack_allocation_size == 0x20000u + 2u * worker.stack_guard_size);
    assert(worker.context.r3.u32 == 0xCAFEBABEu);
    assert(worker.context.r1.u32 == worker.stack_base);
    assert(worker.context.r13.u32 == worker.pcr_address);
    assert(worker.context.lr == 0);

    const auto* worker_pcr = bytes + worker.pcr_address;
    assert(read_be32(worker_pcr + 0x00) == worker.tls_static_address);
    assert(read_be32(worker_pcr + 0x70) == worker.stack_base);
    assert(read_be32(worker_pcr + 0x74) == worker.stack_limit);
    assert(read_be32(worker_pcr + 0x100) == worker.kthread_address);

    const auto* worker_kthread = bytes + worker.kthread_address;
    assert(read_be32(worker_kthread + 0x05C) == worker.stack_base);
    assert(read_be32(worker_kthread + 0x060) == worker.stack_limit);
    assert(read_be32(worker_kthread + 0x068) == worker.tls_static_address);
    assert(read_be32(worker_kthread + 0x084) == state.process_info_block_address);
    assert(read_be32(worker_kthread + 0x14C) == worker.thread_id);
    assert(read_be32(worker_kthread + 0x150) == worker.start_address);
    assert(read_be32(worker_kthread + 0x16C) == worker.creation_flags);

    assert(bytes[worker.tls_static_address] == image.bytes[0x800u]);
    assert(bytes[worker.tls_static_address + 0x44Fu] == image.bytes[0xC4Fu]);
    for (std::uint32_t i = 0; i < 0x100u; ++i)
        assert(bytes[worker.tls_dynamic_address + i] == 0);

    assert(state.owns_process_info_block);
    assert(!worker.owns_process_info_block);

    const auto runtime_available_with_main_and_worker = heap.available_bytes();
    const auto stack_available_with_main_and_worker = stack_heap.available_bytes();
    auto malformed_worker = worker;
    --malformed_worker.tls_size;
    assert(!release_guest_thread_context(memory, heap, stack_heap,
                                         malformed_worker, &error));
    assert(heap.available_bytes() == runtime_available_with_main_and_worker);
    assert(stack_heap.available_bytes() == stack_available_with_main_and_worker);

    const auto released_worker_stack = worker.stack_allocation_base;
    const auto released_worker_kthread = worker.kthread_address;
    assert(release_guest_thread_context(memory, heap, stack_heap, worker, &error));
    assert(worker.kthread_address == 0);
    assert(!heap.allocation_size(released_worker_kthread));
    assert(stack_heap.available_bytes() ==
           0x00100000u - state.stack_allocation_size);
    // Guard pages are writable again after release, allowing allocator reuse.
    memory.base()[released_worker_stack] = 0x5Au;

    GuestThreadStartup recycled_worker{};
    assert(initialize_guest_thread(
        memory, image, xex, heap, stack_heap,
        0x20000u, 3u, image.image_base + 0x1800u, 0x1234u,
        state.process_info_block_address, 0x80u, recycled_worker, &error));
    assert(!recycled_worker.owns_process_info_block);
    assert(recycled_worker.stack_allocation_base == released_worker_stack);
    assert(release_guest_thread_context(memory, heap, stack_heap,
                                        recycled_worker, &error));

    GuestThreadStartup invalid_worker{};
    assert(!initialize_guest_thread(
        memory, image, xex, heap, stack_heap,
        0x20000u, 0u, image.image_base + 0x1800u, 0u,
        state.process_info_block_address, 0u, invalid_worker, &error));

    GuestThreadStartup invalid_process_block{};
    assert(!initialize_guest_thread(
        memory, image, xex, heap, stack_heap,
        0x20000u, 3u, image.image_base + 0x1800u, 0u,
        0xA1000000u, 0u, invalid_process_block, &error));

    auto invalid_xex = xex;
    invalid_xex.tls_info->slot_count = 0x4000u;
    GuestMainThreadStartup invalid_state{};
    assert(!initialize_guest_main_thread(
        memory, image, invalid_xex, heap, stack_heap, invalid_state, &error));

    auto invalid_image = image;
    invalid_image.entry_point = 0x83000000u;
    assert(!initialize_guest_main_thread(
        memory, invalid_image, xex, heap, stack_heap, invalid_state, &error));

    assert(state.owns_process_info_block);
    assert(release_guest_thread_context(memory, heap, stack_heap, state, &error));
    assert(heap.available_bytes() == heap.size());
    assert(stack_heap.available_bytes() == stack_heap.size());

    // Exhaust the runtime heap only after the stack allocation and several
    // KTHREAD/PCR/ProcessInfo allocations have succeeded. Failure must roll
    // back every partial allocation and restore the stack heap.
    GuestHeap constrained_runtime_heap(memory, 0xA0200000u, 0x1000u);
    GuestHeap constrained_stack_heap(memory, 0x70100000u, 0x50000u);
    assert(constrained_runtime_heap.initialize(&error));
    assert(constrained_stack_heap.initialize(&error));
    GuestThreadStartup partial_startup{};
    assert(!initialize_guest_main_thread(
        memory, image, xex, constrained_runtime_heap, constrained_stack_heap,
        partial_startup, &error));
    assert(partial_startup.kthread_address == 0);
    assert(constrained_runtime_heap.available_bytes() ==
           constrained_runtime_heap.size());
    assert(constrained_stack_heap.available_bytes() ==
           constrained_stack_heap.size());
    return 0;
}
