#include "gpu/pm4_guest_ring.hpp"

#include <array>
#include <cassert>
#include <cstdint>
#include <limits>
#include <string>
#include <utility>
#include <vector>

namespace {

using toohuman::runtime::Pm4CallbackResult;

struct Capture {
    std::vector<std::pair<std::uint32_t, std::uint32_t>> registers;
    std::uint32_t opcode{};
    std::vector<std::uint32_t> payload;
};

bool write_register(void* opaque, std::uint32_t index, std::uint32_t value) {
    static_cast<Capture*>(opaque)->registers.emplace_back(index, value);
    return true;
}

Pm4CallbackResult type3(void* opaque, std::uint32_t opcode, bool,
           std::span<const std::uint32_t> payload) {
    auto& capture = *static_cast<Capture*>(opaque);
    if (opcode == 0x3Cu) return Pm4CallbackResult::Deferred;
    capture.opcode = opcode;
    capture.payload.assign(payload.begin(), payload.end());
    return Pm4CallbackResult::Accepted;
}

void store_be32(std::uint8_t* bytes, std::uint32_t value) {
    bytes[0] = static_cast<std::uint8_t>(value >> 24);
    bytes[1] = static_cast<std::uint8_t>(value >> 16);
    bytes[2] = static_cast<std::uint8_t>(value >> 8);
    bytes[3] = static_cast<std::uint8_t>(value);
}

std::uint32_t load_be32(const std::uint8_t* bytes) {
    return (static_cast<std::uint32_t>(bytes[0]) << 24) |
           (static_cast<std::uint32_t>(bytes[1]) << 16) |
           (static_cast<std::uint32_t>(bytes[2]) << 8) |
           static_cast<std::uint32_t>(bytes[3]);
}

} // namespace

