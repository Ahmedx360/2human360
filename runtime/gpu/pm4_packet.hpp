#pragma once

#include <cstddef>
#include <cstdint>
#include <span>

namespace toohuman::runtime {

// PM4 words are supplied in guest logical (big-endian decoded) dword order.
// This layer only frames packets; it does not execute GPU commands.
enum class Pm4PacketType : std::uint8_t {
    Nop,
    Type0,
    Type1,
    Type2,
    Type3,
};

enum class Pm4DecodeError : std::uint8_t {
    None,
    OffsetOutOfRange,
    TruncatedPayload,
};

struct Pm4PacketView {
    Pm4PacketType type{Pm4PacketType::Nop};
    std::uint32_t header{};
    std::uint32_t register_index{};
    std::uint32_t second_register_index{};
    std::uint32_t opcode{};
    std::size_t payload_offset{};
    std::size_t payload_count{};
    std::size_t dword_count{};
    bool write_one_register{};
    bool predicate{};
};

struct Pm4DecodeResult {
    Pm4PacketView packet{};
    Pm4DecodeError error{Pm4DecodeError::None};

    [[nodiscard]] explicit operator bool() const noexcept {
        return error == Pm4DecodeError::None;
    }
};

// Decode exactly one PM4 packet at dword_offset. A zero header is the
// hardware-stream NOP used by the Xenos command processor and consumes no
// payload. Type 1 always carries two register values; type 2 carries none;
// type 0 and type 3 use the encoded (count + 1) payload length.
[[nodiscard]] Pm4DecodeResult decode_pm4_packet(
    std::span<const std::uint32_t> dwords,
    std::size_t dword_offset) noexcept;

} // namespace toohuman::runtime
