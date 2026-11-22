#include "gpu/pm4_packet.hpp"

#include <array>
#include <cassert>
#include <cstdint>

int main() {
    using namespace toohuman::runtime;

    {
        constexpr std::array<std::uint32_t, 1> stream{0u};
        const auto decoded = decode_pm4_packet(stream, 0);
        assert(decoded);
        assert(decoded.packet.type == Pm4PacketType::Nop);
        assert(decoded.packet.dword_count == 1u);
        assert(decoded.packet.payload_count == 0u);
    }

    {
        constexpr std::array<std::uint32_t, 4> stream{
            (2u << 16) | (1u << 15) | 0x15u,
            0x11111111u, 0x22222222u, 0x33333333u
        };
        const auto decoded = decode_pm4_packet(stream, 0);
        assert(decoded);
        assert(decoded.packet.type == Pm4PacketType::Type0);
        assert(decoded.packet.register_index == 0x15u);
        assert(decoded.packet.write_one_register);
        assert(decoded.packet.payload_offset == 1u);
        assert(decoded.packet.payload_count == 3u);
        assert(decoded.packet.dword_count == 4u);
    }

    {
        constexpr std::array<std::uint32_t, 3> stream{
            0x40000000u | (0x321u << 11) | 0x123u,
            0xAABBCCDDu, 0x10203040u
        };
        const auto decoded = decode_pm4_packet(stream, 0);
        assert(decoded);
        assert(decoded.packet.type == Pm4PacketType::Type1);
        assert(decoded.packet.register_index == 0x123u);
        assert(decoded.packet.second_register_index == 0x321u);
        assert(decoded.packet.payload_count == 2u);
        assert(decoded.packet.dword_count == 3u);
    }

    {
        constexpr std::array<std::uint32_t, 1> stream{0x80000000u};
        const auto decoded = decode_pm4_packet(stream, 0);
        assert(decoded);
        assert(decoded.packet.type == Pm4PacketType::Type2);
        assert(decoded.packet.payload_count == 0u);
        assert(decoded.packet.dword_count == 1u);
    }

    {
        constexpr std::array<std::uint32_t, 4> stream{
            0xC0000000u | (2u << 16) | (0x3Du << 8) | 1u,
            0x7FC80000u, 0x00000001u, 0xDEADBEEFu
        };
        const auto decoded = decode_pm4_packet(stream, 0);
        assert(decoded);
        assert(decoded.packet.type == Pm4PacketType::Type3);
        assert(decoded.packet.opcode == 0x3Du);
        assert(decoded.packet.predicate);
        assert(decoded.packet.payload_count == 3u);
        assert(decoded.packet.dword_count == 4u);
    }

    {
        constexpr std::array<std::uint32_t, 2> stream{
            (2u << 16) | 0x20u, 0x12345678u
        };
        const auto decoded = decode_pm4_packet(stream, 0);
        assert(!decoded);
        assert(decoded.error == Pm4DecodeError::TruncatedPayload);
    }

    {
        constexpr std::array<std::uint32_t, 1> stream{0x80000000u};
        const auto decoded = decode_pm4_packet(stream, 1);
        assert(!decoded);
        assert(decoded.error == Pm4DecodeError::OffsetOutOfRange);
    }

    return 0;
}