int main() {
    using namespace toohuman::runtime;

    std::uint32_t guest_address = 0;
    assert(xenos_physical_to_guest_address(0x00010000u, 0x1000u, guest_address));
    assert(guest_address == 0xA0010000u);
    assert(xenos_physical_to_guest_address(0xA0010000u, 4u, guest_address));
    assert(guest_address == 0xA0010000u);
    assert(!xenos_physical_to_guest_address(0x1FFFFFF8u, 16u, guest_address));
    assert(!xenos_physical_to_guest_address(
        0x00001000u, std::numeric_limits<std::size_t>::max(), guest_address));
    assert(!xenos_physical_to_guest_address(0x00001000u, 0u, guest_address));

    std::string error;
    auto memory = GuestAddressSpace::reserve(&error);
    assert(memory.valid());

    constexpr std::uint32_t kRingPhysical = 0x00010000u;
    constexpr std::uint32_t kRingGuest = 0xA0010000u;
    constexpr std::uint32_t kWritebackPhysical = 0x00020000u;
    constexpr std::uint32_t kWritebackGuest = 0xA0020000u;
    assert(memory.commit_region(kRingGuest, 0x1000u, &error));
    assert(memory.commit_region(kWritebackGuest, 0x1000u, &error));

    // Eight-dword ring. The type-0 packet wraps after its first payload dword.
    auto* const ring = memory.base() + kRingGuest;
    store_be32(ring + 6u * 4u, (2u << 16) | 0x40u);
    store_be32(ring + 7u * 4u, 0x11u);
    store_be32(ring + 0u * 4u, 0x22u);
    store_be32(ring + 1u * 4u, 0x33u);

    Capture capture;
    const Pm4DispatchCallbacks callbacks{&capture, write_register, type3};
    const auto result = dispatch_pm4_guest_ring(
        memory, kRingPhysical, 2u, 6u, 2u, callbacks, 4u);
    assert(result);
    assert(result.dispatch.packets == 1u);
    assert(result.dispatch.dwords_consumed == 4u);
    assert(result.dispatch.read_index == 2u);
    assert(capture.registers.size() == 3u);
    assert((capture.registers[0] == std::pair<std::uint32_t, std::uint32_t>{0x40u, 0x11u}));
    assert((capture.registers[1] == std::pair<std::uint32_t, std::uint32_t>{0x41u, 0x22u}));
    assert((capture.registers[2] == std::pair<std::uint32_t, std::uint32_t>{0x42u, 0x33u}));

    // Type-3 packet at the end wraps into the beginning of the same ring.
    store_be32(ring + 6u * 4u, 0xC0000000u | (1u << 16) | (0x37u << 8));
    store_be32(ring + 7u * 4u, 0xABu);
    store_be32(ring + 0u * 4u, 0xCDu);
    const auto type3_result = dispatch_pm4_guest_ring(
        memory, kRingPhysical, 2u, 6u, 1u, callbacks, 4u);
    assert(type3_result);
    assert(type3_result.dispatch.packets == 1u);
    assert(type3_result.dispatch.read_index == 1u);
    assert(capture.opcode == 0x37u);
    assert((capture.payload == std::vector<std::uint32_t>{0xABu, 0xCDu}));

    // A deferred Type-3 wait leaves the guest ring read pointer untouched.
    store_be32(ring + 4u * 4u, 0xC0000000u | (4u << 16) | (0x3Cu << 8));
    store_be32(ring + 5u * 4u, 3u);
    store_be32(ring + 6u * 4u, 0x12345678u);
    store_be32(ring + 7u * 4u, 0xFFFFFFFFu);
    store_be32(ring + 0u * 4u, 0u);
    store_be32(ring + 1u * 4u, 0u);
    const auto pending = dispatch_pm4_guest_ring(
        memory, kRingPhysical, 2u, 4u, 2u, callbacks, 4u);
    assert(pending.error == Pm4GuestRingError::CallbackDeferred);
    assert(pending.dispatch.packets == 0u);
    assert(pending.dispatch.dwords_consumed == 0u);
    assert(pending.dispatch.read_index == 4u);

    // Read-pointer writeback must use guest big-endian byte order.
    assert(write_pm4_guest_read_pointer(memory, kWritebackPhysical, 0x12345678u));
    assert(load_be32(memory.base() + kWritebackGuest) == 0x12345678u);

    const auto empty = dispatch_pm4_guest_ring(
        memory, kRingPhysical, 2u, 3u, 3u, callbacks, 1u);
    assert(empty);
    assert(empty.dispatch.packets == 0u);
    assert(empty.dispatch.read_index == 3u);

    const auto bad_read = dispatch_pm4_guest_ring(
        memory, kRingPhysical, 2u, 8u, 0u, callbacks, 1u);
    assert(bad_read.error == Pm4GuestRingError::InvalidReadPointer);
    const auto bad_write = dispatch_pm4_guest_ring(
        memory, kRingPhysical, 2u, 0u, 8u, callbacks, 1u);
    assert(bad_write.error == Pm4GuestRingError::InvalidWritePointer);
    const auto bad_size = dispatch_pm4_guest_ring(
        memory, kRingPhysical, 27u, 0u, 0u, callbacks, 1u);
    assert(bad_size.error == Pm4GuestRingError::InvalidRingSize);
    const auto bad_base = dispatch_pm4_guest_ring(
        memory, 0x1FFFFFF8u, 2u, 0u, 1u, callbacks, 1u);
    assert(bad_base.error == Pm4GuestRingError::InvalidPhysicalRange);
    const auto unaligned_base = dispatch_pm4_guest_ring(
        memory, kRingPhysical + 2u, 2u, 0u, 1u, callbacks, 1u);
    assert(unaligned_base.error == Pm4GuestRingError::InvalidPhysicalRange);

    // A valid physical range that has not been committed must fail safely.
    const auto not_mapped = dispatch_pm4_guest_ring(
        memory, 0x00030000u, 2u, 0u, 1u, callbacks, 1u);
    assert(not_mapped.error == Pm4GuestRingError::RingNotReadable);

    // Linear indirect buffers are bounded by their explicit dword count
    // and do not wrap at the end of a ring.
    constexpr std::uint32_t kIndirectPhysical = 0x00040000u;
    constexpr std::uint32_t kIndirectGuest = 0xA0040000u;
    assert(memory.commit_region(kIndirectGuest, 0x1000u, &error));
    auto* const indirect = memory.base() + kIndirectGuest;
    store_be32(indirect, 0x20u); // Type-0, one value.
    store_be32(indirect + 4u, 0x1234ABCDu);
    const auto indirect_result = dispatch_pm4_guest_indirect_buffer(
        memory, kIndirectPhysical, 2u, callbacks, 4u);
    assert(indirect_result);
    assert(indirect_result.dispatch.packets == 1u);
    assert(indirect_result.dispatch.dwords_consumed == 2u);
    assert(indirect_result.dispatch.read_index == 2u);
    assert((capture.registers.back() ==
            std::pair<std::uint32_t, std::uint32_t>{0x20u, 0x1234ABCDu}));

    store_be32(indirect, (2u << 16) | 0x20u); // Needs three payload dwords.
    store_be32(indirect + 4u, 0x55u);
    const auto truncated_indirect = dispatch_pm4_guest_indirect_buffer(
        memory, kIndirectPhysical, 2u, callbacks, 4u);
    assert(truncated_indirect.error == Pm4GuestRingError::PacketDecodeFailed);
    const auto no_packet_budget = dispatch_pm4_guest_indirect_buffer(
        memory, kIndirectPhysical, 2u, callbacks, 0u);
    assert(no_packet_budget.error == Pm4GuestRingError::PacketLimitReached);
    const auto misaligned_indirect = dispatch_pm4_guest_indirect_buffer(
        memory, kIndirectPhysical + 2u, 2u, callbacks, 4u);
    assert(misaligned_indirect.error == Pm4GuestRingError::InvalidPhysicalRange);

    // PM4 MEM_WRITE applies the four documented Xenos endian modes and
    // validates the entire destination before storing any dword.
    constexpr std::uint32_t kMemWriteGuest = 0xA0040100u;
    assert(write_xenos_guest_physical_dwords(memory, 0x00040100u,
                                               std::array<std::uint32_t, 1>{0x11223344u}));
    assert(load_be32(memory.base() + kMemWriteGuest) == 0x11223344u);
    assert(write_xenos_guest_physical_dwords(memory, 0x00040105u,
                                               std::array<std::uint32_t, 1>{0x11223344u}));
    assert(load_be32(memory.base() + kMemWriteGuest + 4u) == 0x22114433u);
    assert(write_xenos_guest_physical_dwords(memory, 0x0004010Au,
                                               std::array<std::uint32_t, 1>{0x11223344u}));
    assert(load_be32(memory.base() + kMemWriteGuest + 8u) == 0x44332211u);
    assert(write_xenos_guest_physical_dwords(memory, 0x0004010Fu,
                                               std::array<std::uint32_t, 1>{0x11223344u}));
    assert(load_be32(memory.base() + kMemWriteGuest + 12u) == 0x33441122u);
    const std::array<std::uint32_t, 4> endian_addresses{
        0x00040100u, 0x00040105u, 0x0004010Au, 0x0004010Fu
    };
    for (const auto address : endian_addresses) {
        std::uint32_t logical_value = 0;
        assert(read_xenos_guest_physical_dword(
            memory, address, logical_value));
        assert(logical_value == 0x11223344u);
    }
    assert(!read_xenos_guest_physical_dword(
        memory, 0x00050000u, guest_address));

    store_be32(indirect + 0xFFCu, 0xA5A5A5A5u);
    const std::array<std::uint32_t, 2> crossing_write{0x11111111u, 0x22222222u};
    assert(!write_xenos_guest_physical_dwords(
        memory, 0x00040FFCu, crossing_write));
    assert(load_be32(indirect + 0xFFCu) == 0xA5A5A5A5u);

    const auto empty_indirect = dispatch_pm4_guest_indirect_buffer(
        memory, kIndirectPhysical, 0u, callbacks, 4u);
    assert(empty_indirect.error == Pm4GuestRingError::InvalidIndirectBufferLength);
    const auto overlong_indirect = dispatch_pm4_guest_indirect_buffer(
        memory, kIndirectPhysical, 0x00100001u, callbacks, 4u);
    assert(overlong_indirect.error == Pm4GuestRingError::InvalidIndirectBufferLength);
    const auto unmapped_indirect = dispatch_pm4_guest_indirect_buffer(
        memory, 0x00050000u, 2u, callbacks, 4u);
    assert(unmapped_indirect.error == Pm4GuestRingError::RingNotReadable);

    // The writeback target must be committed and writable.
    assert(!write_pm4_guest_read_pointer(memory, 0x00030000u, 7u));
    return 0;
}
