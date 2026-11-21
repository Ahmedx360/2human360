// Unit tests for the stateless startup HLE. They need only ppc_context.h (no generated game code, no registry).
#include "ppc/boot_hle.hpp"
#include <ppc_config.h>

#include <atomic>
#include <cassert>
#include <cstdint>
#include <cstring>
#include <thread>
#include <vector>

using namespace toohuman::runtime;

namespace {
std::vector<std::uint8_t> g_mem(0x10000, 0xCC);   // guest address N == g_mem[N]
std::uint8_t* base() { return g_mem.data(); }
void poke(std::uint32_t at, const char* s) { std::memcpy(base() + at, s, std::strlen(s) + 1); }
std::uint16_t be16(std::uint32_t a) { return static_cast<std::uint16_t>((g_mem[a] << 8) | g_mem[a + 1]); }
std::uint32_t be32(std::uint32_t a) {
    return (std::uint32_t(g_mem[a]) << 24) | (std::uint32_t(g_mem[a + 1]) << 16) | (std::uint32_t(g_mem[a + 2]) << 8) | g_mem[a + 3];
}
void put16(std::uint32_t a, std::uint16_t v) { g_mem[a] = v >> 8; g_mem[a + 1] = std::uint8_t(v); }

}

namespace {
void test_critical_sections() {
    constexpr std::uint32_t address = 0x8000u;
    PPCContext context{};

    context.r3.u32 = address;
    context.r4.u32 = 0x1234u;
    boot_hle::RtlInitializeCriticalSectionAndSpinCount(context, base());
    assert(context.r3.u32 == 0);
    assert(g_mem[address] == 1u);
    assert(g_mem[address + 1] == 19u); // ceil(0x1234 / 256)
    assert(be32(address + 0x10) == 0xFFFFFFFFu);

    context = {};
    context.r3.u32 = address;
    boot_hle::RtlEnterCriticalSection(context, base());
    const auto owner = be32(address + 0x18);
    assert(owner != 0);
    assert(be32(address + 0x10) == 0);
    assert(be32(address + 0x14) == 1);

    // Recursive acquisition by the owner is valid and updates the guest fields.
    context = {};
    context.r3.u32 = address;
    boot_hle::RtlEnterCriticalSection(context, base());
    assert(be32(address + 0x10) == 1);
    assert(be32(address + 0x14) == 2);

    context = {};
    context.r3.u32 = address;
    boot_hle::RtlTryEnterCriticalSection(context, base());
    assert(context.r3.u32 == 1);
    assert(be32(address + 0x10) == 2);
    assert(be32(address + 0x14) == 3);

    // A different host thread must not steal an owned critical section.
    std::atomic<std::uint32_t> competing_result{0xFFFFFFFFu};
    std::thread competitor([&] {
        PPCContext other{};
        other.r3.u32 = address;
        boot_hle::RtlTryEnterCriticalSection(other, base());
        competing_result.store(other.r3.u32, std::memory_order_release);
    });
    competitor.join();
    assert(competing_result.load(std::memory_order_acquire) == 0);

    for (int i = 0; i < 3; ++i) {
        context = {};
        context.r3.u32 = address;
        boot_hle::RtlLeaveCriticalSection(context, base());
    }
    assert(be32(address + 0x10) == 0xFFFFFFFFu);
    assert(be32(address + 0x14) == 0);
    assert(be32(address + 0x18) == 0);

    // Once released, a different host thread can acquire and release it.
    std::atomic<std::uint32_t> acquired_after_release{0};
    std::thread next_owner([&] {
        PPCContext other{};
        other.r3.u32 = address;
        boot_hle::RtlTryEnterCriticalSection(other, base());
        acquired_after_release.store(other.r3.u32, std::memory_order_release);
        if (other.r3.u32 != 0) {
            other.r3.u32 = address;
            boot_hle::RtlLeaveCriticalSection(other, base());
        }
    });
    next_owner.join();
    assert(acquired_after_release.load(std::memory_order_acquire) == 1);
    assert(be32(address + 0x10) == 0xFFFFFFFFu);
    assert(be32(address + 0x14) == 0);
}

void test_tls() {
    constexpr std::uint32_t slot_count = 256;
    constexpr std::uint32_t out_of_indexes = 0xFFFFFFFFu;
    std::vector<std::uint32_t> allocated;
    allocated.reserve(slot_count);

    // The Xbox process TLS bitmap contains 256 indices.
    PPCContext context{};
    for (std::uint32_t i = 0; i < slot_count; ++i) {
        context = {};
        boot_hle::KeTlsAlloc(context, base());
        assert(context.r3.u32 == i);
        allocated.push_back(context.r3.u32);
    }
    context = {};
    boot_hle::KeTlsAlloc(context, base());
    assert(context.r3.u32 == out_of_indexes);

    const auto slot = slot_count - 1;
    context = {};
    context.r3.u32 = slot;
    context.r4.u32 = 0x12345678u;
    boot_hle::KeTlsSetValue(context, base());
    assert(context.r3.u32 == 1);

    context = {};
    context.r3.u32 = slot;
    boot_hle::KeTlsGetValue(context, base());
    assert(context.r3.u32 == 0x12345678u);

    // Each guest thread has an independent value for the same process-wide slot.
    std::atomic<bool> other_thread_ready{false};
    std::atomic<bool> release_other_thread{false};
    std::atomic<std::uint32_t> other_thread_initial{out_of_indexes};
    std::atomic<std::uint32_t> other_thread_value{0};
    std::atomic<std::uint32_t> other_thread_after_free{out_of_indexes};
    std::thread other_thread([&] {
        PPCContext other{};
        other.r3.u32 = slot;
        boot_hle::KeTlsGetValue(other, base());
        other_thread_initial.store(other.r3.u32, std::memory_order_release);

        other = {};
        other.r3.u32 = slot;
        other.r4.u32 = 0xAABBCCDDu;
        boot_hle::KeTlsSetValue(other, base());
        assert(other.r3.u32 == 1);
        other = {};
        other.r3.u32 = slot;
        boot_hle::KeTlsGetValue(other, base());
        other_thread_value.store(other.r3.u32, std::memory_order_release);

        other_thread_ready.store(true, std::memory_order_release);
        while (!release_other_thread.load(std::memory_order_acquire))
            std::this_thread::yield();

        other = {};
        other.r3.u32 = slot;
        boot_hle::KeTlsGetValue(other, base());
        other_thread_after_free.store(other.r3.u32, std::memory_order_release);
    });

    while (!other_thread_ready.load(std::memory_order_acquire))
        std::this_thread::yield();
    assert(other_thread_initial.load(std::memory_order_acquire) == 0);
    assert(other_thread_value.load(std::memory_order_acquire) == 0xAABBCCDDu);

    context = {};
    context.r3.u32 = slot;
    boot_hle::KeTlsGetValue(context, base());
    assert(context.r3.u32 == 0x12345678u);

    // Free invalidates the index in every host thread; reallocation clears this thread's stale value.
    context = {};
    context.r3.u32 = slot;
    boot_hle::KeTlsFree(context, base());
    assert(context.r3.u32 == 1);
    release_other_thread.store(true, std::memory_order_release);
    other_thread.join();
    assert(other_thread_after_free.load(std::memory_order_acquire) == 0);

    context = {};
    boot_hle::KeTlsAlloc(context, base());
    assert(context.r3.u32 == slot);
    context = {};
    context.r3.u32 = slot;
    boot_hle::KeTlsGetValue(context, base());
    assert(context.r3.u32 == 0);
    context = {};
    context.r3.u32 = slot;
    boot_hle::KeTlsFree(context, base());
    assert(context.r3.u32 == 1);

    // Release the remaining slots and check invalid-index behavior.
    for (std::uint32_t i = 0; i < allocated.size() - 1; ++i) {
        context = {};
        context.r3.u32 = allocated[i];
        boot_hle::KeTlsFree(context, base());
        assert(context.r3.u32 == 1);
    }
    context = {};
    context.r3.u32 = out_of_indexes;
    boot_hle::KeTlsFree(context, base());
    assert(context.r3.u32 == 0);
    context = {};
    context.r3.u32 = slot_count;
    boot_hle::KeTlsGetValue(context, base());
    assert(context.r3.u32 == 0);
    context = {};
    context.r3.u32 = slot_count;
    context.r4.u32 = 1;
    boot_hle::KeTlsSetValue(context, base());
    assert(context.r3.u32 == 0);
}

void test_events() {
    constexpr std::uint32_t output = 0x7000u;
    constexpr std::uint32_t timeout = 0x7200u;
    constexpr std::uint32_t previous_state = 0x7300u;
    constexpr std::uint32_t status_timeout = 0x00000102u;
    constexpr std::uint32_t status_invalid_handle = 0xC0000008u;
    std::memset(base() + timeout, 0, 8); // zero LARGE_INTEGER => poll

    PPCContext context{};

    // EVENT_TYPE 0 is notification/manual-reset; EVENT_TYPE 1 is synchronization/auto-reset.
    context.r3.u32 = output;
    context.r4.u32 = 0; // unnamed
    context.r5.u32 = 0; // notification event
    context.r6.u32 = 1; // initially signaled
    boot_hle::NtCreateEvent(context, base());
    assert(context.r3.u32 == 0);
    const auto manual_handle = be32(output);
    assert(manual_handle != 0);

    for (int i = 0; i < 2; ++i) {
        context = {};
        context.r3.u32 = manual_handle;
        context.r6.u32 = timeout;
        boot_hle::NtWaitForSingleObjectEx(context, base());
        assert(context.r3.u32 == 0); // manual-reset remains signaled
    }

    context = {};
    context.r3.u32 = manual_handle;
    boot_hle::NtClearEvent(context, base());
    assert(context.r3.u32 == 0);

    context = {};
    context.r3.u32 = manual_handle;
    context.r6.u32 = timeout;
    boot_hle::NtWaitForSingleObjectEx(context, base());
    assert(context.r3.u32 == status_timeout);

    context = {};
    context.r3.u32 = manual_handle;
    context.r4.u32 = previous_state;
    boot_hle::NtSetEvent(context, base());
    assert(context.r3.u32 == 0 && be32(previous_state) == 0);

    context = {};
    context.r3.u32 = manual_handle;
    context.r4.u32 = previous_state;
    boot_hle::NtSetEvent(context, base());
    assert(context.r3.u32 == 0 && be32(previous_state) == 1);

    context = {};
    context.r3.u32 = manual_handle;
    context.r6.u32 = timeout;
    boot_hle::NtWaitForSingleObjectEx(context, base());
    assert(context.r3.u32 == 0);

    context = {};
    context.r3.u32 = manual_handle;
    boot_hle::NtClose(context, base());
    assert(context.r3.u32 == 0);

    context = {};
    context.r3.u32 = manual_handle;
    context.r6.u32 = timeout;
    boot_hle::NtWaitForSingleObjectEx(context, base());
    assert(context.r3.u32 == status_invalid_handle);

    // An auto-reset event consumes its initial signal after one successful wait.
    context = {};
    context.r3.u32 = output + 4;
    context.r4.u32 = 0;
    context.r5.u32 = 1;
    context.r6.u32 = 1;
    boot_hle::NtCreateEvent(context, base());
    assert(context.r3.u32 == 0);
    const auto auto_handle = be32(output + 4);
    assert(auto_handle != 0);

    context = {};
    context.r3.u32 = auto_handle;
    context.r6.u32 = timeout;
    boot_hle::NtWaitForSingleObjectEx(context, base());
    assert(context.r3.u32 == 0);

    context = {};
    context.r3.u32 = auto_handle;
    context.r6.u32 = timeout;
    boot_hle::NtWaitForSingleObjectEx(context, base());
    assert(context.r3.u32 == status_timeout);

    // An infinite wait is released by NtSetEvent, including the signal-before-wait race.
    context = {};
    context.r3.u32 = output + 8;
    context.r4.u32 = 0;
    context.r5.u32 = 1;
    context.r6.u32 = 0;
    boot_hle::NtCreateEvent(context, base());
    assert(context.r3.u32 == 0);
    const auto wake_handle = be32(output + 8);

    std::atomic<bool> waiter_started{false};
    std::atomic<std::uint32_t> wait_result{0xFFFFFFFFu};
    std::thread waiter([&] {
        PPCContext wait_context{};
        wait_context.r3.u32 = wake_handle;
        wait_context.r6.u32 = 0; // infinite
        waiter_started.store(true, std::memory_order_release);
        boot_hle::NtWaitForSingleObjectEx(wait_context, base());
        wait_result.store(wait_context.r3.u32, std::memory_order_release);
    });
    while (!waiter_started.load(std::memory_order_acquire)) std::this_thread::yield();

    context = {};
    context.r3.u32 = wake_handle;
    boot_hle::NtSetEvent(context, base());
    assert(context.r3.u32 == 0);
    waiter.join();
    assert(wait_result.load(std::memory_order_acquire) == 0);

    context = {};
    context.r3.u32 = auto_handle;
    boot_hle::NtClose(context, base());
    assert(context.r3.u32 == 0);
    context = {};
    context.r3.u32 = wake_handle;
    boot_hle::NtClose(context, base());
    assert(context.r3.u32 == 0);

    context = {};
    boot_hle::NtCreateEvent(context, base());
    assert(context.r3.u32 == 0xC000000Du); // NULL handle output is invalid
}

int main() {
    PPCContext ctx{};

    // Constant-returning queries.
    boot_hle::KeGetCurrentProcessType(ctx, base());  assert(ctx.r3.u32 == 1);
    boot_hle::XGetLanguage(ctx, base());             assert(ctx.r3.u32 == 1);
    boot_hle::XGetAVPack(ctx, base());               assert(ctx.r3.u32 == 6);
    ctx.r3.u32 = 0xFFFFFFFF; boot_hle::FscSetCacheElementCount(ctx, base()); assert(ctx.r3.u32 == 0);
    ctx.r3.u32 = 0xFFFFFFFF; boot_hle::NetDll_XNetStartup(ctx, base());      assert(ctx.r3.u32 == 0);
    ctx.r3.u32 = 0xFFFFFFFF; boot_hle::NetDll_WSAStartup(ctx, base());       assert(ctx.r3.u32 == 0);

    // RtlInitAnsiString: big-endian {Length, MaximumLength, Buffer}, source not copied.
    poke(0x2000, "Too Human");
    ctx = {}; ctx.r3.u32 = 0x1000; ctx.r4.u32 = 0x2000;
    boot_hle::RtlInitAnsiString(ctx, base());
    assert(be16(0x1000) == 9 && be16(0x1002) == 10 && be32(0x1004) == 0x2000);

    // Null source -> empty string, null buffer.
    ctx = {}; ctx.r3.u32 = 0x1010; ctx.r4.u32 = 0;
    boot_hle::RtlInitAnsiString(ctx, base());
    assert(be16(0x1010) == 0 && be16(0x1012) == 0 && be32(0x1014) == 0);

    // Empty (non-null) string -> Length 0, MaximumLength 1.
    poke(0x2100, "");
    ctx = {}; ctx.r3.u32 = 0x1020; ctx.r4.u32 = 0x2100;
    boot_hle::RtlInitAnsiString(ctx, base());
    assert(be16(0x1020) == 0 && be16(0x1022) == 1 && be32(0x1024) == 0x2100);

    // Multibyte -> Unicode: widened to big-endian UTF-16, byte count reported.
    poke(0x3000, "AB\xE9");     // 0xE9 is Latin-1 e-acute
    ctx = {}; ctx.r3.u32 = 0x4000; ctx.r4.u32 = 64; ctx.r5.u32 = 0x4F00; ctx.r6.u32 = 0x3000; ctx.r7.u32 = 3;
    boot_hle::RtlMultiByteToUnicodeN(ctx, base());
    assert(ctx.r3.u32 == 0 && be32(0x4F00) == 6);
    assert(be16(0x4000) == 'A' && be16(0x4002) == 'B' && be16(0x4004) == 0x00E9);

    // Output buffer too small: truncates to whole WCHARs (max 3 bytes -> 1 char).
    ctx = {}; ctx.r3.u32 = 0x4100; ctx.r4.u32 = 3; ctx.r5.u32 = 0x4F04; ctx.r6.u32 = 0x3000; ctx.r7.u32 = 3;
    boot_hle::RtlMultiByteToUnicodeN(ctx, base());
    assert(be32(0x4F04) == 2);

    // Optional out-size pointer may be null.
    ctx = {}; ctx.r3.u32 = 0x4200; ctx.r4.u32 = 64; ctx.r5.u32 = 0; ctx.r6.u32 = 0x3000; ctx.r7.u32 = 2;
    boot_hle::RtlMultiByteToUnicodeN(ctx, base());
    assert(ctx.r3.u32 == 0 && be16(0x4200) == 'A');

    // Unicode -> multibyte: > U+00FF becomes '?'.
    put16(0x5000, 'h'); put16(0x5002, 0x4E2D); put16(0x5004, 0x00FF);
    ctx = {}; ctx.r3.u32 = 0x6000; ctx.r4.u32 = 64; ctx.r5.u32 = 0x6F00; ctx.r6.u32 = 0x5000; ctx.r7.u32 = 6;
    boot_hle::RtlUnicodeToMultiByteN(ctx, base());
    assert(ctx.r3.u32 == 0 && be32(0x6F00) == 3);
    assert(g_mem[0x6000] == 'h' && g_mem[0x6001] == '?' && g_mem[0x6002] == 0xFF);

    // Odd source byte count drops the half character; output limit respected.
    ctx = {}; ctx.r3.u32 = 0x6100; ctx.r4.u32 = 1; ctx.r5.u32 = 0x6F04; ctx.r6.u32 = 0x5000; ctx.r7.u32 = 5;
    boot_hle::RtlUnicodeToMultiByteN(ctx, base());
    assert(be32(0x6F04) == 1);

    test_critical_sections();
    test_tls();
    test_events();

    return 0;
}
