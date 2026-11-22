#pragma once

#include "gpu/pm4_guest_ring.hpp"

#include <cstddef>
#include <cstdint>
#include <string>

namespace toohuman::runtime {

enum class XenosCommandProcessorError : std::uint8_t {
    None,
    RingNotInitialized,
    WritePointerNotInitialized,
    InvalidWritePointer,
    GuestRingFailure,
    ReadPointerWritebackFailed,
};

struct XenosCommandProcessorResult {
    Pm4GuestRingResult ring{};
    XenosCommandProcessorError error{XenosCommandProcessorError::None};

    [[nodiscard]] explicit operator bool() const noexcept {
        return error == XenosCommandProcessorError::None && static_cast<bool>(ring);
    }
};

// A synchronous, bounded command-processor pump. It models the primary ring's
// configuration and pointer lifecycle, but deliberately does not own a worker,
// issue interrupts, or invent behavior for unsupported Type-3 opcodes. Calls
// must be serialized by the runtime until a device worker is added.
class XenosCommandProcessor final {
public:
    [[nodiscard]] bool initialize_ring(std::uint32_t physical_base,
                                        std::uint32_t size_log2,
                                        std::string* error = nullptr) noexcept;
    [[nodiscard]] bool enable_read_pointer_writeback(
        std::uint32_t physical_address, std::uint32_t block_size_log2,
        std::string* error = nullptr) noexcept;
    [[nodiscard]] bool update_write_pointer(
        std::uint32_t write_index, std::string* error = nullptr) noexcept;

    [[nodiscard]] XenosCommandProcessorResult process_available(
        GuestAddressSpace& memory, const Pm4DispatchCallbacks& callbacks,
        std::size_t max_packets);

    void reset() noexcept;

    [[nodiscard]] bool ring_initialized() const noexcept { return ring_initialized_; }
    [[nodiscard]] bool write_pointer_initialized() const noexcept { return write_pointer_initialized_; }
    [[nodiscard]] std::uint32_t ring_physical_base() const noexcept { return ring_physical_base_; }
    [[nodiscard]] std::uint32_t ring_size_log2() const noexcept { return ring_size_log2_; }
    [[nodiscard]] std::uint32_t read_index() const noexcept { return read_index_; }
    [[nodiscard]] std::uint32_t write_index() const noexcept { return write_index_; }
    [[nodiscard]] bool read_pointer_writeback_enabled() const noexcept { return writeback_enabled_; }
    [[nodiscard]] std::uint32_t read_pointer_writeback_physical() const noexcept {
        return writeback_physical_;
    }
    [[nodiscard]] std::uint32_t read_pointer_writeback_block_size_log2() const noexcept {
        return writeback_block_size_log2_;
    }

private:
    bool ring_initialized_{};
    bool write_pointer_initialized_{};
    bool writeback_enabled_{};
    std::uint32_t ring_physical_base_{};
    std::uint32_t ring_size_log2_{};
    std::uint32_t read_index_{};
    std::uint32_t write_index_{};
    std::uint32_t writeback_physical_{};
    std::uint32_t writeback_block_size_log2_{};
};

} // namespace toohuman::runtime
