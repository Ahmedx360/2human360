#pragma once

#include <array>
#include <atomic>
#include <condition_variable>
#include <cstddef>
#include <cstdint>
#include <mutex>
#include <vector>

namespace toohuman::runtime {

inline constexpr std::uint32_t kXenosMmioBase = 0x7FC80000u;
inline constexpr std::uint32_t kXmaMmioBase = 0x7FEA0000u;
inline constexpr std::uint32_t kGuestMmioWindowSize = 0x00010000u;

enum class GuestMmioDevice : std::uint8_t {
    Xenos,
    Xma,
};

struct GuestMmioAccess {
    std::uint64_t sequence{};
    std::uint32_t address{};
    std::uint64_t value{};
    GuestMmioDevice device{};
    std::uint8_t width{};
    bool write{};
};

// A deliberately conservative register-file model for the two principal
// Xbox 360 MMIO apertures. It preserves big-endian byte lanes and records
// accesses, but does not claim to emulate Xenos or XMA device side effects.
class GuestMmioBus final {
public:
    using XenosWriteObserver = void (*)(void* context, std::uint32_t address,
                                        std::uint8_t width, std::uint64_t value) noexcept;
    using GuestMemoryWriteObserver = void (*)(void* context, const void* host_address,
                                              std::uint8_t width) noexcept;
    static constexpr std::size_t kTraceCapacity = 4096;

    GuestMmioBus() = default;
    GuestMmioBus(const GuestMmioBus&) = delete;
    GuestMmioBus& operator=(const GuestMmioBus&) = delete;

    [[nodiscard]] static GuestMmioBus& global() noexcept;

    [[nodiscard]] static bool handles(std::uint32_t address,
                                      std::size_t width = 1) noexcept;
    [[nodiscard]] static bool device_for(std::uint32_t address,
                                        std::size_t width,
                                        GuestMmioDevice& device) noexcept;

    // Invalid widths/ranges return zero or false and are not recorded.
    // Valid reads return the latest register-file bytes in guest big-endian
    // order. Unwritten bytes read as zero; writes are retained for readback.
    [[nodiscard]] std::uint64_t read(std::uint32_t address,
                                     std::uint8_t width) noexcept;
    [[nodiscard]] bool write(std::uint32_t address, std::uint8_t width,
                             std::uint64_t value) noexcept;
    // PM4 register writes update the same register file but must not recurse
    // into the primary-ring write-pointer observer.
    [[nodiscard]] bool write_unobserved(std::uint32_t address,
                                        std::uint8_t width,
                                        std::uint64_t value) noexcept;

    // One active title may observe Xenos MMIO writes. Clearing an observer
    // waits for any callback already in flight to return.
    [[nodiscard]] bool set_xenos_write_observer(
        void* context, XenosWriteObserver observer) noexcept;
    void clear_xenos_write_observer(void* context) noexcept;

    // Guest RAM writes are observed only while a memory-polled Xenos wait is
    // pending. Callers pass a host pointer into the guest mapping so translated
    // PPC stores and selected HLE stores share the same overlap check. The
    // atomic gate keeps the normal translated store path cheap.
    [[nodiscard]] bool set_guest_memory_write_observer(
        void* context, GuestMemoryWriteObserver observer) noexcept;
    void clear_guest_memory_write_observer(void* context) noexcept;
    void set_guest_memory_write_notifications_enabled(bool enabled) noexcept;
    void notify_guest_memory_write(const void* host_address,
                                   std::uint8_t width) noexcept;

    [[nodiscard]] std::vector<GuestMmioAccess> trace() const;
    [[nodiscard]] std::uint64_t dropped_trace_entries() const noexcept;
    void reset() noexcept;

private:
    [[nodiscard]] bool resolve(std::uint32_t address, std::uint8_t width,
                               GuestMmioDevice& device,
                               std::uint32_t& offset) const noexcept;
    void record_locked(const GuestMmioAccess& access) noexcept;
    [[nodiscard]] bool write_impl(std::uint32_t address, std::uint8_t width,
                                  std::uint64_t value, bool notify) noexcept;

    mutable std::mutex mutex_;
    std::condition_variable observer_idle_;
    void* observer_context_{};
    XenosWriteObserver xenos_write_observer_{};
    std::size_t observer_callbacks_in_flight_{};
    void* guest_memory_observer_context_{};
    GuestMemoryWriteObserver guest_memory_write_observer_{};
    std::size_t guest_memory_observer_callbacks_in_flight_{};
    std::atomic<bool> guest_memory_write_notifications_enabled_{false};
    std::array<std::uint8_t, kGuestMmioWindowSize> xenos_{};
    std::array<std::uint8_t, kGuestMmioWindowSize> xma_{};
    std::array<GuestMmioAccess, kTraceCapacity> trace_{};
    std::size_t trace_next_{};
    std::size_t trace_count_{};
    std::uint64_t next_sequence_{1};
    std::uint64_t dropped_trace_entries_{};
};

// Called by the scalar PPC accessors when an effective address is inside an
// MMIO aperture. These helpers deliberately avoid dereferencing guest RAM.
[[nodiscard]] std::uint64_t guest_mmio_read(std::uint32_t address,
                                            std::uint8_t width) noexcept;
void guest_mmio_write(std::uint32_t address, std::uint8_t width,
                      std::uint64_t value) noexcept;
void guest_memory_write_observed(const void* host_address,
                                 std::uint8_t width) noexcept;

} // namespace toohuman::runtime
