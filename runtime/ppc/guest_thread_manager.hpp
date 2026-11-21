#pragma once

#include "ppc/title_runtime.hpp"

#include <chrono>
#include <condition_variable>
#include <cstdint>
#include <functional>
#include <memory>
#include <mutex>
#include <optional>
#include <stop_token>
#include <string>
#include <thread>
#include <unordered_map>
#include <vector>

namespace toohuman::runtime {

using GuestThreadHandle = std::uint32_t;

enum class GuestThreadLifecycleState {
    Suspended,
    Running,
    Completed,
};

enum class GuestThreadWaitResult {
    Signaled,
    Timeout,
    InvalidHandle,
};

// A host-side lifecycle primitive for already-prepared guest thread contexts.
// It deliberately does not create KTHREAD/PCR/TLS, execute PPC, or implement
// Xbox handle/dispatcher semantics. The caller supplies an executor, allowing
// lifecycle and ownership rules to be tested independently of PPC HLE.
class GuestThreadManager final {
public:
    using Entry = std::function<std::uint32_t(GuestThreadStartup&, std::stop_token)>;

    static constexpr std::uint32_t kStillActive = 259u;
    static constexpr std::uint32_t kStatusThreadIsTerminating = 0xC000004Bu;
    static constexpr std::uint32_t kStatusUnsuccessful = 0xC0000001u;

    GuestThreadManager() = default;
    ~GuestThreadManager();

    GuestThreadManager(const GuestThreadManager&) = delete;
    GuestThreadManager& operator=(const GuestThreadManager&) = delete;

    // The startup record is copied into manager-owned storage. A suspended
    // thread starts with one suspend count; otherwise its executor may run
    // immediately. The executor must cooperate with stop requests so manager
    // destruction can join it safely.
    [[nodiscard]] std::optional<GuestThreadHandle> create(
        GuestThreadStartup startup, Entry entry, bool initially_suspended = false,
        std::string* error = nullptr);

    // Decrements a nonzero suspend count and returns its previous value.
    // A valid, already-runnable thread succeeds with previous_count == 0.
    [[nodiscard]] bool resume(GuestThreadHandle handle,
                              std::uint32_t* previous_count = nullptr,
                              std::string* error = nullptr);

    // A null timeout means infinite wait. Zero/negative timeouts poll.
    [[nodiscard]] GuestThreadWaitResult wait(
        GuestThreadHandle handle,
        std::optional<std::chrono::milliseconds> timeout = std::nullopt);

    [[nodiscard]] bool get_state(
        GuestThreadHandle handle, GuestThreadLifecycleState& state,
        std::uint32_t* suspend_count = nullptr) const;

    // Returns STILL_ACTIVE until the executor completes.
    [[nodiscard]] bool get_exit_code(GuestThreadHandle handle,
                                     std::uint32_t& exit_code) const;

    // Closing a handle removes lookup access only. A live worker remains owned
    // by the manager and runs to completion; it is reaped on a later operation
    // or joined during manager destruction.
    [[nodiscard]] bool close_handle(GuestThreadHandle handle);

private:
    struct Record;
    void reap_completed_workers();

    mutable std::mutex mutex_;
    std::unordered_map<GuestThreadHandle, std::shared_ptr<Record>> handles_;
    std::vector<std::shared_ptr<Record>> workers_;
    GuestThreadHandle next_handle_{0x20000u};
    bool shutting_down_{};
};

} // namespace toohuman::runtime
