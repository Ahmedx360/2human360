#pragma once

#include "image/xbox360_pe.hpp"

#include <cstddef>
#include <cstdint>
#include <string>
#include <cstring>
#include <type_traits>
#include <utility>

namespace toohuman::runtime {

// Reserves the 32-bit Xbox 360 virtual address space in the host process.
// Generated XenonRecomp functions calculate guest pointers as base + guest VA,
// so a compact image-relative vector is not a compatible execution backing.
class GuestAddressSpace final {
public:
    static constexpr std::uint64_t kSize = std::uint64_t{1} << 32;

    GuestAddressSpace() noexcept = default;
    ~GuestAddressSpace();

    GuestAddressSpace(const GuestAddressSpace&) = delete;
    GuestAddressSpace& operator=(const GuestAddressSpace&) = delete;
    GuestAddressSpace(GuestAddressSpace&& other) noexcept;
    GuestAddressSpace& operator=(GuestAddressSpace&& other) noexcept;

    [[nodiscard]] static GuestAddressSpace reserve(std::string* error = nullptr);

    // Commits the image's guest virtual range as read/write and copies its
    // image-relative bytes to base() + image.image_base. Section-specific
    // protections are deliberately deferred until code/data access is audited.
    [[nodiscard]] bool map_image(const LoadedPeImage& image,
                                 std::string* error = nullptr);
    [[nodiscard]] bool initialize_function_table(std::uint32_t code_base,
                                                 std::uint32_t code_size,
                                                 std::string* error = nullptr);

    template <typename FunctionPointer>
    [[nodiscard]] bool set_function(std::uint32_t guest_address,
                                    FunctionPointer function) noexcept {
        static_assert(std::is_pointer_v<FunctionPointer> &&
                      std::is_function_v<std::remove_pointer_t<FunctionPointer>>,
                      "set_function requires a function pointer");
        static_assert(sizeof(FunctionPointer) == sizeof(std::uintptr_t),
                      "Host function pointers must fit in uintptr_t");
        if (!function_table_ready_ || guest_address < function_code_base_ ||
            guest_address >= static_cast<std::uint64_t>(function_code_base_) + function_code_size_ ||
            (guest_address & 3u) != 0) return false;
        const auto offset = static_cast<std::uint64_t>(guest_address - function_code_base_) * 2;
        if (offset + sizeof(FunctionPointer) > function_table_size_) return false;
        const auto slot = reinterpret_cast<std::uintptr_t>(reservation_) +
                          function_table_base_ + offset;
        std::memcpy(reinterpret_cast<void*>(slot), &function, sizeof(function));
        return true;
    }

    template <typename FunctionPointer>
    [[nodiscard]] FunctionPointer get_function(std::uint32_t guest_address) const noexcept {
        static_assert(std::is_pointer_v<FunctionPointer> &&
                      std::is_function_v<std::remove_pointer_t<FunctionPointer>>,
                      "get_function requires a function pointer type");
        static_assert(sizeof(FunctionPointer) == sizeof(std::uintptr_t),
                      "Host function pointers must fit in uintptr_t");
        if (!function_table_ready_ || guest_address < function_code_base_ ||
            guest_address >= static_cast<std::uint64_t>(function_code_base_) + function_code_size_ ||
            (guest_address & 3u) != 0) return nullptr;
        const auto offset = static_cast<std::uint64_t>(guest_address - function_code_base_) * 2;
        if (offset + sizeof(FunctionPointer) > function_table_size_) return nullptr;
        const auto slot = reinterpret_cast<std::uintptr_t>(reservation_) +
                          function_table_base_ + offset;
        FunctionPointer function{};
        std::memcpy(&function, reinterpret_cast<const void*>(slot), sizeof(function));
        return function;
    }

    [[nodiscard]] std::uint8_t* base() noexcept;
    [[nodiscard]] const std::uint8_t* base() const noexcept;
    [[nodiscard]] bool valid() const noexcept;
    [[nodiscard]] bool image_mapped() const noexcept;

private:
    explicit GuestAddressSpace(void* reservation) noexcept;
    void release() noexcept;
    [[nodiscard]] bool commit_range(std::uint64_t address, std::size_t size,
                                    std::string* error);

    void* reservation_{};
    bool image_mapped_{};
    bool function_table_ready_{};
    std::uint32_t image_base_{};
    std::uint32_t image_size_{};
    std::uint32_t function_code_base_{};
    std::uint32_t function_code_size_{};
    std::uint64_t function_table_base_{};
    std::uint64_t function_table_size_{};
};

} // namespace toohuman::runtime
