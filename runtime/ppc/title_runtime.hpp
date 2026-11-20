#pragma once

#include "image/xbox360_pe.hpp"
#include "ppc/import_registry.hpp"

#include <cstddef>
#include <optional>
#include <cstdint>
#include <span>
#include <string>

namespace toohuman::runtime {

struct TitleRuntimeInitReport {
    std::size_t translated_functions{};
    std::size_t function_imports{};
    std::size_t function_iat_slots{};
    std::size_t variable_imports{};
    std::uint32_t default_stack_size{};
    std::uint32_t default_heap_size{};
    std::optional<XexTlsInfo> tls_info;
};

// Initializes the memory, generated PPC lookup table, XEX IATs and kernel
// variable backing from a LoadedPeImage (either direct XEX reconstruction or
// extracted PE) plus its matching original XEX. Register custom HLE handlers
// before calling. It does not invent startup registers, stack layout or TLS.
[[nodiscard]] bool initialize_title_runtime(
    GuestAddressSpace& memory,
    const LoadedPeImage& image,
    std::span<const std::uint8_t> xex_file,
    PpcImportRegistry& imports,
    TitleRuntimeInitReport* report = nullptr,
    std::string* error = nullptr);

} // namespace toohuman::runtime
