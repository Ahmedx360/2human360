#include "ppc/guest_thread_runtime.hpp"
#include "ppc/guest_thread_execution.hpp"
#include "ppc/title_runtime.hpp"
#include <atomic>
#include <cassert>
#include <chrono>
#include <cstdint>
#include <string>
#include <thread>
namespace {
std::atomic<std::uint32_t> seen_r3{0}, seen_r4{0}, seen_r13{0}, seen_r1{0};
std::atomic<std::uint32_t> suspend_entry_iterations{0};
std::atomic<bool> finish_suspend_entry{false};
PPC_FUNC_IMPL(test_guest_thread_suspend_entry) {
    while (!finish_suspend_entry.load(std::memory_order_acquire)) {
        throw_if_guest_thread_stop_requested();
        suspend_entry_iterations.fetch_add(1u, std::memory_order_release);
        std::this_thread::yield();
    }
    ctx.r3.u32 = 0x24681357u;
}
PPC_FUNC_IMPL(test_guest_thread_entry) {
    seen_r3.store(ctx.r3.u32, std::memory_order_release);
    seen_r4.store(ctx.r4.u32, std::memory_order_release);
    seen_r13.store(ctx.r13.u32, std::memory_order_release);
    seen_r1.store(ctx.r1.u32, std::memory_order_release);
    ctx.r3.u32 = 0x13579BDFu;
}
std::uint32_t read_be32(const std::uint8_t* p, std::uint32_t a) {
    return (std::uint32_t(p[a]) << 24) | (std::uint32_t(p[a + 1]) << 16) |
           (std::uint32_t(p[a + 2]) << 8) | std::uint32_t(p[a + 3]);
}
}
int main() {
    using namespace toohuman::runtime;
    std::string error;
    LoadedPeImage image;
    image.image_base = 0x82000000u;
    image.image_size = 0x10000u;
    image.entry_point = 0x82001000u;
    image.bytes.resize(image.image_size);
    image.sections.push_back({".data", 0x5000u, 0x1000u, 0x1000u, 0xC0000040u});
    auto memory = GuestAddressSpace::reserve(&error);
    assert(memory.valid());
    assert(memory.map_image(image, &error));
    assert(memory.initialize_function_table(0x82001000u, 0x1000u, &error));
    assert(memory.fill_function_table(&test_guest_thread_entry));
    assert(memory.set_function(image.entry_point, &test_guest_thread_entry));
    assert(memory.set_function(image.entry_point + 4u, &test_guest_thread_entry));
    assert(memory.set_function(image.entry_point + 8u, &test_guest_thread_suspend_entry));
    GuestHeap runtime_heap(memory, 0xA0000000u, 0x01000000u);
    GuestHeap stack_heap(memory, 0x70000000u, 0x01000000u);
    assert(runtime_heap.initialize(&error));
    assert(stack_heap.initialize(&error));
    XexImportResult xex;
    xex.default_stack_size = 0x40000u;
    xex.tls_info = XexTlsInfo{64u, 0u, 0u, 0u};
    GuestMainThreadStartup main_thread{};
    assert(initialize_guest_main_thread(memory, image, xex, runtime_heap,
                                        stack_heap, main_thread, &error));
    const auto runtime_before = runtime_heap.available_bytes();
    const auto stack_before = stack_heap.available_bytes();
    {
        GuestThreadRuntime threads(memory, image, xex, runtime_heap, stack_heap,
                                   nullptr, main_thread);
        PPCContext invalid{};
        invalid.r3.u32 = 0x50000000u;
        invalid.r7.u32 = image.entry_point;
        assert(threads.create_thread(invalid, memory.base()) == 0xC0000005u);
        assert(runtime_heap.available_bytes() == runtime_before);
        assert(stack_heap.available_bytes() == stack_before);
        constexpr std::uint32_t handle_out = 0x82005000u;
        constexpr std::uint32_t id_out = 0x82005004u;
        PPCContext create{};
        create.r3.u32 = handle_out;
        create.r4.u32 = 0x20000u;
        create.r5.u32 = id_out;
        create.r7.u32 = image.entry_point;
        create.r8.u32 = 0x2468ACE0u;
        create.r9.u32 = 0x81u;
        assert(threads.create_thread(create, memory.base()) == 0u);
        const auto native_handle = read_be32(memory.base(), handle_out);
        assert(native_handle >= 0xA0000000u && native_handle < 0xA1000000u);
        assert(read_be32(memory.base(), id_out) == 2u);
        assert(process_kernel_objects().lookup(native_handle));
        PPCContext resume_kernel{};
        resume_kernel.r3.u32 = native_handle;
        assert(threads.resume_kernel_thread(resume_kernel) == 1u);
        assert(process_kernel_objects().wait(native_handle, std::chrono::seconds(2)) ==
               GuestKernelObjectWaitResult::Signaled);
        assert(seen_r3.load(std::memory_order_acquire) == 0x2468ACE0u);
        assert(seen_r4.load(std::memory_order_acquire) == 0u);
        assert(seen_r13.load(std::memory_order_acquire) != 0u);
        assert((seen_r1.load(std::memory_order_acquire) & 0xFu) == 0u);
        assert(process_kernel_objects().close(native_handle));
        assert(!runtime_heap.allocation_size(native_handle));
        assert(stack_heap.available_bytes() == stack_before);
        PPCContext create_xapi{};
        create_xapi.r3.u32 = handle_out;
        create_xapi.r5.u32 = id_out;
        create_xapi.r6.u32 = image.entry_point;
        create_xapi.r7.u32 = image.entry_point + 4u;
        create_xapi.r8.u32 = 0xABCD1234u;
        create_xapi.r9.u32 = 1u;
        assert(threads.create_thread(create_xapi, memory.base()) == 0u);
        const auto standard_handle = read_be32(memory.base(), handle_out);
        PPCContext resume_nt{};
        resume_nt.r3.u32 = standard_handle;
        resume_nt.r4.u32 = 0x82005008u;
        assert(threads.resume_thread(resume_nt, memory.base()) == 0u);
        assert(read_be32(memory.base(), 0x82005008u) == 1u);
        assert(process_kernel_objects().wait(standard_handle, std::chrono::seconds(2)) ==
               GuestKernelObjectWaitResult::Signaled);
        assert(seen_r3.load(std::memory_order_acquire) == image.entry_point + 4u);
        assert(seen_r4.load(std::memory_order_acquire) == 0xABCD1234u);
        assert(process_kernel_objects().close(standard_handle));
        assert(stack_heap.available_bytes() == stack_before);

        // NtSuspendThread pauses a real recompiled worker at the next HLE
        // dispatch checkpoint and NtResumeThread releases it when the count
        // returns to zero.
        suspend_entry_iterations.store(0u, std::memory_order_release);
        finish_suspend_entry.store(false, std::memory_order_release);
        PPCContext create_cooperative{};
        create_cooperative.r3.u32 = handle_out;
        create_cooperative.r4.u32 = 0x20000u;
        create_cooperative.r7.u32 = image.entry_point + 8u;
        create_cooperative.r8.u32 = 0x10203040u;
        assert(threads.create_thread(create_cooperative, memory.base()) == 0u);
        const auto cooperative_handle = read_be32(memory.base(), handle_out);
        const auto entry_deadline = std::chrono::steady_clock::now() + std::chrono::seconds(2);
        while (suspend_entry_iterations.load(std::memory_order_acquire) < 10u &&
               std::chrono::steady_clock::now() < entry_deadline)
            std::this_thread::yield();
        assert(suspend_entry_iterations.load(std::memory_order_acquire) >= 10u);

        PPCContext suspend{};
        suspend.r3.u32 = cooperative_handle;
        suspend.r4.u32 = 0x8200500Cu;
        assert(threads.suspend_thread(suspend, memory.base()) == 0u);
        assert(read_be32(memory.base(), 0x8200500Cu) == 0u);
        std::this_thread::sleep_for(30ms);
        const auto paused_iterations =
            suspend_entry_iterations.load(std::memory_order_acquire);
        std::this_thread::sleep_for(30ms);
        assert(suspend_entry_iterations.load(std::memory_order_acquire) ==
               paused_iterations);

        PPCContext resume_cooperative{};
        resume_cooperative.r3.u32 = cooperative_handle;
        resume_cooperative.r4.u32 = 0x82005010u;
        assert(threads.resume_thread(resume_cooperative, memory.base()) == 0u);
        assert(read_be32(memory.base(), 0x82005010u) == 1u);
        const auto resume_deadline = std::chrono::steady_clock::now() + std::chrono::seconds(2);
        while (suspend_entry_iterations.load(std::memory_order_acquire) ==
                   paused_iterations &&
               std::chrono::steady_clock::now() < resume_deadline)
            std::this_thread::yield();
        assert(suspend_entry_iterations.load(std::memory_order_acquire) >
               paused_iterations);
        finish_suspend_entry.store(true, std::memory_order_release);
        assert(process_kernel_objects().wait(
                   cooperative_handle, std::chrono::seconds(2)) ==
               GuestKernelObjectWaitResult::Signaled);
        assert(process_kernel_objects().close(cooperative_handle));
        assert(stack_heap.available_bytes() == stack_before);
    }
    assert(release_guest_thread_context(memory, runtime_heap, stack_heap, main_thread, &error));
    assert(runtime_heap.available_bytes() > runtime_before);
    return 0;
}
