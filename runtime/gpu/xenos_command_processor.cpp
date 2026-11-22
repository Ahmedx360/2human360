#include "gpu/xenos_command_processor.hpp"

#include <cstdint>
#include <limits>

namespace toohuman::runtime {
namespace {

constexpr std::uint32_t kMaxRingSizeLog2 = 26u;
constexpr std::uint32_t kMaxWritebackBlockSizeLog2 = 31u;

void set_error(std::string* error, const char* message) noexcept {
    if (error) {
        try { *error = message; }
        catch (...) { }
    }
}

} // namespace

bool XenosCommandProcessor::initialize_ring(
    std::uint32_t physical_base, std::uint32_t size_log2,
    std::string* error) noexcept {
    if (size_log2 > kMaxRingSizeLog2) {
        set_error(error, "Xenos primary ring size log2 exceeds the supported range");
        return false;
    }
    if ((physical_base & 3u) != 0) {
        set_error(error, "Xenos primary ring base must be dword aligned");
        return false;
    }

    const auto ring_bytes = std::uint64_t{1} << (size_log2 + 3u);
    std::uint32_t guest_address = 0;
    if (!xenos_physical_to_guest_address(
            physical_base, static_cast<std::size_t>(ring_bytes), guest_address)) {
        set_error(error, "Xenos primary ring physical range is invalid");
        return false;
    }

    ring_physical_base_ = physical_base;
    ring_size_log2_ = size_log2;
    read_index_ = 0;
    write_index_ = 0;
    write_pointer_initialized_ = false;
    writeback_enabled_ = false;
    writeback_physical_ = 0;
    writeback_block_size_log2_ = 0;
    ring_initialized_ = true;
    if (error) error->clear();
    return true;
}

bool XenosCommandProcessor::enable_read_pointer_writeback(
    std::uint32_t physical_address, std::uint32_t block_size_log2,
    std::string* error) noexcept {
    if (!ring_initialized_) {
        set_error(error, "Initialize the Xenos primary ring before enabling read-pointer writeback");
        return false;
    }
    if ((physical_address & 3u) != 0 ||
        block_size_log2 > kMaxWritebackBlockSizeLog2) {
        set_error(error, "Xenos read-pointer writeback address or block size is invalid");
        return false;
    }

    std::uint32_t guest_address = 0;
    if (!xenos_physical_to_guest_address(
            physical_address, sizeof(std::uint32_t), guest_address)) {
        set_error(error, "Xenos read-pointer writeback physical range is invalid");
        return false;
    }

    writeback_physical_ = physical_address;
    writeback_block_size_log2_ = block_size_log2;
    writeback_enabled_ = true;
    if (error) error->clear();
    return true;
}

bool XenosCommandProcessor::update_write_pointer(
    std::uint32_t write_index, std::string* error) noexcept {
    if (!ring_initialized_) {
        set_error(error, "Cannot update the Xenos write pointer before ring initialization");
        return false;
    }
    const auto ring_dwords = (std::uint64_t{1} << (ring_size_log2_ + 3u)) /
                              sizeof(std::uint32_t);
    if (write_index >= ring_dwords) {
        set_error(error, "Xenos ring write pointer is outside the configured ring");
        return false;
    }

    write_index_ = write_index;
    write_pointer_initialized_ = true;
    if (error) error->clear();
    return true;
}

XenosCommandProcessorResult XenosCommandProcessor::process_available(
    GuestAddressSpace& memory, const Pm4DispatchCallbacks& callbacks,
    std::size_t max_packets) {
    XenosCommandProcessorResult result{};
    result.ring.dispatch.read_index = read_index_;

    if (!ring_initialized_) {
        result.error = XenosCommandProcessorError::RingNotInitialized;
        return result;
    }
    if (!write_pointer_initialized_) {
        result.error = XenosCommandProcessorError::WritePointerNotInitialized;
        return result;
    }

    result.ring = dispatch_pm4_guest_ring(
        memory, ring_physical_base_, ring_size_log2_, read_index_,
        write_index_, callbacks, max_packets);
    read_index_ = result.ring.dispatch.read_index;

    if (!result.ring) {
        result.error = XenosCommandProcessorError::GuestRingFailure;
    }

    // A failed packet can follow earlier successfully consumed packets.
    // Publish that partial progress, but never advance past the rejected packet.
    if (writeback_enabled_ && result.ring.dispatch.dwords_consumed != 0 &&
        !write_pm4_guest_read_pointer(memory, writeback_physical_, read_index_)) {
        result.error = XenosCommandProcessorError::ReadPointerWritebackFailed;
    }

    return result;
}

void XenosCommandProcessor::reset() noexcept {
    *this = XenosCommandProcessor{};
}

} // namespace toohuman::runtime
