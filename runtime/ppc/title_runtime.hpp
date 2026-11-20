#pragma once

#include "image/xbox360_pe.hpp"
#include "ppc/import_registry.hpp"

#include <cstddef>
#include <cstdint>
#include <span>
#include <string>

namespace toohuman::runtime {

struct TitleRuntimeInitReport {
    std::size_t translated_functions{};
    std::size_t function_imports{};
    std::size_t variable_imports{};
    std::uint32_t default_stack_size{};
    std::uint32_t default_heap_size{};
};

// Initializes the memory, generated PPC lookup table and XEX import thunks
// for a matching extracted PE + original XEX pair. Register known HLE handlers
// on imports before calling this function. It deliberately does not invent
// startup registers, stack layout, TLS or kernel service semantics.
[[nodiscard]] bool initialize_title_runtime(
    GuestAddressSpace& memory,
    const LoadedPeImage& image,
    std::span<const std::uint8_t> xex_file,
    PpcImportRegistry& imports,
    TitleRuntimeInitReport* report = nullptr,
    std::string* error = nullptr);

} // namespace toohuman::runtime
