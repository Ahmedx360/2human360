#include "ppc/boot_hle.hpp"

#include <algorithm>
#include <array>
#include <atomic>
#include <bitset>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <memory>
#include <mutex>
#include <unordered_map>

namespace toohuman::runtime {
namespace {

constexpr std::uint32_t kStatusSuccess = 0;

inline std::uint8_t* at(std::uint8_t* base, std::uint32_t guest) { return base + guest; }

inline void put_be16(std::uint8_t* p, std::uint16_t v) {
    p[0] = static_cast<std::uint8_t>(v >> 8);
    p[1] = static_cast<std::uint8_t>(v);
}
inline void put_be32(std::uint8_t* p, std::uint32_t v) {
    p[0] = static_cast<std::uint8_t>(v >> 24);
    p[1] = static_cast<std::uint8_t>(v >> 16);
    p[2] = static_cast<std::uint8_t>(v >> 8);
    p[3] = static_cast<std::uint8_t>(v);
}
inline std::uint16_t get_be16(const std::uint8_t* p) {
    return static_cast<std::uint16_t>((p[0] << 8) | p[1]);
}

// Bounded guest C-string length (stops at NUL or `limit`).
std::uint32_t guest_strnlen(const std::uint8_t* s, std::uint32_t limit) {
    std::uint32_t n = 0;
    while (n < limit && s[n] != 0) ++n;
    return n;
}

std::uint32_t get_be32(const std::uint8_t* p) {
    return (std::uint32_t(p[0]) << 24) | (std::uint32_t(p[1]) << 16) |
           (std::uint32_t(p[2]) << 8) | std::uint32_t(p[3]);
}

constexpr std::uint32_t kTlsSlotCount = 256;
constexpr std::uint32_t kTlsOutOfIndexes = 0xFFFFFFFFu;
struct GuestTlsValue { std::uint32_t value{}; std::uint32_t generation{}; };
std::mutex g_tls_mutex;
std::bitset<kTlsSlotCount> g_tls_allocated;
std::array<std::uint32_t, kTlsSlotCount> g_tls_generation{};
thread_local std::array<GuestTlsValue, kTlsSlotCount> g_tls_values{};

// TLS values are host-thread-local, matching the one-host-thread-per-guest-thread
// execution model. Generation counters prevent a freed slot's stale value from
// leaking into a later allocation on another host thread.
std::uint32_t tls_generation(std::uint32_t slot) {
    std::lock_guard lock(g_tls_mutex);
    return g_tls_generation[slot];
}

struct CriticalSectionKey {
    std::uintptr_t memory{};
    std::uint32_t address{};
    bool operator==(const CriticalSectionKey&) const = default;
};
struct CriticalSectionKeyHash {
    std::size_t operator()(const CriticalSectionKey& key) const noexcept {
        const auto a = std::hash<std::uintptr_t>{}(key.memory);
        const auto b = std::hash<std::uint32_t>{}(key.address);
        return a ^ (b + 0x9E3779B9u + (a << 6) + (a >> 2));
    }
};
struct CriticalSectionState { std::recursive_mutex mutex; };
std::mutex g_critical_sections_mutex;
std::unordered_map<CriticalSectionKey, std::shared_ptr<CriticalSectionState>,
                   CriticalSectionKeyHash> g_critical_sections;
std::uint32_t current_host_thread_token() {
    static std::atomic<std::uint32_t> next{1};
    thread_local const std::uint32_t token = next.fetch_add(1, std::memory_order_relaxed);
    return token;
}
std::shared_ptr<CriticalSectionState> get_critical_section(
    std::uint8_t* base, std::uint32_t address, bool create) {
    if (address == 0) return {};
    const CriticalSectionKey key{reinterpret_cast<std::uintptr_t>(base), address};
    std::lock_guard lock(g_critical_sections_mutex);
    auto it = g_critical_sections.find(key);
    if (it != g_critical_sections.end()) return it->second;
    if (!create) return {};
    auto state = std::make_shared<CriticalSectionState>();
    g_critical_sections.emplace(key, state);
    return state;
}
void initialize_critical_section(std::uint8_t* base, std::uint32_t address,
                                 std::uint32_t spin_count) {
    if (address == 0) return;
    auto* cs = at(base, address);
    std::memset(cs, 0, 0x1C);
    cs[0] = 1;  // EventSynchronizationObject.
    const auto spin_units = std::min<std::uint64_t>(
        255, (static_cast<std::uint64_t>(spin_count) + 255) >> 8);
    cs[1] = static_cast<std::uint8_t>(spin_units);
    put_be32(cs + 0x10, 0xFFFFFFFFu);  // unlocked lock_count
}
void mark_critical_section_acquired(std::uint8_t* base, std::uint32_t address) {
    auto* cs = at(base, address);
    const auto token = current_host_thread_token();
    if (get_be32(cs + 0x18) == token) {
        put_be32(cs + 0x10, get_be32(cs + 0x10) + 1);
        put_be32(cs + 0x14, get_be32(cs + 0x14) + 1);
    } else {
        put_be32(cs + 0x10, 0);
        put_be32(cs + 0x14, 1);
        put_be32(cs + 0x18, token);
    }
}
} // namespace

namespace boot_hle {

// xboxkrnl #0x66. The title thread is a user process: X_PROCTYPE_USER == 1 (0 idle, 2 system).
PPC_FUNC(KeGetCurrentProcessType) {
    (void)base;
    ctx.r3.u32 = 1;
}

// xam #0x3CD. Returns the XC language id; 1 == XC_LANGUAGE_ENGLISH.
PPC_FUNC(XGetLanguage) {
    (void)base;
    ctx.r3.u32 = 1;
}

// xam #0x3CB. Returns the AV pack; 6 == HDMI, the best-supported output for a PC host.
PPC_FUNC(XGetAVPack) {
    (void)base;
    ctx.r3.u32 = 6;
}

// xboxkrnl #0x12C. RtlInitAnsiString(ANSI_STRING* dest /*r3*/, const char* src /*r4*/).
// ANSI_STRING (big-endian): u16 Length, u16 MaximumLength, u32 Buffer. The source is NOT copied.
PPC_FUNC(RtlInitAnsiString) {
    auto* dest = at(base, ctx.r3.u32);
    const auto src = ctx.r4.u32;
    std::uint16_t length = 0, maximum = 0;
    if (src != 0) {
        const auto n = guest_strnlen(at(base, src), 0xFFFEu);
        length = static_cast<std::uint16_t>(n);
        maximum = static_cast<std::uint16_t>(n + 1);   // includes the terminator; n <= 0xFFFE
    }
    put_be16(dest + 0, length);
    put_be16(dest + 2, maximum);
    put_be32(dest + 4, src);
}

// xboxkrnl #0x133. RtlMultiByteToUnicodeN(WCHAR* out /*r3*/, ULONG outMax /*r4*/, ULONG* outBytes /*r5, opt*/,
//                                         const char* in /*r6*/, ULONG inBytes /*r7*/) -> NTSTATUS.
// Single-byte (Latin-1) widening; guest WCHARs are big-endian UTF-16.
PPC_FUNC(RtlMultiByteToUnicodeN) {
    auto* out = at(base, ctx.r3.u32);
    const auto out_max = ctx.r4.u32;
    const auto* in = at(base, ctx.r6.u32);
    const auto n = std::min<std::uint32_t>(ctx.r7.u32, out_max / 2);
    for (std::uint32_t i = 0; i < n; ++i) put_be16(out + i * 2, in[i]);
    if (ctx.r5.u32 != 0) put_be32(at(base, ctx.r5.u32), n * 2);
    ctx.r3.u32 = kStatusSuccess;
}

// xboxkrnl #0x143. RtlUnicodeToMultiByteN(char* out /*r3*/, ULONG outMax /*r4*/, ULONG* outBytes /*r5, opt*/,
//                                         const WCHAR* in /*r6*/, ULONG inBytes /*r7*/) -> NTSTATUS.
// Characters above U+00FF become '?'.
PPC_FUNC(RtlUnicodeToMultiByteN) {
    auto* out = at(base, ctx.r3.u32);
    const auto out_max = ctx.r4.u32;
    const auto* in = at(base, ctx.r6.u32);
    const auto n = std::min<std::uint32_t>(ctx.r7.u32 / 2, out_max);
    for (std::uint32_t i = 0; i < n; ++i) {
        const auto ch = get_be16(in + i * 2);
        out[i] = ch <= 0xFF ? static_cast<std::uint8_t>(ch) : static_cast<std::uint8_t>('?');
    }
    if (ctx.r5.u32 != 0) put_be32(at(base, ctx.r5.u32), n);
    ctx.r3.u32 = kStatusSuccess;
}

// xboxkrnl #0x12E / #0x12F. Xbox RTL critical sections are 28 bytes:
// DISPATCH_HEADER(0x10), LockCount(0x10), RecursionCount(0x14), OwningThread(0x18).
// A recursive host mutex supplies blocking/ownership while these guest fields retain
// the observable Xbox layout. Waiting-thread counts are not exposed in LockCount.
PPC_FUNC(RtlInitializeCriticalSection) {
    initialize_critical_section(base, ctx.r3.u32, 0);
}
PPC_FUNC(RtlInitializeCriticalSectionAndSpinCount) {
    initialize_critical_section(base, ctx.r3.u32, ctx.r4.u32);
    ctx.r3.u32 = kStatusSuccess;
}
PPC_FUNC(RtlEnterCriticalSection) {
    const auto address = ctx.r3.u32;
    auto state = get_critical_section(base, address, true);
    if (!state) return;
    state->mutex.lock();
    mark_critical_section_acquired(base, address);
}
PPC_FUNC(RtlTryEnterCriticalSection) {
    const auto address = ctx.r3.u32;
    auto state = get_critical_section(base, address, true);
    if (!state || !state->mutex.try_lock()) {
        ctx.r3.u32 = 0;
        return;
    }
    mark_critical_section_acquired(base, address);
    ctx.r3.u32 = 1;
}
PPC_FUNC(RtlLeaveCriticalSection) {
    const auto address = ctx.r3.u32;
    auto state = get_critical_section(base, address, false);
    if (!state) return;
    auto* cs = at(base, address);
    if (get_be32(cs + 0x18) != current_host_thread_token()) return;
    const auto recursion = get_be32(cs + 0x14);
    if (recursion == 0) return;
    if (recursion > 1) {
        put_be32(cs + 0x14, recursion - 1);
        put_be32(cs + 0x10, get_be32(cs + 0x10) - 1);
    } else {
        put_be32(cs + 0x14, 0);
        put_be32(cs + 0x10, 0xFFFFFFFFu);
        put_be32(cs + 0x18, 0);
    }
    state->mutex.unlock();
}

// xboxkrnl #0x152..0x155. Kernel TLS indices are process-wide allocations;
// each host thread receives an independent value for each slot.
PPC_FUNC(KeTlsAlloc) {
    std::lock_guard lock(g_tls_mutex);
    for (std::uint32_t slot = 0; slot < kTlsSlotCount; ++slot) {
        if (!g_tls_allocated.test(slot)) {
            g_tls_allocated.set(slot);
            g_tls_values[slot] = {0, g_tls_generation[slot]};
            ctx.r3.u32 = slot;
            return;
        }
    }
    ctx.r3.u32 = kTlsOutOfIndexes;
}
PPC_FUNC(KeTlsFree) {
    const auto slot = ctx.r3.u32;
    if (slot == kTlsOutOfIndexes || slot >= kTlsSlotCount) {
        ctx.r3.u32 = 0;
        return;
    }
    {
        std::lock_guard lock(g_tls_mutex);
        g_tls_allocated.reset(slot);
        ++g_tls_generation[slot];
    }
    ctx.r3.u32 = 1;
}
PPC_FUNC(KeTlsGetValue) {
    const auto slot = ctx.r3.u32;
    if (slot >= kTlsSlotCount) {
        ctx.r3.u32 = 0;
        return;
    }
    const auto generation = tls_generation(slot);
    ctx.r3.u32 = g_tls_values[slot].generation == generation
                     ? g_tls_values[slot].value : 0;
}
PPC_FUNC(KeTlsSetValue) {
    const auto slot = ctx.r3.u32;
    if (slot >= kTlsSlotCount) {
        ctx.r3.u32 = 0;
        return;
    }
    g_tls_values[slot] = {ctx.r4.u32, tls_generation(slot)};
    ctx.r3.u32 = 1;
}

// xboxkrnl #0x21. Cache sizing hint for the file-system cache; nothing to configure on a host FS.
PPC_FUNC(FscSetCacheElementCount) {
    (void)base;
    ctx.r3.u32 = kStatusSuccess;
}

// xboxkrnl #0x03. DbgPrint(const char* fmt, ...). The varargs are not formatted; the raw format string is logged.
PPC_FUNC(DbgPrint) {
    if (ctx.r3.u32 != 0) {
        const auto* s = at(base, ctx.r3.u32);
        const auto n = guest_strnlen(s, 512);
        std::fprintf(stderr, "[guest DbgPrint] %.*s", static_cast<int>(n), reinterpret_cast<const char*>(s));
        if (n == 0 || s[n - 1] != '\n') std::fputc('\n', stderr);
    }
    ctx.r3.u32 = kStatusSuccess;
}

// xboxkrnl #0x52 / #0x53. A guest bugcheck is unrecoverable; report everything and abort.
PPC_FUNC(KeBugCheck) {
    (void)base;
    std::fprintf(stderr, "[TooHuman] KeBugCheck code=0x%08X LR=0x%08X\n", ctx.r3.u32, static_cast<std::uint32_t>(ctx.lr));
    std::fflush(stderr);
    std::abort();
}
PPC_FUNC(KeBugCheckEx) {
    (void)base;
    std::fprintf(stderr, "[TooHuman] KeBugCheckEx code=0x%08X args=0x%08X 0x%08X 0x%08X 0x%08X LR=0x%08X\n",
                 ctx.r3.u32, ctx.r4.u32, ctx.r5.u32, ctx.r6.u32, ctx.r7.u32, static_cast<std::uint32_t>(ctx.lr));
    std::fflush(stderr);
    std::abort();
}

// xboxkrnl #0x28. The title asked to return to the dashboard/firmware: exit the host process cleanly.
PPC_FUNC(HalReturnToFirmware) {
    (void)base;
    std::fprintf(stderr, "[TooHuman] HalReturnToFirmware(%u): guest requested exit\n", ctx.r3.u32);
    std::fflush(stderr);
    std::exit(0);
}

// xam #0x33 / #0x01. Networking is not implemented: startup succeeds so the title proceeds, and any actual
// socket import (NetDll_socket, ...) still fails fast with its name. Revisit when the network layer exists.
PPC_FUNC(NetDll_XNetStartup) {
    (void)base;
    ctx.r3.u32 = 0;
}
PPC_FUNC(NetDll_WSAStartup) {
    (void)base;
    ctx.r3.u32 = 0;
}

} // namespace boot_hle

} // namespace toohuman::runtime
