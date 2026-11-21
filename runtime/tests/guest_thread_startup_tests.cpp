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
    assert(heap.initialize(&error));

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
    assert(initialize_guest_main_thread(memory, image, xex, heap, state, &error));

    assert(state.thread_id == 1u);
    assert(state.stack_size == 0x40000u);
    assert(state.stack_allocation_size == 0x42000u);
    assert(state.stack_limit == state.stack_allocation_base + 0x1000u);
    assert(state.stack_base == state.stack_limit + 0x40000u);
    assert(state.context.r1.u32 == state.stack_base);
    assert(state.context.r13.u32 == state.pcr_address);
    assert(state.context.lr == 0);

    const auto* bytes = memory.base();
    // Guard pages can be moved between protections via the guest address-space API.
    assert(memory.protect_region(state.stack_allocation_base, 0x1000u,
                                 GuestMemoryProtection::ReadOnly, &error));
    assert(memory.protect_region(state.stack_allocation_base, 0x1000u,
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

    auto invalid_xex = xex;
    invalid_xex.tls_info->slot_count = 0x4000u;
    GuestMainThreadStartup invalid_state{};
    assert(!initialize_guest_main_thread(
        memory, image, invalid_xex, heap, invalid_state, &error));

    auto invalid_image = image;
    invalid_image.entry_point = 0x83000000u;
    assert(!initialize_guest_main_thread(
        memory, invalid_image, xex, heap, invalid_state, &error));
    return 0;
}
