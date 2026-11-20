#pragma once

#include <cstdint>
#include <optional>
#include <span>
#include <string>
#include <vector>

namespace toohuman::runtime {

struct PeSection {
    std::string name;
    std::uint32_t virtual_address{};
    std::uint32_t virtual_size{};
    std::uint32_t raw_size{};
    std::uint32_t characteristics{};
};

struct LoadedPeImage {
    std::uint32_t image_base{};
    std::uint32_t entry_point{};
    std::uint32_t image_size{};
    std::vector<std::uint8_t> bytes;
    std::vector<PeSection> sections;
};

// Loads the extracted Xbox 360 PowerPC big-endian PE format used by this
// project. PE metadata is little-endian. The section-RVA correction mirrors
// the verified XenonRecomp PE loader behavior: only sections whose
// (VirtualAddress - PointerToRawData) matches the first code section's delta
// are relocated back to their raw-file offset.
struct PeLoadError {
    std::string message;
};

struct PeLoadResult {
    std::optional<LoadedPeImage> image;
    PeLoadError error;

    [[nodiscard]] explicit operator bool() const noexcept {
        return image.has_value();
    }
};

[[nodiscard]] PeLoadResult load_xbox360_pe(std::span<const std::uint8_t> file);

} // namespace toohuman::runtime
