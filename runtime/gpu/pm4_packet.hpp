#pragma once

#include <cstddef>
#include <cstdint>
#include <span>

namespace toohuman::runtime {

// PM4 words are supplied in guest logical (big-endian decoded) dword order.
// The dispatcher routes packets to host callbacks; device semantics remain the
// responsibility of the Xenos implementation.
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


enum class Pm4DispatchError : std::uint8_t {
    None,
    PacketDecodeFailed,
    MissingRegisterHandler,
    MissingType3Handler,
    CallbackRejected,
    PacketLimitReached,
};

struct Pm4DispatchCallbacks {
    void* context{};
    // Return false to stop dispatch. Type-0 one-register packets repeatedly
    // write the same index; ordinary type-0 packets increment it per value.
    bool (*write_register)(void* context, std::uint32_t index,
                           std::uint32_t value){};
    // Return false to stop dispatch. The payload span excludes the header.
    bool (*type3)(void* context, std::uint32_t opcode, bool predicate,
                  std::span<const std::uint32_t> payload){};
};

struct Pm4DispatchResult {
    std::size_t packets{};
    std::size_t dwords_consumed{};
    Pm4DispatchError error{Pm4DispatchError::None};

    [[nodiscard]] explicit operator bool() const noexcept {
        return error == Pm4DispatchError::None;
    }
};

// Dispatch a bounded, linear command stream. This deliberately has no implicit
// register file, memory access, ring-buffer wrapping, or GPU side effects.
// A caller must provide handlers for register writes and Type-3 opcodes.
[[nodiscard]] Pm4DispatchResult dispatch_pm4_stream(
    std::span<const std::uint32_t> dwords,
    const Pm4DispatchCallbacks& callbacks,
    std::size_t max_packets);


enum class Pm4RingDispatchError : std::uint8_t {
    None,
    InvalidRing,
    InvalidReadPointer,
    InvalidWritePointer,
    PacketDecodeFailed,
    MissingRegisterHandler,
    MissingType3Handler,
    CallbackRejected,
    PacketLimitReached,
};

struct Pm4RingDispatchResult {
    std::size_t packets{};
    std::size_t dwords_consumed{};
    std::uint32_t read_index{};
    Pm4RingDispatchError error{Pm4RingDispatchError::None};

    [[nodiscard]] explicit operator bool() const noexcept {
        return error == Pm4RingDispatchError::None;
    }
};

// Consume the currently available portion of a circular ring, where read and
// write pointers are dword indices. A packet may cross the physical end of the
// ring. The caller owns memory mapping and pointer writeback; this routine
// only advances the returned read index after a packet is fully dispatched.
[[nodiscard]] Pm4RingDispatchResult dispatch_pm4_ring(
    std::span<const std::uint32_t> ring,
    std::uint32_t read_index,
    std::uint32_t write_index,
    const Pm4DispatchCallbacks& callbacks,
    std::size_t max_packets);

} // namespace toohuman::runtime
