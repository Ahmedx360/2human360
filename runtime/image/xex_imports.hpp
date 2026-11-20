#pragma once

#include "image/xbox360_pe.hpp"

#include <cstdint>
#include <span>
#include <string>
#include <vector>

namespace toohuman::runtime {

struct XexImport {
    std::string library;
    std::uint16_t ordinal{};
    std::uint8_t hint{};
    std::uint8_t type{};
    std::uint32_t thunk_address{};
};

struct XexImportResult {
    std::vector<XexImport> imports;
    std::string error;

    [[nodiscard]] explicit operator bool() const noexcept {
        return error.empty();
    }
};

// Reads the unencrypted XEX2 import-library metadata and resolves each
// descriptor's firstThunk against the separately extracted PE image.
// The XEX payload itself does not need to be decrypted for this metadata.
[[nodiscard]] XexImportResult parse_xex2_imports(
    std::span<const std::uint8_t> xex_file,
    const LoadedPeImage& image);

} // namespace toohuman::runtime
