#pragma once

#include "image/xex_imports.hpp"
#include "ppc_context.h"
#include "memory/guest_address_space.hpp"
#include "memory/guest_heap.hpp"
#include "gpu/xenos_command_processor.hpp"

#include <cstddef>
#include <cstdint>
#include <memory>
#include <mutex>
#include <optional>
#include <span>
#include <thread>
#include <string>
#include <unordered_map>
#include <vector>

namespace toohuman::runtime {

class GuestThreadRuntime;
struct GuestThreadStartup;

// Routes XEX2 function-import thunks through one generic PPC trampoline.
// Handlers are keyed by the exact library name and ordinal; unknown imports
// are reported with thunk, LR and argument registers, then fail fast.
class PpcImportRegistry final {
public:
    PpcImportRegistry();
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

    [[nodiscard]] static PpcImportRegistry* active() noexcept;
    [[nodiscard]] bool initialize_thread_runtime(
        GuestAddressSpace& memory, const LoadedPeImage& image,
        const XexImportResult& xex, const GuestThreadStartup& main_thread,
        std::string* error = nullptr);
    [[nodiscard]] std::uint32_t create_guest_thread(PPCContext& context,
                                                    std::uint8_t* base);
    [[nodiscard]] std::uint32_t resume_guest_thread(PPCContext& context,
                                                    std::uint8_t* base);
    [[nodiscard]] std::uint32_t resume_guest_kernel_thread(PPCContext& context);

    void dispatch(PPCContext& context, std::uint8_t* base);

    // Allocate runtime memory from the committed private guest virtual range.
    [[nodiscard]] std::optional<std::uint32_t> allocate_runtime_memory(
        std::size_t bytes, std::size_t alignment = 16);
    [[nodiscard]] GuestHeap* runtime_heap() noexcept { return virtual_heap_.get(); }
    [[nodiscard]] GuestHeap* stack_heap() noexcept { return stack_heap_.get(); }
    [[nodiscard]] XenosCommandProcessor& xenos_command_processor() noexcept {
        return xenos_command_processor_;
    }
    [[nodiscard]] bool initialize_xenos_ring(
        std::uint32_t physical_base, std::uint32_t size_log2,
        std::string* error = nullptr) noexcept;
    [[nodiscard]] bool enable_xenos_read_pointer_writeback(
        std::uint32_t physical_address, std::uint32_t block_size_log2,
        std::string* error = nullptr) noexcept;

    // Guest LDR_DATA_TABLE_ENTRY address backing XexExecutableModuleHandle.
    [[nodiscard]] std::uint32_t executable_module_handle() const noexcept {
        return executable_module_handle_;
    }

private:
    struct VirtualMemoryProtectionRange {
        std::uint32_t offset{};
        std::uint32_t size{};
        std::uint32_t protection{};
        bool committed{};
    };
    struct VirtualMemoryRegion {
        std::uint32_t size{};
        std::uint32_t page_size{};
        std::uint32_t allocation_protect{};
        std::vector<VirtualMemoryProtectionRange> protections;
    };

    [[nodiscard]] static std::string make_key(const std::string& library,
                                              std::uint16_t ordinal);
    static void xenos_mmio_write_observer(
        void* context, std::uint32_t address, std::uint8_t width,
        std::uint64_t value) noexcept;
    void handle_xenos_mmio_write(std::uint32_t address, std::uint8_t width,
                                 std::uint64_t value) noexcept;
    static bool dispatch_xenos_register_write(
        void* context, std::uint32_t index, std::uint32_t value);
    static bool validate_xenos_register_write(
        void* context, std::uint32_t index, std::uint32_t value);
    static Pm4CallbackResult dispatch_xenos_type3(
        void* context, std::uint32_t opcode, bool predicate,
        std::span<const std::uint32_t> payload);

    struct ImportBinding {
        XexImport import;
        PPCFunc* handler{};
    };

    std::unordered_map<std::uint32_t, ImportBinding> imports_by_thunk_;
    std::unordered_map<std::string, PPCFunc*> handlers_;
    std::unique_ptr<GuestHeap> guest_heap_;
    std::unique_ptr<GuestHeap> virtual_heap_;
    std::unique_ptr<GuestHeap> stack_heap_;
    XenosCommandProcessor xenos_command_processor_;
    mutable std::mutex xenos_command_processor_mutex_;
    std::uint32_t xenos_indirect_depth_{};
    std::size_t xenos_indirect_buffers_this_batch_{};
    bool xenos_indirect_continuation_pending_{};
    std::uint32_t xenos_indirect_continuation_physical_{};
    std::uint32_t xenos_indirect_continuation_length_{};
    std::uint32_t xenos_indirect_continuation_read_index_{};
    bool xenos_waiting_for_register_{};
    std::uint32_t xenos_wait_register_index_{};
    std::uint64_t xenos_bin_mask_{~std::uint64_t{0}};
    std::uint64_t xenos_bin_select_{~std::uint64_t{0}};
    GuestAddressSpace* memory_{};
    std::unordered_map<std::uint32_t, VirtualMemoryRegion> virtual_memory_regions_;
    mutable std::mutex virtual_memory_regions_mutex_;
    std::uint32_t image_base_{};
    std::uint32_t image_size_{};
    std::jthread timestamp_thread_;
    mutable std::mutex thread_runtime_mutex_;
    std::unique_ptr<GuestThreadRuntime> thread_runtime_;
    std::uint32_t xex_header_guest_address_{};
    std::uint32_t xex_header_size_{};
    std::uint32_t executable_module_handle_{};
    bool variables_prepared_{};
    bool installed_{};
};

} // namespace toohuman::runtime
