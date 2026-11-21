#pragma once

#include "image/xbox360_pe.hpp"
#include "ppc/import_registry.hpp"

#include <cstddef>
#include <optional>
#include <cstdint>
#include <span>
#include <string>

namespace toohuman::runtime {

struct GuestMainThreadStartup {
    std::uint32_t kthread_address{};
    std::uint32_t pcr_address{};
    std::uint32_t process_info_block_address{};
    std::uint32_t tls_static_address{};
    std::uint32_t tls_dynamic_address{};
    std::uint32_t tls_size{};
    std::uint32_t stack_allocation_base{};
    std::uint32_t stack_allocation_size{};
    std::uint32_t stack_limit{};
    std::uint32_t stack_base{};
    std::uint32_t stack_size{};
    std::uint32_t thread_id{};
    PPCContext context{};
};

struct TitleRuntimeInitReport {
    std::size_t translated_functions{};
    std::size_t function_imports{};
    std::size_t function_iat_slots{};
    std::size_t variable_imports{};
    std::uint32_t default_stack_size{};
    std::uint32_t default_heap_size{};
    std::optional<XexTlsInfo> tls_info;
    GuestMainThreadStartup main_thread{};
};

// Initializes one guest main thread's KTHREAD/PCR/PIB/TLS/stack context.
// The caller supplies an initialized guest runtime heap so this can be tested
// independently of the full game image/import table.
[[nodiscard]] bool initialize_guest_main_thread(
    GuestAddressSpace& memory,
    const LoadedPeImage& image,
    const XexImportResult& xex,
    GuestHeap& runtime_heap,
    GuestMainThreadStartup& state,
    std::string* error = nullptr);

// Initializes the memory, generated PPC lookup table, XEX IATs and kernel
// variable backing from a LoadedPeImage (either direct XEX reconstruction or
// extracted PE) plus its matching original XEX. Register custom HLE handlers
// before calling. Initializes one guest main-thread KTHREAD/PCR/TLS/stack
// context, but does not start the entry point or create a guest scheduler.
[[nodiscard]] bool initialize_title_runtime(
    GuestAddressSpace& memory,
    const LoadedPeImage& image,
    std::span<const std::uint8_t> xex_file,
    PpcImportRegistry& imports,
    TitleRuntimeInitReport* report = nullptr,
    std::string* error = nullptr);

} // namespace toohuman::runtime
