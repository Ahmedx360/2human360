#pragma once

#include "image/xbox360_pe.hpp"

#include <cstdint>
#include <optional>
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

struct XexTlsInfo {
    std::uint32_t slot_count{};
    std::uint32_t raw_data_address{};
    std::uint32_t data_size{};
    std::uint32_t raw_data_size{};
};

struct XexImportResult {
    std::vector<XexImport> imports;
    std::uint32_t default_stack_size{};
    std::uint32_t default_heap_size{};
    std::optional<XexTlsInfo> tls_info;
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
