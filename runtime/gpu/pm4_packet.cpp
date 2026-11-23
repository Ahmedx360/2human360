#include "gpu/pm4_packet.hpp"

#include <algorithm>
#include <array>
#include <limits>

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
            if (callbacks.validate_register) {
                for (std::size_t i = 0; i < payload.size(); ++i) {
                    const auto index = packet.write_one_register
                        ? packet.register_index
                        : packet.register_index + static_cast<std::uint32_t>(i);
                    if (!callbacks.validate_register(
                            callbacks.context, index, payload[i])) {
                        accepted = false;
                        break;
                    }
                }
            }
            if (accepted) {
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
            }
            break;

        case Pm4PacketType::Type1:
            if (!callbacks.write_register) {
                result.error = Pm4DispatchError::MissingRegisterHandler;
                return result;
            }
            if (callbacks.validate_register) {
                accepted = callbacks.validate_register(
                    callbacks.context, packet.register_index, payload[0]) &&
                    callbacks.validate_register(
                    callbacks.context, packet.second_register_index, payload[1]);
            }
            if (accepted) {
                accepted = callbacks.write_register(
                    callbacks.context, packet.register_index, payload[0]);
                if (accepted) {
                    accepted = callbacks.write_register(
                        callbacks.context, packet.second_register_index, payload[1]);
                }
            }
            break;

        case Pm4PacketType::Type3:
            if (!callbacks.type3) {
                result.error = Pm4DispatchError::MissingType3Handler;
                return result;
            }
            switch (callbacks.type3(callbacks.context, packet.opcode,
                                     packet.predicate, payload)) {
            case Pm4CallbackResult::Accepted:
                break;
            case Pm4CallbackResult::Deferred:
                result.error = Pm4DispatchError::CallbackDeferred;
                break;
            case Pm4CallbackResult::Rejected:
                accepted = false;
                break;
            }
            break;
        }

        if (result.error == Pm4DispatchError::CallbackDeferred)
            break;

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


Pm4RingDispatchResult dispatch_pm4_ring(
    std::span<const std::uint32_t> ring,
    std::uint32_t read_index,
    std::uint32_t write_index,
    const Pm4DispatchCallbacks& callbacks,
    std::size_t max_packets) {
    Pm4RingDispatchResult result{};
    result.read_index = read_index;

    if (ring.empty() || ring.size() > std::numeric_limits<std::uint32_t>::max()) {
        result.error = Pm4RingDispatchError::InvalidRing;
        return result;
    }
    if (read_index >= ring.size()) {
        result.error = Pm4RingDispatchError::InvalidReadPointer;
        return result;
    }
    if (write_index >= ring.size()) {
        result.error = Pm4RingDispatchError::InvalidWritePointer;
        return result;
    }

    // The PM4 count field permits at most 0x4000 payload dwords.
    constexpr std::size_t kMaxPacketDwords = 0x4001u;
    std::array<std::uint32_t, kMaxPacketDwords> packet_words{};
    const auto ring_size = ring.size();

    while (result.read_index != write_index) {
        if (result.packets >= max_packets) {
            result.error = Pm4RingDispatchError::PacketLimitReached;
            break;
        }

        const std::size_t available = write_index > result.read_index
            ? static_cast<std::size_t>(write_index - result.read_index)
            : ring_size - result.read_index + write_index;
        const std::size_t copied = std::min(available, packet_words.size());
        for (std::size_t i = 0; i < copied; ++i) {
            packet_words[i] = ring[(static_cast<std::size_t>(result.read_index) + i)
                                   % ring_size];
        }

        const auto packet_span = std::span<const std::uint32_t>(
            packet_words.data(), copied);
        const auto decoded = decode_pm4_packet(packet_span, 0);
        if (!decoded) {
            result.error = Pm4RingDispatchError::PacketDecodeFailed;
            break;
        }

        const auto packet_dwords = decoded.packet.dword_count;
        const auto dispatched = dispatch_pm4_stream(
            packet_span.first(packet_dwords), callbacks, 1);
        if (!dispatched) {
            switch (dispatched.error) {
            case Pm4DispatchError::MissingRegisterHandler:
                result.error = Pm4RingDispatchError::MissingRegisterHandler;
                break;
            case Pm4DispatchError::MissingType3Handler:
                result.error = Pm4RingDispatchError::MissingType3Handler;
                break;
            case Pm4DispatchError::CallbackRejected:
                result.error = Pm4RingDispatchError::CallbackRejected;
                break;
            case Pm4DispatchError::CallbackDeferred:
                result.error = Pm4RingDispatchError::CallbackDeferred;
                break;
            case Pm4DispatchError::PacketDecodeFailed:
                result.error = Pm4RingDispatchError::PacketDecodeFailed;
                break;
            case Pm4DispatchError::PacketLimitReached:
            case Pm4DispatchError::None:
                result.error = Pm4RingDispatchError::PacketDecodeFailed;
                break;
            }
            break;
        }

        result.read_index = static_cast<std::uint32_t>(
            (static_cast<std::size_t>(result.read_index) + packet_dwords)
            % ring_size);
        result.dwords_consumed += packet_dwords;
        ++result.packets;
    }

    return result;
}

} // namespace toohuman::runtime
