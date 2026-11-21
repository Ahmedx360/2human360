#pragma once

#include <cstdint>
#include <span>
#include <string_view>

namespace toohuman::runtime {

struct TitleExportName {
    std::string_view library;
    std::uint16_t ordinal{};
    std::string_view name;
    bool variable{};
};

// Names/ordinals are the exact imports found in Too Human's decrypted XEX,
// resolved against the pinned XenonRecomp/Xenia export tables.
[[nodiscard]] std::span<const TitleExportName> too_human_import_manifest() noexcept;
[[nodiscard]] std::string_view lookup_title_export_name(
    std::string_view library, std::uint16_t ordinal) noexcept;

} // namespace toohuman::runtime
