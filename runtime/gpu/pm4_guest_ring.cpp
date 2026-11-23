#include "gpu/pm4_guest_ring.hpp"

#include <algorithm>
#include <array>
#include <cstddef>
#include <cstdint>
#include <limits>
#include <span>

namespace toohuman::runtime {
namespace {

constexpr std::uint64_t kPhysicalWindowSize = 0x20000000ull;
constexpr std::uint32_t kPhysicalAliasBase = 0xA0000000u;
constexpr std::uint32_t kMaxRingSizeLog2 = 26u;
constexpr std::size_t kMaxPacketDwords = 0x4001u;

std::uint32_t load_be32(const std::uint8_t* bytes) noexcept {
    return (static_cast<std::uint32_t>(bytes[0]) << 24) |
           (static_cast<std::uint32_t>(bytes[1]) << 16) |
           (static_cast<std::uint32_t>(bytes[2]) << 8) |
           static_cast<std::uint32_t>(bytes[3]);
}

void store_be32(std::uint8_t* bytes, std::uint32_t value) noexcept {
    bytes[0] = static_cast<std::uint8_t>(value >> 24);
    bytes[1] = static_cast<std::uint8_t>(value >> 16);
    bytes[2] = static_cast<std::uint8_t>(value >> 8);
    bytes[3] = static_cast<std::uint8_t>(value);
}

Pm4GuestRingError map_dispatch_error(Pm4DispatchError error) noexcept {
    switch (error) {
    case Pm4DispatchError::None:
        return Pm4GuestRingError::None;
    case Pm4DispatchError::PacketDecodeFailed:
        return Pm4GuestRingError::PacketDecodeFailed;
    case Pm4DispatchError::MissingRegisterHandler:
        return Pm4GuestRingError::MissingRegisterHandler;
    case Pm4DispatchError::MissingType3Handler:
        return Pm4GuestRingError::MissingType3Handler;
    case Pm4DispatchError::CallbackRejected:
        return Pm4GuestRingError::CallbackRejected;
    case Pm4DispatchError::PacketLimitReached:
        return Pm4GuestRingError::PacketLimitReached;
    }
    return Pm4GuestRingError::PacketDecodeFailed;
}

} // namespace

bool xenos_physical_to_guest_address(
    std::uint32_t physical_address, std::size_t size,
    std::uint32_t& guest_address) noexcept {
    const auto physical = static_cast<std::uint64_t>(physical_address & 0x1FFFFFFFu);
    if (size == 0 || physical + size > kPhysicalWindowSize)
        return false;

    const auto guest = static_cast<std::uint64_t>(kPhysicalAliasBase) + physical;
    if (guest + size > (std::uint64_t{1} << 32) ||
        guest > std::numeric_limits<std::uint32_t>::max())
        return false;

    guest_address = static_cast<std::uint32_t>(guest);
    return true;
}

Pm4GuestRingResult dispatch_pm4_guest_ring(
    GuestAddressSpace& memory,
    std::uint32_t physical_base,
    std::uint32_t size_log2,
    std::uint32_t read_index,
    std::uint32_t write_index,
    const Pm4DispatchCallbacks& callbacks,
    std::size_t max_packets) {
    Pm4GuestRingResult result{};
    result.dispatch.read_index = read_index;

    if (!memory.valid()) {
        result.error = Pm4GuestRingError::InvalidAddressSpace;
        return result;
    }
    if (size_log2 > kMaxRingSizeLog2) {
        result.error = Pm4GuestRingError::InvalidRingSize;
        return result;
    }

    const auto ring_bytes_64 = std::uint64_t{1} << (size_log2 + 3u);
    const auto ring_dwords_64 = ring_bytes_64 / sizeof(std::uint32_t);
    std::uint32_t ring_guest_address = 0;
    if (!xenos_physical_to_guest_address(
            physical_base, static_cast<std::size_t>(ring_bytes_64),
            ring_guest_address)) {
        result.error = Pm4GuestRingError::InvalidPhysicalRange;
        return result;
    }
    if (read_index >= ring_dwords_64) {
        result.error = Pm4GuestRingError::InvalidReadPointer;
        return result;
    }
    if (write_index >= ring_dwords_64) {
        result.error = Pm4GuestRingError::InvalidWritePointer;
        return result;
    }
    if (read_index == write_index)
        return result;

    auto* const guest_base = memory.base();
    if (!GuestAddressSpace::is_accessible_range(
            guest_base, ring_guest_address,
            static_cast<std::size_t>(ring_bytes_64), GuestMemoryAccess::Read)) {
        result.error = Pm4GuestRingError::RingNotReadable;
        return result;
    }

    // This mirrors the hardware's modulo-dword pointer arithmetic while only
    // touching the occupied portion of the ring and only buffering one packet.
    std::array<std::uint32_t, kMaxPacketDwords> packet_words{};
    const auto ring_dwords = static_cast<std::size_t>(ring_dwords_64);

    while (result.dispatch.read_index != write_index) {
        if (result.dispatch.packets >= max_packets) {
            result.error = Pm4GuestRingError::PacketLimitReached;
            return result;
        }

        const auto read = static_cast<std::size_t>(result.dispatch.read_index);
        const std::size_t available = write_index > read
            ? static_cast<std::size_t>(write_index) - read
            : ring_dwords - read + write_index;
        const auto copied = std::min(available, packet_words.size());

        for (std::size_t i = 0; i < copied; ++i) {
            const auto ring_index = (read + i) % ring_dwords;
            const auto byte_offset = ring_index * sizeof(std::uint32_t);
            packet_words[i] = load_be32(guest_base + ring_guest_address + byte_offset);
        }

        const auto packet_span = std::span<const std::uint32_t>(
            packet_words.data(), copied);
        const auto decoded = decode_pm4_packet(packet_span, 0);
        if (!decoded) {
            result.error = Pm4GuestRingError::PacketDecodeFailed;
            return result;
        }

        const auto packet_dwords = decoded.packet.dword_count;
        const auto dispatched = dispatch_pm4_stream(
            packet_span.first(packet_dwords), callbacks, 1);
        if (!dispatched) {
            result.error = map_dispatch_error(dispatched.error);
            return result;
        }

        result.dispatch.read_index = static_cast<std::uint32_t>(
            (read + packet_dwords) % ring_dwords);
        result.dispatch.dwords_consumed += packet_dwords;
        ++result.dispatch.packets;
    }
    return result;
}

Pm4GuestRingResult dispatch_pm4_guest_indirect_buffer(
    GuestAddressSpace& memory,
    std::uint32_t physical_address,
    std::uint32_t dword_count,
    const Pm4DispatchCallbacks& callbacks,
    std::size_t max_packets) {
    Pm4GuestRingResult result{};
    if (!memory.valid()) {
        result.error = Pm4GuestRingError::InvalidAddressSpace;
        return result;
    }
    constexpr std::uint32_t kMaxIndirectBufferDwords = 0x00100000u;
    if (dword_count == 0 || dword_count > kMaxIndirectBufferDwords) {
        result.error = Pm4GuestRingError::InvalidIndirectBufferLength;
        return result;
    }
    if ((physical_address & 3u) != 0) {
        result.error = Pm4GuestRingError::InvalidPhysicalRange;
        return result;
    }

    const auto byte_count = static_cast<std::size_t>(dword_count) *
                            sizeof(std::uint32_t);
    std::uint32_t guest_address = 0;
    if (!xenos_physical_to_guest_address(
            physical_address, byte_count, guest_address)) {
        result.error = Pm4GuestRingError::InvalidPhysicalRange;
        return result;
    }

    auto* const guest_base = memory.base();
    if (!GuestAddressSpace::is_accessible_range(
            guest_base, guest_address, byte_count, GuestMemoryAccess::Read)) {
        result.error = Pm4GuestRingError::RingNotReadable;
        return result;
    }

    std::array<std::uint32_t, kMaxPacketDwords> packet_words{};
    std::size_t offset = 0;
    while (offset < dword_count) {
        if (result.dispatch.packets >= max_packets) {
            result.error = Pm4GuestRingError::PacketLimitReached;
            return result;
        }

        const auto available = static_cast<std::size_t>(dword_count) - offset;
        const auto copied = std::min(available, packet_words.size());
        for (std::size_t i = 0; i < copied; ++i) {
            const auto byte_offset = (offset + i) * sizeof(std::uint32_t);
            packet_words[i] = load_be32(
                guest_base + guest_address + byte_offset);
        }

        const auto packet_span = std::span<const std::uint32_t>(
            packet_words.data(), copied);
        const auto decoded = decode_pm4_packet(packet_span, 0);
        if (!decoded) {
            result.error = Pm4GuestRingError::PacketDecodeFailed;
            return result;
        }

        const auto packet_dwords = decoded.packet.dword_count;
        const auto dispatched = dispatch_pm4_stream(
            packet_span.first(packet_dwords), callbacks, 1);
        if (!dispatched) {
            result.error = map_dispatch_error(dispatched.error);
            return result;
        }

        offset += packet_dwords;
        result.dispatch.read_index = static_cast<std::uint32_t>(offset);
        result.dispatch.dwords_consumed += packet_dwords;
        ++result.dispatch.packets;
    }
    return result;
}

bool write_pm4_guest_read_pointer(
    GuestAddressSpace& memory, std::uint32_t physical_address,
    std::uint32_t read_index) noexcept {
    if (!memory.valid() || (physical_address & 3u) != 0)
        return false;

    std::uint32_t guest_address = 0;
    if (!xenos_physical_to_guest_address(
            physical_address, sizeof(std::uint32_t), guest_address))
        return false;

    auto* const guest_base = memory.base();
    if (!GuestAddressSpace::is_accessible_range(
            guest_base, guest_address, sizeof(std::uint32_t),
            GuestMemoryAccess::Write))
        return false;

    store_be32(guest_base + guest_address, read_index);
    return true;
}

bool write_xenos_guest_physical_dwords(
    GuestAddressSpace& memory, std::uint32_t physical_address_with_endian,
    std::span<const std::uint32_t> values) noexcept {
    if (!memory.valid() || values.empty() ||
        values.size() > std::numeric_limits<std::size_t>::max() /
                            sizeof(std::uint32_t))
        return false;

    const auto physical_address = physical_address_with_endian & ~std::uint32_t{3};
    const auto endian_mode = physical_address_with_endian & 3u;
    const auto byte_count = values.size() * sizeof(std::uint32_t);
    std::uint32_t guest_address = 0;
    if (!xenos_physical_to_guest_address(
            physical_address, byte_count, guest_address))
        return false;

    auto* const guest_base = memory.base();
    // Validate the complete DMA destination before making the first write.
    if (!GuestAddressSpace::is_accessible_range(
            guest_base, guest_address, byte_count, GuestMemoryAccess::Write))
        return false;

    for (std::size_t i = 0; i < values.size(); ++i) {
        auto value = values[i];
        switch (endian_mode) {
        case 1: // 8-in-16: swap bytes within each halfword.
            value = ((value & 0xFF00FF00u) >> 8) |
                    ((value & 0x00FF00FFu) << 8);
            break;
        case 2: // 8-in-32: reverse all four bytes.
            value = ((value & 0x000000FFu) << 24) |
                    ((value & 0x0000FF00u) << 8) |
                    ((value & 0x00FF0000u) >> 8) |
                    ((value & 0xFF000000u) >> 24);
            break;
        case 3: // 16-in-32: swap the two halfwords.
            value = (value >> 16) | (value << 16);
            break;
        default:
            break;
        }
        store_be32(guest_base + guest_address + i * sizeof(std::uint32_t),
                   value);
    }
    return true;
}

} // namespace toohuman::runtime
