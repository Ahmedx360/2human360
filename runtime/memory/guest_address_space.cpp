#include "memory/guest_address_space.hpp"

#include <cstring>
#include <utility>

#if defined(_WIN32)
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <Windows.h>
#else
#include <sys/mman.h>
#include <unistd.h>
#ifndef MAP_NORESERVE
#define MAP_NORESERVE 0
#endif
#endif

namespace toohuman::runtime {
namespace {

std::size_t host_page_size() noexcept {
#if defined(_WIN32)
    SYSTEM_INFO info{};
    GetSystemInfo(&info);
    return info.dwPageSize;
#else
    const long value = sysconf(_SC_PAGESIZE);
    return value > 0 ? static_cast<std::size_t>(value) : 4096;
#endif
}

void set_error(std::string* error, const char* message) {
    if (error) *error = message;
}

} // namespace

GuestAddressSpace::GuestAddressSpace(void* reservation) noexcept
    : reservation_(reservation) {}

GuestAddressSpace::~GuestAddressSpace() {
    release();
}

GuestAddressSpace::GuestAddressSpace(GuestAddressSpace&& other) noexcept
    : reservation_(std::exchange(other.reservation_, nullptr)),
      image_mapped_(std::exchange(other.image_mapped_, false)),
      function_table_ready_(std::exchange(other.function_table_ready_, false)),
      image_base_(std::exchange(other.image_base_, 0)),
      image_size_(std::exchange(other.image_size_, 0)),
      function_code_base_(std::exchange(other.function_code_base_, 0)),
      function_code_size_(std::exchange(other.function_code_size_, 0)),
      function_table_base_(std::exchange(other.function_table_base_, 0)),
      function_table_size_(std::exchange(other.function_table_size_, 0)) {}

GuestAddressSpace& GuestAddressSpace::operator=(GuestAddressSpace&& other) noexcept {
    if (this != &other) {
        release();
        reservation_ = std::exchange(other.reservation_, nullptr);
        image_mapped_ = std::exchange(other.image_mapped_, false);
        function_table_ready_ = std::exchange(other.function_table_ready_, false);
        image_base_ = std::exchange(other.image_base_, 0);
        image_size_ = std::exchange(other.image_size_, 0);
        function_code_base_ = std::exchange(other.function_code_base_, 0);
        function_code_size_ = std::exchange(other.function_code_size_, 0);
        function_table_base_ = std::exchange(other.function_table_base_, 0);
        function_table_size_ = std::exchange(other.function_table_size_, 0);
    }
    return *this;
}

GuestAddressSpace GuestAddressSpace::reserve(std::string* error) {
    if (sizeof(void*) < 8) {
        set_error(error, "A 64-bit host process is required for the 4 GiB guest address space");
        return {};
    }

#if defined(_WIN32)
    void* memory = VirtualAlloc(nullptr, static_cast<SIZE_T>(kSize),
                                MEM_RESERVE, PAGE_NOACCESS);
    if (!memory) {
        set_error(error, "VirtualAlloc could not reserve the 4 GiB guest address space");
        return {};
    }
#else
    void* memory = mmap(nullptr, static_cast<std::size_t>(kSize), PROT_NONE,
                        MAP_PRIVATE | MAP_ANONYMOUS | MAP_NORESERVE, -1, 0);
    if (memory == MAP_FAILED) {
        set_error(error, "mmap could not reserve the 4 GiB guest address space");
        return {};
    }
#endif
    return GuestAddressSpace(memory);
}

bool GuestAddressSpace::commit_range(std::uint64_t address, std::size_t size,
                                     std::string* error) {
    if (!valid() || size == 0 || address > kSize || size > kSize - address) {
        set_error(error, "Guest commit range is empty or outside the 32-bit address space");
        return false;
    }

    const auto page_size = host_page_size();
    if (page_size == 0 || (page_size & (page_size - 1)) != 0) {
        set_error(error, "Host page size is invalid");
        return false;
    }
    const auto commit_start = address & ~(static_cast<std::uint64_t>(page_size) - 1);
    const auto range_end = address + size;
    const auto commit_end = (range_end + page_size - 1) &
                            ~(static_cast<std::uint64_t>(page_size) - 1);
    if (commit_end > kSize || commit_end <= commit_start) {
        set_error(error, "Page-aligned guest commit range exceeds the 4 GiB reservation");
        return false;
    }

    const auto reservation_address = reinterpret_cast<std::uintptr_t>(reservation_);
    const auto target_address = reservation_address + static_cast<std::uintptr_t>(commit_start);
    const auto commit_size = static_cast<std::size_t>(commit_end - commit_start);
    void* target = reinterpret_cast<void*>(target_address);

#if defined(_WIN32)
    if (!VirtualAlloc(target, static_cast<SIZE_T>(commit_size),
                      MEM_COMMIT, PAGE_READWRITE)) {
        set_error(error, "VirtualAlloc could not commit the requested guest pages");
        return false;
    }
#else
    if (mprotect(target, commit_size, PROT_READ | PROT_WRITE) != 0) {
        set_error(error, "mprotect could not commit the requested guest pages");
        return false;
    }
#endif
    return true;
}

bool GuestAddressSpace::map_image(const LoadedPeImage& image, std::string* error) {
    if (!valid()) {
        set_error(error, "Guest address space has not been reserved");
        return false;
    }
    if (image_mapped_) {
        set_error(error, "A guest image is already mapped in this address space");
        return false;
    }
    if (image.image_size == 0 || image.bytes.size() != image.image_size ||
        static_cast<std::uint64_t>(image.image_base) + image.image_size > kSize) {
        set_error(error, "Loaded PE image has an invalid guest address range or byte count");
        return false;
    }
    if (!commit_range(image.image_base, image.image_size, error)) return false;

    const auto image_address = reinterpret_cast<std::uintptr_t>(reservation_) +
                               static_cast<std::uintptr_t>(image.image_base);
    std::memcpy(reinterpret_cast<void*>(image_address), image.bytes.data(),
                image.bytes.size());
    image_base_ = image.image_base;
    image_size_ = image.image_size;
    image_mapped_ = true;
    return true;
}

bool GuestAddressSpace::commit_region(std::uint32_t guest_address, std::size_t size,
                                      std::string* error) {
    if (!valid()) {
        set_error(error, "Guest address space has not been reserved");
        return false;
    }
    return commit_range(guest_address, size, error);
}

bool GuestAddressSpace::initialize_function_table(std::uint32_t code_base,
                                                  std::uint32_t code_size,
                                                  std::string* error) {
    if (!image_mapped_) {
        set_error(error, "Map the guest PE image before initializing its function table");
        return false;
    }
    if (function_table_ready_) {
        set_error(error, "The guest function table is already initialized");
        return false;
    }
    const auto image_end = static_cast<std::uint64_t>(image_base_) + image_size_;
    const auto code_end = static_cast<std::uint64_t>(code_base) + code_size;
    if (code_size == 0 || code_base < image_base_ || code_end > image_end ||
        (code_base & 3u) != 0 || (code_size & 3u) != 0) {
        set_error(error, "PPC code range is empty, unaligned, or outside the loaded image");
        return false;
    }

    const auto table_base = image_end;
    const auto table_size = static_cast<std::uint64_t>(code_size) * 2;
    if (table_base % alignof(std::uintptr_t) != 0 ||
        table_size % sizeof(std::uintptr_t) != 0) {
        set_error(error, "PPC function table base or size is not host-pointer aligned");
        return false;
    }
    if (table_base > kSize || table_size > kSize - table_base) {
        set_error(error, "PPC function table would exceed the 4 GiB guest reservation");
        return false;
    }
    if (!commit_range(table_base, static_cast<std::size_t>(table_size), error)) return false;

    const auto table_address = reinterpret_cast<std::uintptr_t>(reservation_) +
                               static_cast<std::uintptr_t>(table_base);
    std::memset(reinterpret_cast<void*>(table_address), 0,
                static_cast<std::size_t>(table_size));
    function_code_base_ = code_base;
    function_code_size_ = code_size;
    function_table_base_ = table_base;
    function_table_size_ = table_size;
    function_table_ready_ = true;
    return true;
}

std::uint32_t GuestAddressSpace::image_base() const noexcept {
    return image_base_;
}

std::uint32_t GuestAddressSpace::image_size() const noexcept {
    return image_size_;
}

std::uint8_t* GuestAddressSpace::base() noexcept {
    return static_cast<std::uint8_t*>(reservation_);
}

const std::uint8_t* GuestAddressSpace::base() const noexcept {
    return static_cast<const std::uint8_t*>(reservation_);
}

bool GuestAddressSpace::valid() const noexcept {
    return reservation_ != nullptr;
}

bool GuestAddressSpace::image_mapped() const noexcept {
    return image_mapped_;
}

void GuestAddressSpace::release() noexcept {
    if (!reservation_) return;
#if defined(_WIN32)
    VirtualFree(reservation_, 0, MEM_RELEASE);
#else
    munmap(reservation_, static_cast<std::size_t>(kSize));
#endif
    reservation_ = nullptr;
    image_mapped_ = false;
    function_table_ready_ = false;
    image_base_ = image_size_ = 0;
    function_code_base_ = function_code_size_ = 0;
    function_table_base_ = function_table_size_ = 0;
}

} // namespace toohuman::runtime
