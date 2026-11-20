#include "memory/guest_heap.hpp"

#include <limits>
#include <utility>

namespace toohuman::runtime {
namespace {

void set_error(std::string* error, const char* message) {
    if (error) *error = message;
}

} // namespace

GuestHeap::GuestHeap(GuestAddressSpace& memory, std::uint32_t guest_base,
                     std::uint32_t size) noexcept
    : memory_(&memory), guest_base_(guest_base), size_(size) {}

bool GuestHeap::initialize(std::string* error) {
    std::lock_guard lock(mutex_);
    if (initialized_) {
        set_error(error, "Guest heap is already initialized");
        return false;
    }
    if (!memory_ || !memory_->valid() || guest_base_ == 0 || size_ == 0 ||
        static_cast<std::uint64_t>(guest_base_) + size_ > GuestAddressSpace::kSize) {
        set_error(error, "Guest heap range is invalid or outside the 32-bit address space");
        return false;
    }

    if (memory_->image_mapped()) {
        const auto heap_start = static_cast<std::uint64_t>(guest_base_);
        const auto heap_end = heap_start + size_;
        const auto image_start = static_cast<std::uint64_t>(memory_->image_base());
        const auto image_end = image_start + memory_->image_size();
        if (heap_start < image_end && image_start < heap_end) {
            set_error(error, "Guest heap range overlaps the mapped PE image");
            return false;
        }
    }

    if (!memory_->commit_region(guest_base_, size_, error)) return false;
    blocks_.push_back({0, size_, true});
    initialized_ = true;
    return true;
}

std::optional<std::uint32_t> GuestHeap::allocate(std::size_t bytes,
                                                 std::size_t alignment) {
    std::lock_guard lock(mutex_);
    if (!initialized_ || bytes == 0 || bytes > size_ ||
        alignment == 0 || (alignment & (alignment - 1)) != 0 ||
        alignment > (std::size_t{1} << 32)) {
        return std::nullopt;
    }

    const auto heap_end = static_cast<std::uint64_t>(guest_base_) + size_;
    for (std::size_t i = 0; i < blocks_.size(); ++i) {
        const auto block = blocks_[i];
        if (!block.free) continue;

        const auto block_guest_start =
            static_cast<std::uint64_t>(guest_base_) + block.offset;
        const auto aligned_guest_start =
            (block_guest_start + alignment - 1) &
            ~(static_cast<std::uint64_t>(alignment) - 1);
        const auto aligned_offset = aligned_guest_start - guest_base_;
        const auto allocation_end = aligned_guest_start + bytes;
        const auto block_end = block_guest_start + block.size;
        if (aligned_offset < block.offset || allocation_end > block_end ||
            allocation_end > heap_end) {
            continue;
        }

        const auto prefix = static_cast<std::uint32_t>(aligned_offset - block.offset);
        const auto allocation_size = static_cast<std::uint32_t>(bytes);
        const auto suffix = static_cast<std::uint32_t>(block_end - allocation_end);

        std::vector<Block> replacement;
        replacement.reserve(3);
        if (prefix != 0) replacement.push_back({block.offset, prefix, true});
        replacement.push_back({static_cast<std::uint32_t>(aligned_offset),
                               allocation_size, false});
        if (suffix != 0) {
            replacement.push_back({
                static_cast<std::uint32_t>(allocation_end - guest_base_),
                suffix, true
            });
        }

        blocks_.erase(blocks_.begin() + static_cast<std::ptrdiff_t>(i));
        blocks_.insert(blocks_.begin() + static_cast<std::ptrdiff_t>(i),
                       replacement.begin(), replacement.end());
        return static_cast<std::uint32_t>(aligned_guest_start);
    }
    return std::nullopt;
}

bool GuestHeap::deallocate(std::uint32_t guest_address) {
    std::lock_guard lock(mutex_);
    if (!initialized_ || !owns(guest_address)) return false;
    const auto offset = guest_address - guest_base_;
    for (std::size_t i = 0; i < blocks_.size(); ++i) {
        auto& block = blocks_[i];
        if (block.offset != offset || block.free) continue;
        block.free = true;

        if (i > 0 && blocks_[i - 1].free) {
            blocks_[i - 1].size += block.size;
            blocks_.erase(blocks_.begin() + static_cast<std::ptrdiff_t>(i));
            --i;
        }
        if (i + 1 < blocks_.size() && blocks_[i + 1].free) {
            blocks_[i].size += blocks_[i + 1].size;
            blocks_.erase(blocks_.begin() + static_cast<std::ptrdiff_t>(i + 1));
        }
        return true;
    }
    return false;
}

std::size_t GuestHeap::available_bytes() const {
    std::lock_guard lock(mutex_);
    std::size_t available = 0;
    if (initialized_) {
        for (const auto& block : blocks_) {
            if (block.free) available += block.size;
        }
    }
    return available;
}

std::optional<std::size_t> GuestHeap::allocation_size(
    std::uint32_t guest_address) const {
    std::lock_guard lock(mutex_);
    if (!initialized_ || !owns(guest_address)) return std::nullopt;
    const auto offset = guest_address - guest_base_;
    for (const auto& block : blocks_) {
        if (!block.free && block.offset == offset) return block.size;
    }
    return std::nullopt;
}

bool GuestHeap::owns(std::uint32_t guest_address, std::size_t bytes) const noexcept {
    if (bytes == 0 || guest_address < guest_base_) return false;
    const auto offset = static_cast<std::uint64_t>(guest_address) - guest_base_;
    return offset < size_ && bytes <= size_ - offset;
}

std::uint32_t GuestHeap::guest_base() const noexcept {
    return guest_base_;
}

std::uint32_t GuestHeap::size() const noexcept {
    return size_;
}

} // namespace toohuman::runtime
