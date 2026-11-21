#include "ppc/guest_thread_runtime.hpp"
#include "ppc/function_table.hpp"
#include "ppc/guest_thread_execution.hpp"
#include "ppc/title_runtime.hpp"
#include <limits>
#include <string>
#include <utility>
namespace toohuman::runtime {
namespace {
constexpr std::uint32_t kStatusSuccess = 0x00000000u;
constexpr std::uint32_t kStatusUnsuccessful = 0xC0000001u;
constexpr std::uint32_t kStatusAccessViolation = 0xC0000005u;
constexpr std::uint32_t kStatusInvalidHandle = 0xC0000008u;
constexpr std::uint32_t kStatusInvalidParameter = 0xC000000Du;
constexpr std::uint32_t kStatusNoMemory = 0xC0000017u;
}
GuestThreadRuntime::GuestThreadRuntime(
    GuestAddressSpace& memory, LoadedPeImage image, XexImportResult xex,
    GuestHeap& runtime_heap, GuestHeap& stack_heap, GuestHeap* pool_heap,
    const GuestThreadStartup& main_thread)
    : memory_(memory), image_(std::move(image)), xex_(std::move(xex)),
      runtime_heap_(runtime_heap), stack_heap_(stack_heap), pool_heap_(pool_heap),
      process_info_block_address_(main_thread.process_info_block_address),
      threads_(process_kernel_objects()) {}
bool GuestThreadRuntime::writable_guest_range(std::uint32_t address,
                                              std::size_t size) const noexcept {
    if (address == 0 || size == 0 ||
        static_cast<std::uint64_t>(address) + size > 0x100000000ull)
        return false;
    if (runtime_heap_.owns(address, size) || stack_heap_.owns(address, size) ||
        (pool_heap_ && pool_heap_->owns(address, size))) return true;
    constexpr std::uint32_t kImageScnMemWrite = 0x80000000u;
    for (const auto& section : image_.sections) {
        if ((section.characteristics & kImageScnMemWrite) == 0) continue;
        const auto section_size = section.virtual_size ? section.virtual_size : section.raw_size;
        const auto begin = static_cast<std::uint64_t>(image_.image_base) + section.virtual_address;
        const auto end = begin + section_size;
        const auto requested_end = static_cast<std::uint64_t>(address) + size;
        if (address >= begin && requested_end <= end) return true;
    }
    return false;
}
bool GuestThreadRuntime::ranges_overlap(std::uint32_t a, std::size_t a_size,
                                        std::uint32_t b, std::size_t b_size) noexcept {
    const auto a_end = static_cast<std::uint64_t>(a) + a_size;
    const auto b_end = static_cast<std::uint64_t>(b) + b_size;
    return static_cast<std::uint64_t>(a) < b_end && static_cast<std::uint64_t>(b) < a_end;
}
void GuestThreadRuntime::store_be32(std::uint8_t* base, std::uint32_t address,
                                    std::uint32_t value) noexcept {
    auto* p = base + address;
    p[0] = static_cast<std::uint8_t>(value >> 24);
    p[1] = static_cast<std::uint8_t>(value >> 16);
    p[2] = static_cast<std::uint8_t>(value >> 8);
    p[3] = static_cast<std::uint8_t>(value);
}
std::uint32_t GuestThreadRuntime::create_thread(PPCContext& context, std::uint8_t* base) {
    if (!memory_.valid() || base != memory_.base() || process_info_block_address_ == 0)
        return kStatusUnsuccessful;
    const auto handle_out = context.r3.u32;
    const auto stack_size = context.r4.u32;
    const auto thread_id_out = context.r5.u32;
    const auto api_startup = context.r6.u32;
    const auto user_start = context.r7.u32;
    const auto user_context = context.r8.u32;
    const auto flags = context.r9.u32;
    const auto entry = api_startup ? api_startup : user_start;
    const auto image_end = static_cast<std::uint64_t>(image_.image_base) + image_.image_size;
    const auto valid_code = [&](std::uint32_t address) {
        return address && (address & 3u) == 0 && address >= image_.image_base &&
               static_cast<std::uint64_t>(address) + 4u <= image_end;
    };
    if (!valid_code(entry) || (api_startup && !valid_code(user_start)))
        return kStatusInvalidParameter;
    if ((handle_out && !writable_guest_range(handle_out, 4)) ||
        (thread_id_out && !writable_guest_range(thread_id_out, 4)) ||
        (handle_out && thread_id_out && ranges_overlap(handle_out, 4, thread_id_out, 4)))
        return kStatusAccessViolation;
    const auto thread_id = next_thread_id_.fetch_add(1, std::memory_order_relaxed);
    if (thread_id < 2u || thread_id == std::numeric_limits<std::uint32_t>::max())
        return kStatusNoMemory;
    GuestThreadStartup startup{};
    std::string error;
    if (!initialize_guest_thread(memory_, image_, xex_, runtime_heap_, stack_heap_,
            stack_size, thread_id, entry, user_context, process_info_block_address_,
            flags, startup, &error)) return kStatusNoMemory;
    startup.context.r3.u32 = api_startup ? user_start : user_context;
    startup.context.r4.u32 = api_startup ? user_context : 0u;
    const auto native_handle = (flags & 0x80u)
        ? std::optional<GuestKernelHandle>(startup.kthread_address) : std::nullopt;
    auto handle = threads_.create(
        std::move(startup),
        [this, entry](GuestThreadStartup& state, std::stop_token stop) {
            GuestThreadExecutionScope scope(stop);
            try {
                std::string invoke_error;
                if (!invoke_recompiled_function(memory_, entry, state.context, &invoke_error))
                    return kStatusUnsuccessful;
                return state.context.r3.u32;
            } catch (const GuestThreadExitSignal& exit) {
                return exit.exit_code();
            }
        },
        (flags & 1u) != 0, &error,
        [this](GuestThreadStartup& state) {
            std::string ignored;
            (void)release_guest_thread_context(memory_, runtime_heap_, stack_heap_, state, &ignored);
        }, native_handle);
    if (!handle) return kStatusNoMemory;
    if (handle_out) store_be32(base, handle_out, *handle);
    if (thread_id_out) store_be32(base, thread_id_out, thread_id);
    return kStatusSuccess;
}
std::uint32_t GuestThreadRuntime::resume_thread(PPCContext& context, std::uint8_t* base) {
    if (!memory_.valid() || base != memory_.base()) return kStatusUnsuccessful;
    const auto out = context.r4.u32;
    if (out && !writable_guest_range(out, 4)) return kStatusAccessViolation;
    std::uint32_t previous = 0;
    std::string error;
    if (!threads_.resume(context.r3.u32, &previous, &error)) return kStatusInvalidHandle;
    if (out) store_be32(base, out, previous);
    return kStatusSuccess;
}
std::uint32_t GuestThreadRuntime::resume_kernel_thread(PPCContext& context) {
    std::uint32_t previous = 0;
    std::string error;
    if (!threads_.resume(context.r3.u32, &previous, &error)) return 0xFFFFFFFFu;
    return previous;
}
} // namespace toohuman::runtime
