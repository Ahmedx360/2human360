#pragma once

#include "image/xbox360_pe.hpp"

#include <cstddef>
#include <cstdint>
#include <string>

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

    [[nodiscard]] std::uint8_t* base() noexcept;
    [[nodiscard]] const std::uint8_t* base() const noexcept;
    [[nodiscard]] bool valid() const noexcept;
    [[nodiscard]] bool image_mapped() const noexcept;

private:
    explicit GuestAddressSpace(void* reservation) noexcept;
    void release() noexcept;

    void* reservation_{};
    bool image_mapped_{};
};

} // namespace toohuman::runtime
