#include "ppc/guest_thread_execution.hpp"
namespace toohuman::runtime {
namespace {
thread_local std::stop_token g_current_stop;
thread_local bool g_scope_active = false;
}
GuestThreadExecutionScope::GuestThreadExecutionScope(std::stop_token stop) noexcept
    : previous_stop_(g_current_stop), previous_active_(g_scope_active) {
    g_current_stop = stop;
    g_scope_active = true;
}
GuestThreadExecutionScope::~GuestThreadExecutionScope() {
    g_current_stop = previous_stop_;
    g_scope_active = previous_active_;
}
void throw_if_guest_thread_stop_requested() {
    if (g_scope_active && g_current_stop.stop_requested())
        throw GuestThreadExitSignal(0xC000004Bu);
}
bool terminate_current_guest_thread(std::uint32_t exit_code) {
    if (!g_scope_active) return false;
    throw GuestThreadExitSignal(exit_code);
}
} // namespace toohuman::runtime
