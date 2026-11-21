#include "ppc/guest_thread_manager.hpp"

#include <atomic>
#include <cassert>
#include <chrono>

namespace {
bool wait_until(const std::atomic<bool>& value) {
    const auto deadline = std::chrono::steady_clock::now() + std::chrono::seconds(2);
    while (!value.load(std::memory_order_acquire) &&
           std::chrono::steady_clock::now() < deadline) {
        std::this_thread::yield();
    }
    return value.load(std::memory_order_acquire);
}
}
#include <cstdint>
#include <string>
#include <thread>

using namespace std::chrono_literals;

int main() {
    using namespace toohuman::runtime;

    GuestThreadManager manager;
    std::string error;

    GuestThreadStartup startup{};
    startup.thread_id = 42u;
    startup.start_address = 0x82001000u;
    startup.start_context = 0xCAFEBABEu;

    std::atomic<bool> entered{false};
    const auto suspended = manager.create(
        startup,
        [&](GuestThreadStartup& thread, std::stop_token stop) {
            assert(thread.thread_id == 42u);
            assert(thread.start_address == 0x82001000u);
            assert(thread.start_context == 0xCAFEBABEu);
            assert(!stop.stop_requested());
            entered.store(true, std::memory_order_release);
            return 0x12345678u;
        },
        true, &error);
    assert(suspended.has_value());
    assert(!entered.load(std::memory_order_acquire));

    GuestThreadLifecycleState state{};
    std::uint32_t suspend_count = 0;
    assert(manager.get_state(*suspended, state, &suspend_count));
    assert(state == GuestThreadLifecycleState::Suspended);
    assert(suspend_count == 1u);
    assert(manager.wait(*suspended, 0ms) == GuestThreadWaitResult::Timeout);

    std::uint32_t previous_count = 99u;
    assert(manager.resume(*suspended, &previous_count, &error));
    assert(previous_count == 1u);
    assert(manager.resume(*suspended, &previous_count, &error));
    assert(previous_count == 0u);
    assert(manager.wait(*suspended) == GuestThreadWaitResult::Signaled);
    assert(entered.load(std::memory_order_acquire));

    std::uint32_t exit_code = 0;
    assert(manager.get_exit_code(*suspended, exit_code));
    assert(exit_code == 0x12345678u);
    assert(manager.wait(*suspended, 0ms) == GuestThreadWaitResult::Signaled);
    assert(manager.close_handle(*suspended));
    assert(!manager.get_exit_code(*suspended, exit_code));
    assert(manager.wait(*suspended, 0ms) == GuestThreadWaitResult::InvalidHandle);

    // Closing a live handle must not destroy or cancel the underlying worker.
    std::atomic<bool> detached_worker_entered{false};
    std::atomic<bool> release_worker{false};
    std::atomic<bool> detached_worker_finished{false};
    std::atomic<std::uint32_t> detached_cleanup_calls{0};
    auto detached = manager.create(
        GuestThreadStartup{},
        [&](GuestThreadStartup&, std::stop_token stop) {
            detached_worker_entered.store(true, std::memory_order_release);
            while (!release_worker.load(std::memory_order_acquire) &&
                   !stop.stop_requested()) {
                std::this_thread::yield();
            }
            detached_worker_finished.store(true, std::memory_order_release);
            return 7u;
        }, false, &error,
        [&](GuestThreadStartup&) { ++detached_cleanup_calls; });
    assert(detached.has_value());
    assert(wait_until(detached_worker_entered));
    assert(manager.close_handle(*detached));
    assert(!detached_worker_finished.load(std::memory_order_acquire));
    assert(detached_cleanup_calls.load() == 0u);
    assert(!manager.close_handle(*detached));

    release_worker.store(true, std::memory_order_release);
    assert(wait_until(detached_worker_finished));
    assert(detached_cleanup_calls.load() == 1u);

    // A later manager operation reaps and joins the completed, unreferenced worker.
    auto next = manager.create(
        GuestThreadStartup{},
        [](GuestThreadStartup&, std::stop_token) { return 9u; });
    assert(next.has_value());
    assert(manager.wait(*next, 2s) == GuestThreadWaitResult::Signaled);
    assert(manager.get_exit_code(*next, exit_code));
    assert(exit_code == 9u);
    assert(manager.close_handle(*next));

    // A completed thread keeps its guest startup context while its handle is
    // open. Cleanup runs exactly once only after the handle is also closed.
    std::atomic<std::uint32_t> completed_cleanup_calls{0};
    GuestThreadStartup cleanup_startup{};
    cleanup_startup.thread_id = 77u;
    auto cleanup_handle = manager.create(
        cleanup_startup,
        [](GuestThreadStartup&, std::stop_token) { return 11u; },
        false, &error,
        [&](GuestThreadStartup& context) {
            assert(context.thread_id == 77u);
            ++completed_cleanup_calls;
            context.thread_id = 0;
        });
    assert(cleanup_handle.has_value());
    assert(manager.wait(*cleanup_handle, 2s) == GuestThreadWaitResult::Signaled);
    assert(completed_cleanup_calls.load() == 0u);
    assert(manager.close_handle(*cleanup_handle));
    assert(completed_cleanup_calls.load() == 1u);

    // A suspended worker is stopped during manager teardown. Its cleanup runs
    // after the stop gate exits, even though Entry was never invoked.
    std::atomic<std::uint32_t> shutdown_cleanup_calls{0};
    std::atomic<bool> suspended_entry_called{false};
    {
        GuestThreadManager shutdown_manager;
        GuestThreadStartup shutdown_startup{};
        shutdown_startup.thread_id = 88u;
        const auto pending = shutdown_manager.create(
            shutdown_startup,
            [&](GuestThreadStartup&, std::stop_token) {
                suspended_entry_called.store(true, std::memory_order_release);
                return 0u;
            },
            true, &error,
            [&](GuestThreadStartup& context) {
                assert(context.thread_id == 88u);
                ++shutdown_cleanup_calls;
                context.thread_id = 0;
            });
        assert(pending.has_value());
    }
    assert(!suspended_entry_called.load(std::memory_order_acquire));
    assert(shutdown_cleanup_calls.load() == 1u);

    assert(!manager.resume(0xFFFFFFFFu, nullptr, &error));
    assert(manager.wait(0xFFFFFFFFu, 0ms) == GuestThreadWaitResult::InvalidHandle);
    return 0;
}
