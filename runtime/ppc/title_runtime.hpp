#pragma once

#include "image/xbox360_pe.hpp"
#include "ppc/import_registry.hpp"

#include <cstddef>
#include <optional>
#include <cstdint>
#include <span>
#include <string>

namespace toohuman::runtime {

struct GuestThreadStartup {
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
    std::uint32_t start_address{};
    std::uint32_t start_context{};
    std::uint32_t creation_flags{};
    bool owns_process_info_block{};
    PPCContext context{};
};

using GuestMainThreadStartup = GuestThreadStartup;

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

// Initializes a guest thread's KTHREAD/PCR/TLS/stack and PPC register context.
// Pass process_info_block_address=0 for the process's first/main thread; the helper
// allocates and initializes its ProcessInfoBlock. Worker threads pass the existing
// process block so the per-process data remains shared. This prepares a context;
// it does not schedule or execute the thread.
[[nodiscard]] bool initialize_guest_thread(
    GuestAddressSpace& memory,
    const LoadedPeImage& image,
    const XexImportResult& xex,
    GuestHeap& runtime_heap,
    GuestHeap& stack_heap,
    std::uint32_t requested_stack_size,
    std::uint32_t thread_id,
    std::uint32_t start_address,
    std::uint32_t start_context,
    std::uint32_t process_info_block_address,
    std::uint32_t creation_flags,
    GuestThreadStartup& state,
    std::string* error = nullptr);

// Initializes the main thread and creates the process-wide ProcessInfoBlock.
// The caller supplies separate process-state and stack heaps for independent testing.
// Releases per-thread KTHREAD/PCR/TLS/stack allocations. The ProcessInfoBlock is
// freed only when this context created it; worker contexts share the process block.
[[nodiscard]] bool release_guest_thread_context(
    GuestAddressSpace& memory,
    GuestHeap& runtime_heap,
    GuestHeap& stack_heap,
    GuestThreadStartup& state,
    std::string* error = nullptr);

[[nodiscard]] bool initialize_guest_main_thread(
    GuestAddressSpace& memory,
    const LoadedPeImage& image,
    const XexImportResult& xex,
    GuestHeap& runtime_heap,
    GuestHeap& stack_heap,
    GuestMainThreadStartup& state,
    std::string* error = nullptr);

// Initializes the memory, generated PPC lookup table, XEX IATs and kernel
// variable backing from a LoadedPeImage (either direct XEX reconstruction or
// extracted PE) plus its matching original XEX. Register custom HLE handlers
// before calling. Builds the main-thread context, but does not invoke the entry
// point or create a guest scheduler.
[[nodiscard]] bool initialize_title_runtime(
    GuestAddressSpace& memory,
    const LoadedPeImage& image,
    std::span<const std::uint8_t> xex_file,
    PpcImportRegistry& imports,
    TitleRuntimeInitReport* report = nullptr,
    std::string* error = nullptr);

} // namespace toohuman::runtime
