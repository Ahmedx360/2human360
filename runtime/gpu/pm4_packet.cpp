#include "gpu/pm4_packet.hpp"

namespace toohuman::runtime {

Pm4DecodeResult decode_pm4_packet(
    std::span<const std::uint32_t> dwords,
    std::size_t dword_offset) noexcept {
    Pm4DecodeResult result{};
    if (dword_offset >= dwords.size()) {
        result.error = Pm4DecodeError::OffsetOutOfRange;
        return result;
    }

    auto& packet = result.packet;
    packet.header = dwords[dword_offset];
    packet.payload_offset = dword_offset + 1u;

    // A literal zero is the command processor's one-dword NOP, not a
    // type-0 write with one following payload word.
    if (packet.header == 0) {
        packet.type = Pm4PacketType::Nop;
        packet.dword_count = 1u;
        return result;
    }

    const auto type = packet.header >> 30;
    switch (type) {
    case 0:
        packet.type = Pm4PacketType::Type0;
        packet.register_index = packet.header & 0x7FFFu;
        packet.write_one_register = ((packet.header >> 15) & 1u) != 0;
        packet.payload_count = ((packet.header >> 16) & 0x3FFFu) + 1u;
        break;
    case 1:
        packet.type = Pm4PacketType::Type1;
        packet.register_index = packet.header & 0x7FFu;
        packet.second_register_index = (packet.header >> 11) & 0x7FFu;
        packet.payload_count = 2u;
        break;
    case 2:
        packet.type = Pm4PacketType::Type2;
        packet.payload_count = 0u;
        break;
    case 3:
        packet.type = Pm4PacketType::Type3;
        packet.opcode = (packet.header >> 8) & 0x7Fu;
        packet.predicate = (packet.header & 1u) != 0;
        packet.payload_count = ((packet.header >> 16) & 0x3FFFu) + 1u;
        break;
    default:
        // The two-bit packet type field makes this unreachable.
        result.error = Pm4DecodeError::OffsetOutOfRange;
        return result;
    }

    if (packet.payload_count > dwords.size() - packet.payload_offset) {
        result.error = Pm4DecodeError::TruncatedPayload;
        return result;
    }

    packet.dword_count = 1u + packet.payload_count;
    return result;
}

} // namespace toohuman::runtime
