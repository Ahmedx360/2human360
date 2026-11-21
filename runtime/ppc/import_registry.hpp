#pragma once

#include "image/xex_imports.hpp"
#include "ppc_context.h"
#include "memory/guest_address_space.hpp"
#include "memory/guest_heap.hpp"

#include <cstddef>
#include <cstdint>
#include <memory>
#include <optional>
#include <span>
#include <thread>
#include <string>
#include <unordered_map>
#include <vector>

namespace toohuman::runtime {

// Routes XEX2 function-import thunks through one generic PPC trampoline.
// Handlers are keyed by the exact library name and ordinal; unknown imports
// are reported with thunk, LR and argument registers, then fail fast.
class PpcImportRegistry final {
public:
    PpcImportRegistry() = default;
    ~PpcImportRegistry();

    PpcImportRegistry(const PpcImportRegistry&) = delete;
    PpcImportRegistry& operator=(const PpcImportRegistry&) = delete;

    [[nodiscard]] bool register_handler(const std::string& library,
                                        std::uint16_t ordinal,
                                        PPCFunc* handler,
                                        std::string* error = nullptr);

    [[nodiscard]] bool prepare_variable_imports(
        GuestAddressSpace& memory,
        LoadedPeImage& image,
        std::span<const std::uint8_t> xex_file,
        std::span<const XexImport> imports,
        std::size_t* bound_count = nullptr,
        std::string* error = nullptr);

    [[nodiscard]] bool install(GuestAddressSpace& memory,
                               std::span<const XexImport> imports,
                               std::size_t* registered_count = nullptr,
                               std::string* error = nullptr);

    void dispatch(PPCContext& context, std::uint8_t* base);

    // Allocate runtime memory from the committed private guest virtual range.
    [[nodiscard]] std::optional<std::uint32_t> allocate_runtime_memory(
        std::size_t bytes, std::size_t alignment = 16);
    [[nodiscard]] GuestHeap* runtime_heap() noexcept { return virtual_heap_.get(); }
    [[nodiscard]] GuestHeap* stack_heap() noexcept { return stack_heap_.get(); }

    // Guest LDR_DATA_TABLE_ENTRY address backing XexExecutableModuleHandle.
    [[nodiscard]] std::uint32_t executable_module_handle() const noexcept {
        return executable_module_handle_;
    }

private:
    struct VirtualMemoryProtectionRange {
        std::uint32_t offset{};
        std::uint32_t size{};
        std::uint32_t protection{};
    };
    struct VirtualMemoryRegion {
        std::uint32_t size{};
        std::uint32_t page_size{};
        std::uint32_t allocation_protect{};
        std::vector<VirtualMemoryProtectionRange> protections;
    };

    [[nodiscard]] static std::string make_key(const std::string& library,
                                              std::uint16_t ordinal);

    struct ImportBinding {
        XexImport import;
        PPCFunc* handler{};
    };

    std::unordered_map<std::uint32_t, ImportBinding> imports_by_thunk_;
    std::unordered_map<std::string, PPCFunc*> handlers_;
    std::unique_ptr<GuestHeap> guest_heap_;
    std::unique_ptr<GuestHeap> virtual_heap_;
    std::unique_ptr<GuestHeap> stack_heap_;
    GuestAddressSpace* memory_{};
    std::unordered_map<std::uint32_t, VirtualMemoryRegion> virtual_memory_regions_;
    std::uint32_t image_base_{};
    std::uint32_t image_size_{};
    std::jthread timestamp_thread_;
    std::uint32_t xex_header_guest_address_{};
    std::uint32_t xex_header_size_{};
    std::uint32_t executable_module_handle_{};
    bool variables_prepared_{};
    bool installed_{};
};

} // namespace toohuman::runtime
