#include "memory/guest_memory.hpp"

#include <array>
#include <cassert>
#include <cstdint>
#include <limits>

using toohuman::runtime::GuestMemory;

int main() {
    std::array<std::uint8_t, 16> bytes{};
    GuestMemory memory{0x82000000u, bytes};

    assert(memory.valid());
    assert(!toohuman::runtime::GuestAddressSpace::is_accessible_range(
        memory.base(), 0x1000u, 4u, toohuman::runtime::GuestMemoryAccess::Read));
    assert(memory.guest_base() == 0x82000000u);
    assert(memory.size() == bytes.size());
    assert(memory.contains(0x82000000u, 1));
    assert(memory.contains(0x82000010u, 0));
    assert(!memory.contains(0x81FFFFFFu, 1));
    assert(!memory.contains(0x82000010u, 1));
    assert(!memory.contains(0x8200000Fu, 2));

    assert(memory.write_be<std::uint16_t>(0x82000000u, 0x1234u));
    assert(bytes[0] == 0x12 && bytes[1] == 0x34);
    assert(memory.read_be<std::uint16_t>(0x82000000u) == 0x1234u);

    assert(memory.write_be<std::uint32_t>(0x82000002u, 0x89ABCDEFu));
    assert((bytes[2] == 0x89 && bytes[3] == 0xAB &&
            bytes[4] == 0xCD && bytes[5] == 0xEF));
    assert(memory.read_be<std::uint32_t>(0x82000002u) == 0x89ABCDEFu);

    assert(memory.write_be<std::uint64_t>(0x82000008u,
                                          0x0123456789ABCDEFull));
    assert(memory.read_be<std::uint64_t>(0x82000008u) ==
           0x0123456789ABCDEFull);

    assert(!memory.read_be<std::uint32_t>(0x8200000Eu));
    assert(!memory.write_be<std::uint32_t>(0x8200000Eu, 0xFFFFFFFFu));

    const GuestMemory& const_memory = memory;
    const auto read_view = const_memory.view(0x82000000u, 4);
    assert(read_view && (*read_view)[0] == 0x12);

    std::array<std::uint8_t, 8> top_bytes{};
    GuestMemory top_of_space{0xFFFFFFF8u, top_bytes};
    assert(top_of_space.valid());
    assert(top_of_space.contains(0xFFFFFFFCu, 4));
    assert(!top_of_space.contains(0xFFFFFFFCu, 8));

    GuestMemory overflowing{0xFFFFFFF8u,
                            std::span<std::uint8_t>(top_bytes).first(8)};
    std::array<std::uint8_t, 9> too_large{};
    GuestMemory invalid{0xFFFFFFF8u, too_large};
    assert(!invalid.valid());
    assert(!invalid.contains(0xFFFFFFF8u, 1));

    return 0;
}
