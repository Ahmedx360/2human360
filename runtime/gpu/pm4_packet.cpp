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


Pm4DispatchResult dispatch_pm4_stream(
    std::span<const std::uint32_t> dwords,
    const Pm4DispatchCallbacks& callbacks,
    std::size_t max_packets) {
    Pm4DispatchResult result{};
    std::size_t offset = 0;

    while (offset < dwords.size()) {
        if (result.packets >= max_packets) {
            result.error = Pm4DispatchError::PacketLimitReached;
            break;
        }

        const auto decoded = decode_pm4_packet(dwords, offset);
        if (!decoded) {
            result.error = Pm4DispatchError::PacketDecodeFailed;
            break;
        }

        const auto& packet = decoded.packet;
        const auto payload = dwords.subspan(
            packet.payload_offset, packet.payload_count);
        bool accepted = true;

        switch (packet.type) {
        case Pm4PacketType::Nop:
        case Pm4PacketType::Type2:
            break;

        case Pm4PacketType::Type0:
            if (!callbacks.write_register) {
                result.error = Pm4DispatchError::MissingRegisterHandler;
                return result;
            }
            for (std::size_t i = 0; i < payload.size(); ++i) {
                const auto index = packet.write_one_register
                    ? packet.register_index
                    : packet.register_index + static_cast<std::uint32_t>(i);
                if (!callbacks.write_register(callbacks.context, index,
                                              payload[i])) {
                    accepted = false;
                    break;
                }
            }
            break;

        case Pm4PacketType::Type1:
            if (!callbacks.write_register) {
                result.error = Pm4DispatchError::MissingRegisterHandler;
                return result;
            }
            accepted = callbacks.write_register(
                callbacks.context, packet.register_index, payload[0]);
            if (accepted) {
                accepted = callbacks.write_register(
                    callbacks.context, packet.second_register_index, payload[1]);
            }
            break;

        case Pm4PacketType::Type3:
            if (!callbacks.type3) {
                result.error = Pm4DispatchError::MissingType3Handler;
                return result;
            }
            accepted = callbacks.type3(callbacks.context, packet.opcode,
                                       packet.predicate, payload);
            break;
        }

        if (!accepted) {
            result.error = Pm4DispatchError::CallbackRejected;
            break;
        }

        offset += packet.dword_count;
        result.dwords_consumed = offset;
        ++result.packets;
    }

    return result;
}

} // namespace toohuman::runtime
