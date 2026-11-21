#include "memory/guest_memory.hpp"

#include <limits>

namespace toohuman::runtime {
namespace {
constexpr std::uint64_t kGuestAddressSpaceSize = std::uint64_t{1} << 32;
}

GuestMemory::GuestMemory(std::uint32_t guest_base,
                         std::span<std::uint8_t> storage) noexcept
    : guest_base_(guest_base), storage_(storage) {}

bool GuestMemory::valid() const noexcept {
    return static_cast<std::uint64_t>(guest_base_) + storage_.size()
        <= kGuestAddressSpaceSize;
}

bool GuestMemory::contains(std::uint32_t address, std::size_t size) const noexcept {
    if (!valid() || address < guest_base_) {
        return false;
    }

    const auto offset = static_cast<std::uint64_t>(address) - guest_base_;
    if (offset > storage_.size()) {
        return false;
    }
    return size <= storage_.size() - static_cast<std::size_t>(offset);
}

std::uint32_t GuestMemory::guest_base() const noexcept {
    return guest_base_;
}

std::size_t GuestMemory::size() const noexcept {
    return storage_.size();
}

std::optional<std::span<std::uint8_t>>
GuestMemory::view(std::uint32_t address, std::size_t size) noexcept {
    if (!contains(address, size)) {
        return std::nullopt;
    }
    const auto offset = static_cast<std::size_t>(
        static_cast<std::uint64_t>(address) - guest_base_);
    return storage_.subspan(offset, size);
}

std::optional<std::span<const std::uint8_t>>
GuestMemory::view(std::uint32_t address, std::size_t size) const noexcept {
    if (!contains(address, size)) {
        return std::nullopt;
    }
    const auto offset = static_cast<std::size_t>(
        static_cast<std::uint64_t>(address) - guest_base_);
    return std::span<const std::uint8_t>(storage_).subspan(offset, size);
}

} // namespace toohuman::runtime
