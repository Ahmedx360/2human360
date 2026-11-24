#include "ppc/guest_thread_execution.hpp"
#include <limits>
namespace toohuman::runtime {
namespace {
thread_local std::stop_token g_current_stop;
thread_local GuestThreadExecutionControl* g_current_control = nullptr;
thread_local bool g_scope_active = false;
}
GuestThreadExecutionControl::GuestThreadExecutionControl(
    std::uint32_t initial_suspend_count) noexcept
    : suspend_count_(initial_suspend_count) {}
std::uint32_t GuestThreadExecutionControl::suspend() noexcept {
    std::lock_guard lock(mutex_);
    const auto previous = suspend_count_;
    if (suspend_count_ != std::numeric_limits<std::uint32_t>::max())
        ++suspend_count_;
    return previous;
}
std::uint32_t GuestThreadExecutionControl::resume() noexcept {
    std::uint32_t previous = 0;
    bool became_runnable = false;
    {
        std::lock_guard lock(mutex_);
        previous = suspend_count_;
        if (suspend_count_ != 0u) --suspend_count_;
        became_runnable = suspend_count_ == 0u;
    }
    if (became_runnable) condition_.notify_all();
    return previous;
}
std::uint32_t GuestThreadExecutionControl::suspend_count() const noexcept {
    std::lock_guard lock(mutex_);
    return suspend_count_;
}
bool GuestThreadExecutionControl::wait(std::stop_token stop) {
    std::unique_lock lock(mutex_);
    return condition_.wait(lock, stop, [this] { return suspend_count_ == 0u; });
}
GuestThreadExecutionScope::GuestThreadExecutionScope(
    std::stop_token stop, GuestThreadExecutionControl* control) noexcept
    : previous_stop_(g_current_stop), previous_control_(g_current_control),
      previous_active_(g_scope_active) {
    g_current_stop = stop;
    g_current_control = control;
    g_scope_active = true;
}
GuestThreadExecutionScope::~GuestThreadExecutionScope() {
    g_current_stop = previous_stop_;
    g_current_control = previous_control_;
    g_scope_active = previous_active_;
}
void throw_if_guest_thread_stop_requested() {
    if (!g_scope_active) return;
    if (g_current_stop.stop_requested())
        throw GuestThreadExitSignal(0xC000004Bu);
    if (g_current_control && !g_current_control->wait(g_current_stop))
        throw GuestThreadExitSignal(0xC000004Bu);
    if (g_current_stop.stop_requested())
        throw GuestThreadExitSignal(0xC000004Bu);
}
bool terminate_current_guest_thread(std::uint32_t exit_code) {
    if (!g_scope_active) return false;
    throw GuestThreadExitSignal(exit_code);
}
} // namespace toohuman::runtime
