#pragma once
#include <cstdint>
#include <stop_token>
namespace toohuman::runtime {
class GuestThreadExitSignal final {
public:
    explicit GuestThreadExitSignal(std::uint32_t code) noexcept : code_(code) {}
    [[nodiscard]] std::uint32_t exit_code() const noexcept { return code_; }
private:
    std::uint32_t code_{};
};
class GuestThreadExecutionScope final {
public:
    explicit GuestThreadExecutionScope(std::stop_token stop) noexcept;
    ~GuestThreadExecutionScope();
    GuestThreadExecutionScope(const GuestThreadExecutionScope&) = delete;
    GuestThreadExecutionScope& operator=(const GuestThreadExecutionScope&) = delete;
private:
    std::stop_token previous_stop_;
    bool previous_active_{};
};
void throw_if_guest_thread_stop_requested();
[[nodiscard]] bool terminate_current_guest_thread(std::uint32_t exit_code);
} // namespace toohuman::runtime
