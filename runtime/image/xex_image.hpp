#pragma once

#include "image/xbox360_pe.hpp"

#include <optional>
#include <span>
#include <string>

namespace toohuman::runtime {

struct XexImageResult {
    std::optional<LoadedPeImage> image;
    std::uint32_t security_image_size{};
    std::size_t decompressed_size{};
    std::uint16_t encryption_type{};
    std::uint16_t compression_type{};
    std::string error;

    [[nodiscard]] explicit operator bool() const noexcept {
        return image.has_value();
    }
};

// Loads an unencrypted XEX2 image using no compression or basic block
// compression. XEX payload blocks are already laid out in guest RVA order;
// unlike a standalone PE file, their section bytes must not be copied from
// PointerToRawData.
[[nodiscard]] XexImageResult load_xex2_image(
    std::span<const std::uint8_t> xex_file);

} // namespace toohuman::runtime
