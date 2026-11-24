#include "ppc/guest_thread_manager.hpp"
#include "ppc/guest_thread_execution.hpp"

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
bool wait_until(const std::atomic<std::uint32_t>& value) {
    const auto deadline = std::chrono::steady_clock::now() + std::chrono::seconds(2);
    while (value.load(std::memory_order_acquire) == 0u &&
           std::chrono::steady_clock::now() < deadline) {
        std::this_thread::yield();
    }
    return value.load(std::memory_order_acquire) != 0u;
}
}
#include <cstdint>
#include <string>
#include <thread>

using namespace std::chrono_literals;

int main() {
    using namespace toohuman::runtime;

    // Guest termination is a non-local exit only while executing a guest
    // thread. The scope must restore the previous thread-local token when
    // nested scopes unwind.
    assert(!terminate_current_guest_thread(0x12345678u));
    {
        GuestThreadExecutionScope outer(std::stop_token{});
        std::stop_source requested_stop;
        requested_stop.request_stop();
        {
            GuestThreadExecutionScope inner(requested_stop.get_token());
            bool stopped = false;
            try {
                throw_if_guest_thread_stop_requested();
            } catch (const GuestThreadExitSignal& exit) {
                stopped = exit.exit_code() == GuestThreadManager::kStatusThreadIsTerminating;
            }
            assert(stopped);
        }
        // The inner stopped token must not leak into the outer guest thread.
        throw_if_guest_thread_stop_requested();

        bool terminated = false;
        try {
            (void)terminate_current_guest_thread(0x12345678u);
        } catch (const GuestThreadExitSignal& exit) {
            terminated = exit.exit_code() == 0x12345678u;
        }
        assert(terminated);
    }
    assert(!terminate_current_guest_thread(0x12345678u));

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
    assert(wait_until(detached_cleanup_calls));
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

    // The manager can expose a thread object at the guest KTHREAD address.
    GuestKernelObjectTable native_table;
    GuestThreadManager native_manager(native_table);
    constexpr GuestKernelHandle native_kthread = 0xA0009000u;
    const auto native_thread = native_manager.create(
        GuestThreadStartup{},
        [](GuestThreadStartup&, std::stop_token) { return 13u; },
        false, &error, {}, native_kthread);
    assert(native_thread && *native_thread == native_kthread);
    assert(native_table.lookup(native_kthread));
    assert(native_manager.wait(native_kthread, 2s) == GuestThreadWaitResult::Signaled);
    assert(native_manager.close_handle(native_kthread));
    assert(!native_table.lookup(native_kthread));

    // If an NT duplicate survives the manager's original handle, manager
    // teardown must invalidate that alias before destroying the runtime.
    GuestKernelObjectTable alias_table;
    std::atomic<std::uint32_t> alias_cleanup_calls{0};
    GuestKernelHandle alias_handle = 0;
    {
        GuestThreadManager alias_manager(alias_table);
        const auto primary = alias_manager.create(
            GuestThreadStartup{},
            [](GuestThreadStartup&, std::stop_token) { return 17u; },
            false, &error,
            [&](GuestThreadStartup&) { ++alias_cleanup_calls; });
        assert(primary);
        assert(alias_manager.wait(*primary, 2s) == GuestThreadWaitResult::Signaled);
        auto shared_object = alias_table.lookup(*primary);
        assert(shared_object);
        const auto duplicate = alias_table.insert(shared_object);
        assert(duplicate);
        alias_handle = *duplicate;
        assert(alias_manager.close_handle(*primary));
        assert(alias_cleanup_calls.load() == 0u);
        assert(alias_table.lookup(alias_handle));
    }
    assert(alias_cleanup_calls.load() == 1u);
    assert(!alias_table.lookup(alias_handle));

    // NtSuspendThread-style cooperative suspension is counted. Execution
    // pauses at guest import/HLE checkpoints, then resumes only after the
    // suspend count returns to zero.
    GuestThreadManager suspend_manager;
    std::atomic<std::uint32_t> safe_point_count{0};
    std::atomic<bool> finish_suspended_worker{false};
    const auto cooperative = suspend_manager.create(
        GuestThreadStartup{},
        [&](GuestThreadStartup&, std::stop_token) {
            while (!finish_suspended_worker.load(std::memory_order_acquire)) {
                throw_if_guest_thread_stop_requested();
                safe_point_count.fetch_add(1u, std::memory_order_release);
                std::this_thread::yield();
            }
            return 0x87654321u;
        },
        false, &error);
    assert(cooperative.has_value());
    const auto progress_deadline =
        std::chrono::steady_clock::now() + 2s;
    while (safe_point_count.load(std::memory_order_acquire) < 10u &&
           std::chrono::steady_clock::now() < progress_deadline) {
        std::this_thread::yield();
    }
    assert(safe_point_count.load(std::memory_order_acquire) >= 10u);

    assert(suspend_manager.suspend(*cooperative, &previous_count, &error));
    assert(previous_count == 0u);
    assert(suspend_manager.suspend(*cooperative, &previous_count, &error));
    assert(previous_count == 1u);
    assert(suspend_manager.get_state(*cooperative, state, &suspend_count));
    assert(state == GuestThreadLifecycleState::Suspended);
    assert(suspend_count == 2u);

    // Allow a checkpoint already in flight to finish before measuring the
    // stable paused interval.
    std::this_thread::sleep_for(30ms);
    const auto paused_count = safe_point_count.load(std::memory_order_acquire);
    std::this_thread::sleep_for(30ms);
    assert(safe_point_count.load(std::memory_order_acquire) == paused_count);

    assert(suspend_manager.resume(*cooperative, &previous_count, &error));
    assert(previous_count == 2u);
    std::this_thread::sleep_for(20ms);
    assert(safe_point_count.load(std::memory_order_acquire) == paused_count);
    assert(suspend_manager.resume(*cooperative, &previous_count, &error));
    assert(previous_count == 1u);

    const auto resumed_deadline = std::chrono::steady_clock::now() + 2s;
    while (safe_point_count.load(std::memory_order_acquire) == paused_count &&
           std::chrono::steady_clock::now() < resumed_deadline) {
        std::this_thread::yield();
    }
    assert(safe_point_count.load(std::memory_order_acquire) > paused_count);
    finish_suspended_worker.store(true, std::memory_order_release);
    assert(suspend_manager.wait(*cooperative, 2s) == GuestThreadWaitResult::Signaled);
    assert(suspend_manager.get_exit_code(*cooperative, exit_code));
    assert(exit_code == 0x87654321u);
    assert(suspend_manager.close_handle(*cooperative));

    assert(!manager.resume(0xFFFFFFFFu, nullptr, &error));
    assert(manager.wait(0xFFFFFFFFu, 0ms) == GuestThreadWaitResult::InvalidHandle);
    return 0;
}
