#include "ppc/boot_hle.hpp"
#include "ppc/import_registry.hpp"
#include "ppc/guest_thread_execution.hpp"
#include "kernel/guest_kernel_objects.hpp"
#include "memory/guest_address_space.hpp"

#include <algorithm>
#include <array>
#include <atomic>
#include <bitset>
#include <chrono>
#include <condition_variable>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <limits>
#include <optional>
#include <cstring>
#include <functional>
#include <memory>
#include <mutex>
#include <unordered_map>
#include <thread>
#include <utility>

namespace toohuman::runtime {

namespace {

constexpr std::uint32_t kStatusSuccess = 0;
constexpr std::uint32_t kStatusUnsuccessful = 0xC0000001u;

inline std::uint8_t* at(std::uint8_t* base, std::uint32_t guest) { return base + guest; }

inline bool guest_range_valid(
    std::uint8_t* base, std::uint32_t guest, std::size_t size,
    GuestMemoryAccess access) noexcept {
    return GuestAddressSpace::is_accessible_range(base, guest, size, access);
}

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
inline void put_be64(std::uint8_t* p, std::uint64_t v) {
    put_be32(p, static_cast<std::uint32_t>(v >> 32));
    put_be32(p + 4, static_cast<std::uint32_t>(v));
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

std::atomic<std::uint32_t> g_executable_module_handle{0};

bool guest_ascii_equals_ignore_case(const std::uint8_t* base,
                                    std::uint32_t address,
                                    const char* expected) {
    std::size_t index = 0;
    while (expected[index] != '\0') {
        auto value = base[address + static_cast<std::uint32_t>(index)];
        if (value >= 'A' && value <= 'Z') value = static_cast<std::uint8_t>(value + ('a' - 'A'));
        auto wanted = static_cast<std::uint8_t>(expected[index]);
        if (wanted >= 'A' && wanted <= 'Z') wanted = static_cast<std::uint8_t>(wanted + ('a' - 'A'));
        if (value != wanted) return false;
        ++index;
        if (index > 260) return false;
    }
    return base[address + static_cast<std::uint32_t>(index)] == 0;
}
std::uint64_t get_be64(const std::uint8_t* p) {
    return (std::uint64_t(get_be32(p)) << 32) | get_be32(p + 4);
}

std::uint64_t current_guest_filetime_100ns() {
    constexpr std::uint64_t kWindowsEpochOffset100ns = 116444736000000000ull;
    const auto unix_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(
        std::chrono::system_clock::now().time_since_epoch()).count();
    return static_cast<std::uint64_t>(unix_ns / 100) + kWindowsEpochOffset100ns;
}

constexpr std::uint32_t kStatusInvalidHandle = 0xC0000008u;
constexpr std::uint32_t kStatusInvalidParameter = 0xC000000Du;
constexpr std::uint32_t kStatusTimeout = 0x00000102u;

std::optional<std::chrono::milliseconds> decode_guest_timeout(
    std::uint8_t* base, std::uint32_t timeout_address) {
    if (timeout_address == 0) return std::nullopt; // Infinite wait.
    const auto ticks = get_be64(at(base, timeout_address));
    if (ticks == 0) return std::chrono::milliseconds(0);

    std::uint64_t milliseconds = 0;
    if ((ticks & (std::uint64_t{1} << 63)) != 0) {
        // Negative LARGE_INTEGER values are relative 100 ns intervals.
        const auto magnitude = (~ticks) + 1;
        milliseconds = magnitude / 10000;
    } else {
        // Positive values are absolute Windows FILETIME timestamps.
        constexpr std::uint64_t kWindowsEpochOffset100ns = 116444736000000000ull;
        const auto now_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(
            std::chrono::system_clock::now().time_since_epoch()).count();
        const auto now_filetime = static_cast<std::uint64_t>(now_ns / 100) +
                                  kWindowsEpochOffset100ns;
        milliseconds = ticks > now_filetime ? (ticks - now_filetime) / 10000 : 0;
    }
    const auto max_ms = static_cast<std::uint64_t>(
        std::numeric_limits<std::chrono::milliseconds::rep>::max());
    return std::chrono::milliseconds(static_cast<std::chrono::milliseconds::rep>(
        std::min(milliseconds, max_ms)));
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
std::uint32_t current_guest_thread_token(const PPCContext& context,
                                         std::uint8_t* base) {
    if (context.r13.u32 != 0) {
        const auto pcr = context.r13.u32;
        const auto guest_thread = get_be32(at(base, pcr + 0x100));
        if (guest_thread != 0) return guest_thread;
    }
    // Unit tests and diagnostic calls without an initialized PCR still need
    // stable recursive ownership for the calling host thread.
    return current_host_thread_token();
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
void mark_critical_section_acquired(std::uint8_t* base, std::uint32_t address,
                                    const PPCContext& context) {
    auto* cs = at(base, address);
    const auto token = current_guest_thread_token(context, base);
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

void set_executable_module_handle(std::uint32_t handle) noexcept {
    g_executable_module_handle.store(handle, std::memory_order_release);
}

namespace boot_hle {

// xboxkrnl #0x66. The title thread is a user process: X_PROCTYPE_USER == 1 (0 idle, 2 system).
PPC_FUNC(KeGetCurrentProcessType) {
    (void)base;
    ctx.r3.u32 = 1;
}

// xboxkrnl #0x83. Xenia configures the Xenon timebase to 50 MHz.
PPC_FUNC(KeQueryPerformanceFrequency) {
    (void)base;
    ctx.r3.u32 = 50000000u;
}

// xboxkrnl #0x84. Writes a guest-endian FILETIME (100 ns since 1601).
PPC_FUNC(KeQuerySystemTime) {
    if (ctx.r3.u32 != 0)
        put_be64(at(base, ctx.r3.u32), current_guest_filetime_100ns());
}

// xboxkrnl #0x5A. Uses a signed LARGE_INTEGER interval in 100 ns units.
// Negative values are relative durations; positive values are absolute FILETIME deadlines.
// APC delivery is not emulated yet; completed waits return STATUS_SUCCESS.
PPC_FUNC(KeDelayExecutionThread) {
    const auto interval_address = ctx.r5.u32;
    if (interval_address == 0) {
        ctx.r3.u32 = kStatusInvalidParameter;
        return;
    }
    const auto raw_interval = get_be64(at(base, interval_address));
    std::uint64_t delay_ticks = 0;
    if ((raw_interval & (std::uint64_t{1} << 63)) != 0) {
        delay_ticks = (~raw_interval) + 1u;
    } else if (raw_interval != 0) {
        const auto now = current_guest_filetime_100ns();
        delay_ticks = raw_interval > now ? raw_interval - now : 0;
    }
    using Nanoseconds = std::chrono::nanoseconds;
    using Rep = Nanoseconds::rep;
    const auto maximum_ticks = static_cast<std::uint64_t>(
        std::numeric_limits<Rep>::max() / 100);
    delay_ticks = std::min(delay_ticks, maximum_ticks);
    if (delay_ticks == 0) {
        std::this_thread::yield();
    } else {
        std::this_thread::sleep_for(
            Nanoseconds(static_cast<Rep>(delay_ticks * 100u)));
    }
    ctx.r3.u32 = kStatusSuccess;
}

// xboxkrnl #0x140. Converts FILETIME to the big-endian 16-byte TIME_FIELDS layout.
PPC_FUNC(RtlTimeToTimeFields) {
    const auto time_pointer = ctx.r3.u32;
    const auto fields_pointer = ctx.r4.u32;
    if (time_pointer == 0 || fields_pointer == 0) return;
    constexpr std::uint64_t kWindowsEpochOffset100ns = 116444736000000000ull;
    const auto filetime = get_be64(at(base, time_pointer));
    std::int64_t unix_milliseconds = 0;
    if (filetime >= kWindowsEpochOffset100ns) {
        unix_milliseconds = static_cast<std::int64_t>(
            (filetime - kWindowsEpochOffset100ns) / 10000u);
    } else {
        const auto before_epoch = kWindowsEpochOffset100ns - filetime;
        unix_milliseconds = -static_cast<std::int64_t>((before_epoch + 9999u) / 10000u);
    }
    using Milliseconds = std::chrono::milliseconds;
    const std::chrono::sys_time<Milliseconds> instant{Milliseconds(unix_milliseconds)};
    const auto day_point = std::chrono::floor<std::chrono::days>(instant);
    const std::chrono::year_month_day date{day_point};
    if (!date.ok()) {
        std::memset(at(base, fields_pointer), 0, 16);
        return;
    }
    const std::chrono::hh_mm_ss time_of_day{instant - day_point};
    auto* fields = at(base, fields_pointer);
    put_be16(fields + 0, static_cast<std::uint16_t>(static_cast<int>(date.year())));
    put_be16(fields + 2, static_cast<std::uint16_t>(static_cast<unsigned>(date.month())));
    put_be16(fields + 4, static_cast<std::uint16_t>(static_cast<unsigned>(date.day())));
    put_be16(fields + 6, static_cast<std::uint16_t>(time_of_day.hours().count()));
    put_be16(fields + 8, static_cast<std::uint16_t>(time_of_day.minutes().count()));
    put_be16(fields + 10, static_cast<std::uint16_t>(time_of_day.seconds().count()));
    put_be16(fields + 12, static_cast<std::uint16_t>(time_of_day.subseconds().count()));
    put_be16(fields + 14, static_cast<std::uint16_t>(std::chrono::weekday{day_point}.c_encoding()));
}

// xboxkrnl #0x13F. Returns BOOLEAN and preserves output on invalid fields.
PPC_FUNC(RtlTimeFieldsToTime) {
    const auto fields_pointer = ctx.r3.u32;
    const auto time_pointer = ctx.r4.u32;
    if (fields_pointer == 0 || time_pointer == 0) {
        ctx.r3.u32 = 0;
        return;
    }
    const auto* fields = at(base, fields_pointer);
    const auto year_value = get_be16(fields + 0);
    const auto month_value = get_be16(fields + 2);
    const auto day_value = get_be16(fields + 4);
    const auto hour = get_be16(fields + 6);
    const auto minute = get_be16(fields + 8);
    const auto second = get_be16(fields + 10);
    const auto millisecond = get_be16(fields + 12);
    if (year_value < 1601u || month_value < 1u || month_value > 12u ||
        day_value < 1u || day_value > 31u || hour > 23u || minute > 59u ||
        second > 59u || millisecond > 999u) {
        ctx.r3.u32 = 0;
        return;
    }
    const std::chrono::year_month_day date{
        std::chrono::year{static_cast<int>(year_value)},
        std::chrono::month{month_value}, std::chrono::day{day_value}};
    if (!date.ok()) {
        ctx.r3.u32 = 0;
        return;
    }
    const auto days_since_unix_epoch = std::chrono::sys_days{date}.time_since_epoch().count();
    const auto seconds_since_unix_epoch =
        static_cast<std::int64_t>(days_since_unix_epoch) * 86400 +
        static_cast<std::int64_t>(hour) * 3600 +
        static_cast<std::int64_t>(minute) * 60 + second;
    constexpr std::int64_t kWindowsEpochOffsetSeconds = 11644473600ll;
    const auto seconds_since_windows_epoch =
        seconds_since_unix_epoch + kWindowsEpochOffsetSeconds;
    constexpr std::uint64_t kTicksPerSecond = 10000000ull;
    const auto milliseconds_ticks = static_cast<std::uint64_t>(millisecond) * 10000u;
    if (seconds_since_windows_epoch < 0 ||
        static_cast<std::uint64_t>(seconds_since_windows_epoch) >
            (std::numeric_limits<std::uint64_t>::max() - milliseconds_ticks) / kTicksPerSecond) {
        ctx.r3.u32 = 0;
        return;
    }
    const auto filetime = static_cast<std::uint64_t>(seconds_since_windows_epoch) *
                          kTicksPerSecond + milliseconds_ticks;
    put_be64(at(base, time_pointer), filetime);
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
// xboxkrnl #0x10. Covers the common stable XConfig settings reached during
// title startup; unsupported categories/settings fail with parameter-specific NTSTATUS.
PPC_FUNC(ExGetXConfigSetting) {
    const auto category = static_cast<std::uint16_t>(ctx.r3.u32);
    const auto setting = static_cast<std::uint16_t>(ctx.r4.u32);
    const auto buffer = ctx.r5.u32;
    const auto buffer_size = static_cast<std::uint16_t>(ctx.r6.u32);
    const auto required_size = ctx.r7.u32;

    std::uint8_t value[4]{};
    std::uint16_t value_size = 0;
    switch (category) {
    case 0x0002: // XCONFIG_SECURED_CATEGORY
        if (setting == 0x0002) { // XCONFIG_SECURED_AV_REGION
            value_size = 4;
            put_be32(value, 0x00001000u);
        } else {
            ctx.r3.u32 = 0xC00000F0u; // STATUS_INVALID_PARAMETER_2
            if (required_size != 0) put_be16(at(base, required_size), 0);
            return;
        }
        break;
    case 0x0003: // XCONFIG_USER_CATEGORY
        switch (setting) {
        case 0x0001: case 0x0002: case 0x0003: case 0x0004:
        case 0x0005: case 0x0006: case 0x0007: // Time zone values.
        case 0x000C: // Retail flags.
            value_size = 4;
            put_be32(value, 0);
            break;
        case 0x0009: // User language (English).
            value_size = 4;
            put_be32(value, 1);
            break;
        case 0x000A: // Video flags.
            value_size = 4;
            put_be32(value, 0x00040000u);
            break;
        case 0x000E: // User country: Xenia's default US configuration.
            value_size = 1;
            value[0] = 103;
            break;
        default:
            ctx.r3.u32 = 0xC00000F0u; // STATUS_INVALID_PARAMETER_2
            if (required_size != 0) put_be16(at(base, required_size), 0);
            return;
        }
        break;
    default:
        ctx.r3.u32 = 0xC00000EFu; // STATUS_INVALID_PARAMETER_1
        if (required_size != 0) put_be16(at(base, required_size), 0);
        return;
    }

    if (buffer != 0) {
        if (buffer_size < value_size) {
            ctx.r3.u32 = 0xC0000023u; // STATUS_BUFFER_TOO_SMALL
            if (required_size != 0) put_be16(at(base, required_size), 0);
            return;
        }
        std::memcpy(at(base, buffer), value, value_size);
    } else if (buffer_size != 0) {
        ctx.r3.u32 = 0xC00000F1u; // STATUS_INVALID_PARAMETER_3
        if (required_size != 0) put_be16(at(base, required_size), 0);
        return;
    }

    if (required_size != 0) put_be16(at(base, required_size), value_size);
    ctx.r3.u32 = kStatusSuccess;
}

// xam.xex #0x282. Returning zero is Xenia's compatibility behavior.
PPC_FUNC(XamGetSystemVersion) {
    ctx.r3.u32 = 0;
}

// xam.xex #0x2DC. The caller passes ten arguments: args 9 and 10 are spilled
// at caller SP+0x54 and SP+0x5C. Those exact stack slots are populated by the
// generated caller (sub_82A467F0) immediately before its XAM import call. Complete the overlapped result immediately,
// auto-selecting the focused button in this headless runtime.
PPC_FUNC(XamShowMessageBoxUIEx) {
    constexpr std::uint32_t kErrorIoPending = 997u;
    const auto result_pointer = get_be32(at(base, ctx.r1.u32 + 0x54));
    const auto overlapped = get_be32(at(base, ctx.r1.u32 + 0x5C));

    if (result_pointer != 0) put_be32(at(base, result_pointer), ctx.r8.u32);
    if (overlapped == 0) {
        ctx.r3.u32 = kStatusSuccess;
        return;
    }

    put_be32(at(base, overlapped + 0x00), kStatusSuccess);
    put_be32(at(base, overlapped + 0x04), 0);
    put_be32(at(base, overlapped + 0x18), 0);
    const auto event_handle = get_be32(at(base, overlapped + 0x0C));
    if (event_handle == 0) {
        ctx.r3.u32 = kStatusSuccess;
        return;
    }

    auto object = process_kernel_objects().lookup(event_handle);
    auto event = std::dynamic_pointer_cast<GuestEventObject>(std::move(object));
    if (!event) {
        put_be32(at(base, overlapped + 0x00), kStatusInvalidHandle);
        put_be32(at(base, overlapped + 0x18), kStatusInvalidHandle);
        ctx.r3.u32 = kStatusInvalidHandle;
        return;
    }
    event->set();
    ctx.r3.u32 = kErrorIoPending;
}

PPC_FUNC(XexGetModuleHandle) {
    constexpr std::uint32_t kErrorNotFound = 0x00000490u;
    constexpr std::uint32_t kErrorInvalidParameter = 87u;
    const auto name_address = ctx.r3.u32;
    const auto output_address = ctx.r4.u32;
    if (output_address == 0) {
        ctx.r3.u32 = kErrorInvalidParameter;
        return;
    }

    const auto module_handle = g_executable_module_handle.load(std::memory_order_acquire);
    const bool is_executable = name_address == 0 ||
        guest_ascii_equals_ignore_case(base, name_address, "default.xex");
    if (module_handle == 0 || !is_executable) {
        put_be32(at(base, output_address), 0);
        ctx.r3.u32 = kErrorNotFound;
        return;
    }

    put_be32(at(base, output_address), module_handle);
    ctx.r3.u32 = kStatusSuccess;
}

PPC_FUNC(RtlImageXexHeaderField) {
    const auto header = ctx.r3.u32;
    const auto requested_key = ctx.r4.u32;
    // The XEX header is guest-provided data. Validate the fixed header before
    // reading SizeOfHeaders/Count, then validate the complete optional-header
    // table before walking its entries.
    if (header == 0 ||
        !guest_range_valid(base, header, 0x18u, GuestMemoryAccess::Read)) {
        ctx.r3.u32 = 0;
        return;
    }

    const auto header_size = get_be32(at(base, header + 8));
    const auto optional_count = get_be32(at(base, header + 0x14));
    if (header_size < 0x18u || header_size > 0x100000u ||
        optional_count > (header_size - 0x18u) / 8u ||
        !guest_range_valid(base, header, header_size, GuestMemoryAccess::Read)) {
        ctx.r3.u32 = 0;
        return;
    }

    ctx.r3.u32 = 0;
    for (std::uint32_t i = 0; i < optional_count; ++i) {
        const auto entry = header + 0x18u + i * 8u;
        if (get_be32(at(base, entry)) != requested_key) continue;

        const auto value = get_be32(at(base, entry + 4));
        switch (requested_key & 0xFFu) {
        case 0x00:
            ctx.r3.u32 = value; // Value is stored inline in the XEX header.
            break;
        case 0x01:
            ctx.r3.u32 = entry + 4; // Pointer to the inline value field.
            break;
        default:
            ctx.r3.u32 = value < header_size ? header + value : 0;
            break;
        }
        return;
    }
}

// xboxkrnl #0x196. XexGetModuleSection(HMODULE, const char* name, PVOID* data, ULONG* size) -> NTSTATUS.
// Looks the named resource up in the XEX resource-info header (key 0x000002FF).
PPC_FUNC(XexGetModuleSection) {
    constexpr std::uint32_t kNotFound = 0xC0000225u;
    constexpr std::uint32_t kAccessViolation = 0xC0000005u;
    constexpr std::uint32_t kInvalidParameter = 0xC000000Du;

    const auto module_handle = g_executable_module_handle.load(std::memory_order_acquire);
    const auto xex_header_field = static_cast<std::uint64_t>(module_handle) + 0x58u;
    if (module_handle == 0 || xex_header_field + 4u > GuestAddressSpace::kSize ||
        !guest_range_valid(base, static_cast<std::uint32_t>(xex_header_field),
                           4u, GuestMemoryAccess::Read)) {
        ctx.r3.u32 = kNotFound;
        return;
    }
    const auto xex_header = get_be32(at(base, static_cast<std::uint32_t>(xex_header_field)));
    if (xex_header == 0 ||
        !guest_range_valid(base, xex_header, 0x18u, GuestMemoryAccess::Read)) {
        ctx.r3.u32 = kNotFound;
        return;
    }
    const auto header_size = get_be32(at(base, xex_header + 8u));
    const auto count = get_be32(at(base, xex_header + 0x14u));
    if (header_size < 0x18u || header_size > 0x100000u ||
        static_cast<std::uint64_t>(xex_header) + header_size >
            GuestAddressSpace::kSize ||
        !guest_range_valid(base, xex_header, header_size, GuestMemoryAccess::Read) ||
        count > (header_size - 0x18u) / 8u) {
        ctx.r3.u32 = kNotFound;
        return;
    }

    const auto name_address = ctx.r4.u32;
    const auto data_out = ctx.r5.u32;
    const auto size_out = ctx.r6.u32;
    if (name_address == 0 || data_out == 0 || size_out == 0) {
        ctx.r3.u32 = kInvalidParameter;
        return;
    }
    if (!guest_range_valid(base, name_address, 8u, GuestMemoryAccess::Read) ||
        !guest_range_valid(base, data_out, 4u, GuestMemoryAccess::Write) ||
        !guest_range_valid(base, size_out, 4u, GuestMemoryAccess::Write)) {
        ctx.r3.u32 = kAccessViolation;
        return;
    }

    const auto* name = at(base, name_address);
    if (std::getenv("TH_TRACE_IMPORTS"))
        std::fprintf(stderr, "    XexGetModuleSection('%.8s')\n",
                     reinterpret_cast<const char*>(name));

    for (std::uint32_t i = 0; i < count; ++i) {
        const auto entry64 = static_cast<std::uint64_t>(xex_header) +
                             0x18u + static_cast<std::uint64_t>(i) * 8u;
        if (entry64 + 8u > static_cast<std::uint64_t>(xex_header) + header_size) {
            ctx.r3.u32 = kNotFound;
            return;
        }
        const auto entry = static_cast<std::uint32_t>(entry64);
        if (get_be32(at(base, entry)) != 0x000002FFu) continue;

        const auto offset = get_be32(at(base, entry + 4u));
        if (offset > header_size || header_size - offset < 4u) {
            ctx.r3.u32 = kNotFound;
            return;
        }
        const auto section_bytes = get_be32(at(base, xex_header + offset));
        if (section_bytes < 4u || section_bytes > header_size - offset) {
            ctx.r3.u32 = kNotFound;
            return;
        }
        const auto records = (section_bytes - 4u) / 16u;
        if (4u + records * 16u > section_bytes) {
            ctx.r3.u32 = kNotFound;
            return;
        }

        for (std::uint32_t record_index = 0; record_index < records; ++record_index) {
            const auto record64 = static_cast<std::uint64_t>(xex_header) + offset +
                                  4u + static_cast<std::uint64_t>(record_index) * 16u;
            if (record64 + 16u >
                static_cast<std::uint64_t>(xex_header) + offset + section_bytes) {
                ctx.r3.u32 = kNotFound;
                return;
            }
            const auto record = static_cast<std::uint32_t>(record64);
            if (std::memcmp(at(base, record), name, 8u) != 0) continue;
            put_be32(at(base, data_out), get_be32(at(base, record + 8u)));
            put_be32(at(base, size_out), get_be32(at(base, record + 12u)));
            ctx.r3.u32 = kStatusSuccess;
            return;
        }
    }
    ctx.r3.u32 = kNotFound;
}

PPC_FUNC(RtlCompareMemoryUlong) {
    const auto source = ctx.r3.u32;
    const auto length = ctx.r4.u32;
    const auto pattern = ctx.r5.u32;
    if (source == 0 || (source & 3u) != 0 || (length & 3u) != 0 ||
        static_cast<std::uint64_t>(source) + length > (std::uint64_t{1} << 32)) {
        ctx.r3.u32 = 0;
        return;
    }
    std::uint32_t matched_bytes = 0;
    for (std::uint32_t offset = 0; offset < length; offset += 4) {
        if (get_be32(at(base, source + offset)) != pattern) break;
        matched_bytes += 4;
    }
    ctx.r3.u32 = matched_bytes;
}

PPC_FUNC(RtlRaiseException) {
    const auto record = ctx.r3.u32;
    if (record == 0) {
        std::fprintf(stderr, "[TooHuman] RtlRaiseException received a null record\n");
        std::abort();
    }

    const auto code = get_be32(at(base, record));
    if (code == 0x406D1388u) {
        // MSVC's 0x406D1388 exception is the conventional thread-name marker.
        // There is no guest scheduler yet, so preserve execution without naming
        // a nonexistent host/guest thread object.
        return;
    }

    std::fprintf(stderr, "[TooHuman] Unsupported guest exception 0x%08X at 0x%08X\n",
                 code, get_be32(at(base, record + 0x0C)));
    std::fflush(stderr);
    std::abort(); // SEH/C++ exception unwinding is not implemented yet.
}

PPC_FUNC(XexCheckExecutablePrivilege) {
    const auto privilege = ctx.r3.u32;
    if (privilege >= 32u) {
        ctx.r3.u32 = 0;
        return;
    }

    const auto module_handle =
        g_executable_module_handle.load(std::memory_order_acquire);
    if (module_handle == 0) {
        ctx.r3.u32 = 0;
        return;
    }

    const auto xex_header = get_be32(at(base, module_handle + 0x58));
    if (xex_header == 0) {
        ctx.r3.u32 = 0;
        return;
    }

    const auto header_size = get_be32(at(base, xex_header + 8));
    const auto optional_count = get_be32(at(base, xex_header + 0x14));
    if (header_size < 0x18u || header_size > 0x100000u ||
        optional_count > (header_size - 0x18u) / 8u) {
        ctx.r3.u32 = 0;
        return;
    }

    std::uint32_t system_flags = 0;
    for (std::uint32_t i = 0; i < optional_count; ++i) {
        const auto offset = xex_header + 0x18u + i * 8u;
        if (get_be32(at(base, offset)) == 0x00030000u) {
            system_flags = get_be32(at(base, offset + 4));
            break;
        }
    }
    ctx.r3.u32 = (system_flags & (std::uint32_t{1} << privilege)) != 0 ? 1u : 0u;
}

PPC_FUNC(XamLoaderTerminateTitle) {
    std::fprintf(stderr, "[TooHuman] XamLoaderTerminateTitle: guest requested title termination\n");
    std::fflush(stderr);
    std::exit(0);
}

PPC_FUNC(XexGetProcedureAddress) {
    constexpr std::uint32_t kStatusDriverEntrypointNotFound = 0xC0000263u;
    const auto module_handle = ctx.r3.u32;
    const auto symbol = ctx.r4.u32;
    const auto output_address = ctx.r5.u32;
    if (output_address == 0 || symbol == 0) {
        ctx.r3.u32 = kStatusInvalidParameter;
        return;
    }

    const auto executable_handle =
        g_executable_module_handle.load(std::memory_order_acquire);
    if (executable_handle == 0 ||
        (module_handle != 0 && module_handle != executable_handle)) {
        put_be32(at(base, output_address), 0);
        ctx.r3.u32 = kStatusInvalidHandle;
        return;
    }

    // The original Too Human XEX has a zero IMAGE_DIRECTORY_ENTRY_EXPORT
    // (confirmed from the file's PE32 optional header), so neither ordinal
    // nor name lookups can legitimately resolve in the executable module.
    put_be32(at(base, output_address), 0);
    ctx.r3.u32 = kStatusDriverEntrypointNotFound;
}

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
// xboxkrnl #0x12D. UNICODE_STRING has the same 8-byte descriptor layout as ANSI_STRING,
// but Length and MaximumLength are byte counts and the source is big-endian UTF-16.
PPC_FUNC(RtlInitUnicodeString) {
    auto* dest = at(base, ctx.r3.u32);
    const auto src = ctx.r4.u32;
    std::uint16_t length = 0, maximum = 0;
    if (src != 0) {
        std::uint32_t characters = 0;
        while (characters < 0x7FFEu && get_be16(at(base, src) + characters * 2) != 0)
            ++characters;
        length = static_cast<std::uint16_t>(characters * 2);
        maximum = static_cast<std::uint16_t>((characters + 1) * 2);
    }
    put_be16(dest, length);
    put_be16(dest + 2, maximum);
    put_be32(dest + 4, src);
}

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
    mark_critical_section_acquired(base, address, ctx);
}
PPC_FUNC(RtlTryEnterCriticalSection) {
    const auto address = ctx.r3.u32;
    auto state = get_critical_section(base, address, true);
    if (!state || !state->mutex.try_lock()) {
        ctx.r3.u32 = 0;
        return;
    }
    mark_critical_section_acquired(base, address, ctx);
    ctx.r3.u32 = 1;
}
PPC_FUNC(RtlLeaveCriticalSection) {
    const auto address = ctx.r3.u32;
    auto state = get_critical_section(base, address, false);
    if (!state) return;
    auto* cs = at(base, address);
    if (get_be32(cs + 0x18) != current_guest_thread_token(ctx, base)) return;
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

// xboxkrnl #0xD1 / #0xF6 / #0xCE / #0xFD / #0xCF.
// The early title path uses unnamed dispatcher events. Event type 0 is notification
// (manual-reset); type 1 is synchronization (auto-reset). Wait timeout pointers carry
// signed 100 ns intervals, with negative values relative to now and positive FILETIME values.
// Xbox worker-thread imports backed by per-thread guest PPC contexts.
PPC_FUNC(ExCreateThread) {
    auto* registry = PpcImportRegistry::active();
    ctx.r3.u32 = registry ? registry->create_guest_thread(ctx, base) : kStatusUnsuccessful;
}
PPC_FUNC(NtResumeThread) {
    auto* registry = PpcImportRegistry::active();
    ctx.r3.u32 = registry ? registry->resume_guest_thread(ctx, base) : kStatusUnsuccessful;
}
PPC_FUNC(KeResumeThread) {
    auto* registry = PpcImportRegistry::active();
    ctx.r3.u32 = registry ? registry->resume_guest_kernel_thread(ctx) : 0xFFFFFFFFu;
}
PPC_FUNC(ExTerminateThread) {
    if (!terminate_current_guest_thread(ctx.r3.u32))
        ctx.r3.u32 = kStatusUnsuccessful;
}

PPC_FUNC(NtCreateEvent) {
    if (ctx.r3.u32 == 0) {
        ctx.r3.u32 = kStatusInvalidParameter;
        return;
    }
    auto event = std::make_shared<GuestEventObject>(ctx.r5.u32 == 0, ctx.r6.u32 != 0);
    const auto handle = process_kernel_objects().insert(event);
    if (!handle) {
        ctx.r3.u32 = 0xC0000017u; // STATUS_NO_MEMORY
        return;
    }
    put_be32(at(base, ctx.r3.u32), *handle);
    ctx.r3.u32 = kStatusSuccess;
}
PPC_FUNC(NtSetEvent) {
    const auto handle = ctx.r3.u32;
    auto object = process_kernel_objects().lookup(handle);
    auto event = std::dynamic_pointer_cast<GuestEventObject>(std::move(object));
    if (!event) {
        ctx.r3.u32 = kStatusInvalidHandle;
        return;
    }
    const auto previous = event->set() ? 1u : 0u;
    if (ctx.r4.u32 != 0) put_be32(at(base, ctx.r4.u32), previous);
    ctx.r3.u32 = kStatusSuccess;
}
PPC_FUNC(NtClearEvent) {
    auto object = process_kernel_objects().lookup(ctx.r3.u32);
    auto event = std::dynamic_pointer_cast<GuestEventObject>(std::move(object));
    if (!event) {
        ctx.r3.u32 = kStatusInvalidHandle;
        return;
    }
    event->clear();
    ctx.r3.u32 = kStatusSuccess;
}
PPC_FUNC(NtWaitForSingleObjectEx) {
    // Retain a strong reference before touching the optional guest timeout
    // pointer. Invalid handles must not trigger a read through an invalid pointer.
    auto object = process_kernel_objects().lookup(ctx.r3.u32);
    if (!object) {
        ctx.r3.u32 = kStatusInvalidHandle;
        return;
    }
    const auto timeout = decode_guest_timeout(base, ctx.r6.u32);
    const auto result = object->wait(timeout);
    switch (result) {
    case GuestKernelObjectWaitResult::Signaled: ctx.r3.u32 = kStatusSuccess; break;
    case GuestKernelObjectWaitResult::Timeout: ctx.r3.u32 = kStatusTimeout; break;
    case GuestKernelObjectWaitResult::InvalidHandle: ctx.r3.u32 = kStatusInvalidHandle; break;
    }
}
// xboxkrnl #0xDA. NtDuplicateObject(HANDLE src /*r3*/, HANDLE* out /*r4*/, ULONG options /*r5*/).
// Pseudo-handles (-1 process, -2 thread) are given a placeholder signaled event object.
PPC_FUNC(NtDuplicateObject) {
    constexpr std::uint32_t kNotSupported = 0xC00000BBu;
    const auto source = ctx.r3.u32;
    const auto out = ctx.r4.u32;
    const auto options = ctx.r5.u32;
    if (out == 0) { ctx.r3.u32 = kStatusInvalidParameter; return; }
    if (!guest_range_valid(base, out, 4u, GuestMemoryAccess::Write)) {
        ctx.r3.u32 = 0xC0000005u;
        return;
    }
    if ((options & ~0x3u) != 0) {
        ctx.r3.u32 = kStatusInvalidParameter;
        return;
    }
    // Process/thread pseudo-handles need real process and current-thread
    // kernel objects. Do not fabricate a signaled event for either.
    if (source == 0xFFFFFFFEu || source == 0xFFFFFFFFu) {
        ctx.r3.u32 = kNotSupported;
        return;
    }
    const auto handle = process_kernel_objects().duplicate(
        source, (options & 0x1u) != 0);
    if (!handle) { ctx.r3.u32 = kStatusInvalidHandle; return; }
    put_be32(at(base, out), *handle);
    ctx.r3.u32 = kStatusSuccess;
}

// xboxkrnl #0x110. ObReferenceObjectByHandle(HANDLE /*r3*/, POBJECT_TYPE /*r4*/, PVOID* out /*r5*/).
// Thread handles resolve to the guest KTHREAD; other objects fail with STATUS_OBJECT_TYPE_MISMATCH.
PPC_FUNC(ObReferenceObjectByHandle) {
    const auto output = ctx.r5.u32;
    if (output == 0) { ctx.r3.u32 = kStatusInvalidParameter; return; }
    if (!guest_range_valid(base, output, 4u, GuestMemoryAccess::Write)) {
        ctx.r3.u32 = 0xC0000005u;
        return;
    }
    const auto object = process_kernel_objects().lookup(ctx.r3.u32);
    if (!object) { ctx.r3.u32 = kStatusInvalidHandle; return; }
    const auto address = object->guest_object_address();
    if (address == 0) { ctx.r3.u32 = 0xC0000024u; return; }
    put_be32(at(base, output), address);
    ctx.r3.u32 = kStatusSuccess;
}

// xboxkrnl #0x97. KeSetAffinityThread(PKTHREAD, KAFFINITY, PKAFFINITY old /*r5, optional*/).
// Host scheduling decides placement; report a six-core affinity as the previous value.
PPC_FUNC(KeSetAffinityThread) {
    constexpr std::uint32_t kAllCores = 0x3Fu;
    // The PKTHREAD is a guest object body (KTHREAD is 0xAB0 bytes).
    if (!guest_range_valid(base, ctx.r3.u32, 0xAB0u, GuestMemoryAccess::Read)) {
        ctx.r3.u32 = 0xC0000005u;
        return;
    }
    if (ctx.r5.u32 != 0) {
        if (!guest_range_valid(base, ctx.r5.u32, 4u, GuestMemoryAccess::Write)) {
            ctx.r3.u32 = 0xC0000005u;
            return;
        }
        put_be32(at(base, ctx.r5.u32), kAllCores);
    }
    ctx.r3.u32 = kAllCores;
}

// xboxkrnl #0x105. ObDereferenceObject(PVOID): kernel objects are owned by the handle table.
PPC_FUNC(ObDereferenceObject) {
    ctx.r3.u32 = kStatusSuccess; // reference counts are not tracked yet
}

// xboxkrnl #0x99. KeSetBasePriorityThread(PKTHREAD, LONG): priority is advisory under the host scheduler.
PPC_FUNC(KeSetBasePriorityThread) {
    ctx.r3.u32 = 0; // previous priority
}

// xboxkrnl #0xC7. MmSetAddressProtect(PVOID, SIZE_T, ULONG): no-op; host pages remain read/write.
PPC_FUNC(MmSetAddressProtect) {
    ctx.r3.u32 = 0; // physical-heap pages stay RW on the host
}

PPC_FUNC(NtClose) {
    ctx.r3.u32 = process_kernel_objects().close(ctx.r3.u32)
        ? kStatusSuccess : kStatusInvalidHandle;
}

// A focused subset of common NTSTATUS conversions used by startup diagnostics and
// error branches. Unknown values follow RTL's ERROR_MR_MID_NOT_FOUND fallback.
PPC_FUNC(RtlNtStatusToDosError) {
    const auto status = ctx.r3.u32;
    std::uint32_t error = 317u; // ERROR_MR_MID_NOT_FOUND
    if (status == 0 || (status & 0x20000000u) != 0) {
        error = status;
    } else if ((status >> 16) == 0x8007u || (status >> 16) == 0xC001u) {
        error = status & 0xFFFFu;
    } else {
        auto normalized = status;
        if ((normalized & 0xF0000000u) == 0xD0000000u)
            normalized &= ~0x30000000u;
        switch (normalized) {
        case 0xC0000008u: error = 6u; break;   // ERROR_INVALID_HANDLE
        case 0xC000000Du: error = 87u; break;  // ERROR_INVALID_PARAMETER
        case 0xC0000017u: error = 8u; break;   // ERROR_NOT_ENOUGH_MEMORY
        case 0xC0000022u: error = 5u; break;   // ERROR_ACCESS_DENIED
        case 0xC0000023u: error = 122u; break; // ERROR_INSUFFICIENT_BUFFER
        case 0xC0000034u: error = 2u; break;   // ERROR_FILE_NOT_FOUND
        case 0xC0000035u: error = 183u; break; // ERROR_ALREADY_EXISTS
        case 0xC00000BBu: error = 50u; break;  // ERROR_NOT_SUPPORTED
        case 0x00000102u: error = 1460u; break;// ERROR_TIMEOUT
        default: break;
        }
    }
    ctx.r3.u32 = error;
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
