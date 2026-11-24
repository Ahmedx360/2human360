#pragma once
#include <condition_variable>
#include <cstdint>
#include <mutex>
#include <stop_token>
namespace toohuman::runtime {
// Shared cooperative suspension gate for a guest worker. A suspend takes effect
// at the next runtime safe point; it does not preempt arbitrary translated code.
class GuestThreadExecutionControl final {
public:
    explicit GuestThreadExecutionControl(std::uint32_t initial_suspend_count = 0) noexcept;
    [[nodiscard]] std::uint32_t suspend() noexcept;
    [[nodiscard]] std::uint32_t resume() noexcept;
    [[nodiscard]] std::uint32_t suspend_count() const noexcept;
    [[nodiscard]] bool wait(std::stop_token stop);
private:
    mutable std::mutex mutex_;
    std::condition_variable_any condition_;
    std::uint32_t suspend_count_{};
};
class GuestThreadExitSignal final {
public:
    explicit GuestThreadExitSignal(std::uint32_t code) noexcept : code_(code) {}
    [[nodiscard]] std::uint32_t exit_code() const noexcept { return code_; }
private:
    std::uint32_t code_{};
};
class GuestThreadExecutionScope final {
public:
    explicit GuestThreadExecutionScope(
        std::stop_token stop, GuestThreadExecutionControl* control = nullptr) noexcept;
    ~GuestThreadExecutionScope();
    GuestThreadExecutionScope(const GuestThreadExecutionScope&) = delete;
    GuestThreadExecutionScope& operator=(const GuestThreadExecutionScope&) = delete;
private:
    std::stop_token previous_stop_;
    GuestThreadExecutionControl* previous_control_{};
    bool previous_active_{};
};
void throw_if_guest_thread_stop_requested();
[[nodiscard]] bool terminate_current_guest_thread(std::uint32_t exit_code);
} // namespace toohuman::runtime
