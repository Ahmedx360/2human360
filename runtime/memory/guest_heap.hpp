#pragma once

#include "memory/guest_address_space.hpp"

#include <cstddef>
#include <cstdint>
#include <mutex>
#include <optional>
#include <string>
#include <utility>
#include <vector>

namespace toohuman::runtime {

// A small first-fit allocator over a caller-selected guest virtual range.
// The range is committed read/write by initialize(); its owner must ensure
// it does not overlap the image, PPC function table, MMIO or another heap.
class GuestHeap final {
public:
    GuestHeap(GuestAddressSpace& memory, std::uint32_t guest_base,
              std::uint32_t size) noexcept;

    GuestHeap(const GuestHeap&) = delete;
    GuestHeap& operator=(const GuestHeap&) = delete;

    [[nodiscard]] bool initialize(std::string* error = nullptr);
    [[nodiscard]] std::optional<std::uint32_t> allocate(
        std::size_t bytes, std::size_t alignment = 16);
    [[nodiscard]] std::optional<std::uint32_t> allocate_at(
        std::uint32_t guest_address, std::size_t bytes,
        std::size_t alignment = 0x1000);
    [[nodiscard]] bool deallocate(std::uint32_t guest_address);

    [[nodiscard]] std::size_t available_bytes() const;
    [[nodiscard]] std::optional<std::size_t> allocation_size(
        std::uint32_t guest_address) const;
    [[nodiscard]] std::optional<std::pair<std::uint32_t, std::size_t>>
        allocation_containing(std::uint32_t guest_address) const;
    [[nodiscard]] bool owns(std::uint32_t guest_address,
                            std::size_t bytes = 1) const noexcept;

    [[nodiscard]] std::uint32_t guest_base() const noexcept;
    [[nodiscard]] std::uint32_t size() const noexcept;

private:
    struct Block {
        std::uint32_t offset{};
        std::uint32_t size{};
        bool free{};
    };

    GuestAddressSpace* memory_{};
    std::uint32_t guest_base_{};
    std::uint32_t size_{};
    mutable std::mutex mutex_;
    std::vector<Block> blocks_;
    bool initialized_{};
};

} // namespace toohuman::runtime
