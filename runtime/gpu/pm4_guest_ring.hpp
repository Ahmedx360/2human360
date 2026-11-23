#pragma once

#include "gpu/pm4_packet.hpp"
#include "memory/guest_address_space.hpp"

#include <cstddef>
#include <cstdint>

namespace toohuman::runtime {

enum class Pm4GuestRingError : std::uint8_t {
    None,
    InvalidAddressSpace,
    InvalidRingSize,
    InvalidIndirectBufferLength,
    InvalidPhysicalRange,
    InvalidReadPointer,
    InvalidWritePointer,
    RingNotReadable,
    PacketDecodeFailed,
    MissingRegisterHandler,
    MissingType3Handler,
    CallbackRejected,
    PacketLimitReached,
};

struct Pm4GuestRingResult {
    Pm4RingDispatchResult dispatch{};
    Pm4GuestRingError error{Pm4GuestRingError::None};

    [[nodiscard]] explicit operator bool() const noexcept {
        return error == Pm4GuestRingError::None;
    }
};

// Translate an Xbox 360 physical address through the uncached 0xA0000000
// physical-memory alias used by the reference runtime. The whole byte range
// must remain inside the 512 MiB physical window.
[[nodiscard]] bool xenos_physical_to_guest_address(
    std::uint32_t physical_address, std::size_t size,
    std::uint32_t& guest_address) noexcept;

// Read a primary PM4 ring directly from committed guest physical memory.
// size_log2 follows CP_RB_CNTL/RB_BLKSZ sizing: ring bytes = 1 << (size_log2 + 3).
// Dwords are decoded from guest big-endian memory before PM4 dispatch. Packets
// crossing the physical ring end are copied into a bounded one-packet scratch
// buffer; no full-ring snapshot or unbounded allocation is required.
[[nodiscard]] Pm4GuestRingResult dispatch_pm4_guest_ring(
    GuestAddressSpace& memory,
    std::uint32_t physical_base,
    std::uint32_t size_log2,
    std::uint32_t read_index,
    std::uint32_t write_index,
    const Pm4DispatchCallbacks& callbacks,
    std::size_t max_packets);

// Dispatch a linear indirect command buffer from guest physical memory. The
// caller supplies the Xenos dword count (not bytes); this helper has no ring
// wraparound and reports the linear dword offset consumed.
[[nodiscard]] Pm4GuestRingResult dispatch_pm4_guest_indirect_buffer(
    GuestAddressSpace& memory,
    std::uint32_t physical_address,
    std::uint32_t dword_count,
    const Pm4DispatchCallbacks& callbacks,
    std::size_t max_packets);

// Write the command processor's read-pointer writeback as a guest big-endian
// dword through the same physical-memory alias. This is separate from dispatch
// so the caller controls when guest-visible progress is committed.
[[nodiscard]] bool write_pm4_guest_read_pointer(
    GuestAddressSpace& memory, std::uint32_t physical_address,
    std::uint32_t read_index) noexcept;

// Apply a PM4 MEM_WRITE payload to checked guest physical memory. The address's
// low two bits select Xenos endian conversion; the rest is dword-aligned.
// The entire destination range is validated before any bytes are changed.
[[nodiscard]] bool write_xenos_guest_physical_dwords(
    GuestAddressSpace& memory, std::uint32_t physical_address_with_endian,
    std::span<const std::uint32_t> values) noexcept;

} // namespace toohuman::runtime
