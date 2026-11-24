#pragma once
#include "image/xbox360_pe.hpp"
#include "image/xex_imports.hpp"
#include "memory/guest_address_space.hpp"
#include "memory/guest_heap.hpp"
#include "ppc/guest_thread_manager.hpp"
#include <atomic>
#include <cstddef>
#include <cstdint>
namespace toohuman::runtime {
class GuestThreadRuntime final {
public:
    GuestThreadRuntime(GuestAddressSpace& memory, LoadedPeImage image,
                       XexImportResult xex, GuestHeap& runtime_heap,
                       GuestHeap& stack_heap, GuestHeap* pool_heap,
                       const GuestThreadStartup& main_thread);
    GuestThreadRuntime(const GuestThreadRuntime&) = delete;
    GuestThreadRuntime& operator=(const GuestThreadRuntime&) = delete;
    [[nodiscard]] std::uint32_t create_thread(PPCContext& context, std::uint8_t* base);
    [[nodiscard]] std::uint32_t resume_thread(PPCContext& context, std::uint8_t* base);
    [[nodiscard]] std::uint32_t suspend_thread(PPCContext& context, std::uint8_t* base);
    [[nodiscard]] std::uint32_t resume_kernel_thread(PPCContext& context);
private:
    [[nodiscard]] bool writable_guest_range(std::uint32_t address,
                                            std::size_t size) const noexcept;
    [[nodiscard]] static bool ranges_overlap(std::uint32_t a, std::size_t a_size,
                                             std::uint32_t b, std::size_t b_size) noexcept;
    static void store_be32(std::uint8_t* base, std::uint32_t address,
                           std::uint32_t value) noexcept;
    GuestAddressSpace& memory_;
    LoadedPeImage image_;
    XexImportResult xex_;
    GuestHeap& runtime_heap_;
    GuestHeap& stack_heap_;
    GuestHeap* pool_heap_{};
    std::uint32_t process_info_block_address_{};
    std::atomic<std::uint32_t> next_thread_id_{2u};
    GuestThreadManager threads_;
};
} // namespace toohuman::runtime
