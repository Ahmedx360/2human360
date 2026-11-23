#include "kernel/guest_kernel_objects.hpp"
#include <atomic>
#include <cassert>
#include <chrono>
#include <memory>
#include <mutex>
#include <thread>
#include <unordered_set>
#include <vector>
using namespace std::chrono_literals;
namespace {
class ReentrantCloseObject final : public toohuman::runtime::GuestKernelObject {
public:
    explicit ReentrantCloseObject(toohuman::runtime::GuestKernelObjectTable& table)
        : table_(table) {}
    [[nodiscard]] toohuman::runtime::GuestKernelObjectType type() const noexcept override {
        return toohuman::runtime::GuestKernelObjectType::Event;
    }
    [[nodiscard]] toohuman::runtime::GuestKernelObjectWaitResult wait(
        std::optional<std::chrono::milliseconds>) override {
        return toohuman::runtime::GuestKernelObjectWaitResult::Signaled;
    }
    void on_handle_closed() noexcept override {
        callback_called = true;
        ++callback_count;
        remaining_handles = table_.size();
    }
    bool callback_called{};
    std::size_t remaining_handles{};
    std::size_t callback_count{};
private:
    toohuman::runtime::GuestKernelObjectTable& table_;
};
} // namespace

int main() {
    using namespace toohuman::runtime;
    GuestKernelObjectTable objects;
    auto notification = std::make_shared<GuestEventObject>(true, false);
    const auto notification_handle = objects.insert(notification);
    assert(notification_handle);
    assert(objects.wait(*notification_handle, 0ms) == GuestKernelObjectWaitResult::Timeout);
    assert(!notification->set());
    assert(objects.wait(*notification_handle, 0ms) == GuestKernelObjectWaitResult::Signaled);
    assert(objects.wait(*notification_handle, 0ms) == GuestKernelObjectWaitResult::Signaled);
    notification->clear();
    assert(objects.wait(*notification_handle, 0ms) == GuestKernelObjectWaitResult::Timeout);
    auto synchronization = std::make_shared<GuestEventObject>(false, true);
    const auto synchronization_handle = objects.insert(synchronization);
    assert(synchronization_handle && *synchronization_handle != *notification_handle);
    assert(objects.wait(*synchronization_handle, 0ms) == GuestKernelObjectWaitResult::Signaled);
    assert(objects.wait(*synchronization_handle, 0ms) == GuestKernelObjectWaitResult::Timeout);
    assert(!synchronization->set());
    assert(objects.wait(*synchronization_handle, 0ms) == GuestKernelObjectWaitResult::Signaled);
    // Semaphores count available signals; each wait consumes one.
    auto semaphore = std::make_shared<GuestSemaphoreObject>(1u, 3u);
    const auto semaphore_handle = objects.insert(semaphore);
    assert(semaphore_handle);
    assert(semaphore->type() == GuestKernelObjectType::Semaphore);
    assert(objects.wait(*semaphore_handle, 0ms) ==
           GuestKernelObjectWaitResult::Signaled);
    assert(semaphore->count() == 0u);
    assert(objects.wait(*semaphore_handle, 0ms) ==
           GuestKernelObjectWaitResult::Timeout);

    std::uint32_t previous_count = 0xFFFFFFFFu;
    assert(semaphore->release(2u, previous_count));
    assert(previous_count == 0u && semaphore->count() == 2u);
    assert(objects.wait(*semaphore_handle, 0ms) ==
           GuestKernelObjectWaitResult::Signaled);
    assert(objects.wait(*semaphore_handle, 0ms) ==
           GuestKernelObjectWaitResult::Signaled);
    assert(objects.wait(*semaphore_handle, 0ms) ==
           GuestKernelObjectWaitResult::Timeout);
    assert(semaphore->release(3u, previous_count));
    assert(previous_count == 0u && semaphore->count() == 3u);
    assert(!semaphore->release(1u, previous_count));
    assert(previous_count == 3u && semaphore->count() == 3u);
    assert(!semaphore->release(0u, previous_count));

    for (unsigned i = 0; i < 3u; ++i)
        assert(objects.wait(*semaphore_handle, 0ms) ==
               GuestKernelObjectWaitResult::Signaled);
    assert(semaphore->count() == 0u);

    std::atomic<bool> semaphore_waiter_started{false};
    GuestKernelObjectWaitResult semaphore_wait_result =
        GuestKernelObjectWaitResult::InvalidHandle;
    std::thread semaphore_waiter([&] {
        semaphore_waiter_started.store(true, std::memory_order_release);
        semaphore_wait_result = objects.wait(*semaphore_handle, 2s);
    });
    while (!semaphore_waiter_started.load(std::memory_order_acquire))
        std::this_thread::yield();
    assert(semaphore->release(1u, previous_count));
    semaphore_waiter.join();
    assert(semaphore_wait_result == GuestKernelObjectWaitResult::Signaled);
    assert(semaphore->count() == 0u);
    assert(objects.close(*semaphore_handle));

    // Native events carry their guest dispatcher-header address as the object key.
    constexpr GuestKernelHandle native_event_address = 0xA0123200u;
    auto native_event = std::make_shared<GuestEventObject>(
        true, true, native_event_address);
    assert(objects.insert_at(native_event_address, native_event));
    assert(native_event->guest_object_address() == native_event_address);
    assert(objects.wait(native_event_address, 0ms) ==
           GuestKernelObjectWaitResult::Signaled);
    assert(native_event->is_signaled()); // Notification events remain set.
    assert(native_event->reset());
    assert(!native_event->is_signaled());
    assert(objects.close(native_event_address));

    constexpr GuestKernelHandle native_auto_event_address = 0xA0123220u;
    auto native_auto_event = std::make_shared<GuestEventObject>(
        false, true, native_auto_event_address);
    assert(objects.insert_at(native_auto_event_address, native_auto_event));
    assert(objects.wait(native_auto_event_address, 0ms) ==
           GuestKernelObjectWaitResult::Signaled);
    assert(!native_auto_event->is_signaled()); // Synchronization wait consumes state.
    assert(objects.close(native_auto_event_address));

    // Pulse is nonpersistent and releases only waiters queued before it:
    // one for a synchronization event, all for a notification event.
    auto pulse_sync = std::make_shared<GuestEventObject>(false, false);
    const auto pulse_sync_handle = objects.insert(pulse_sync);
    assert(pulse_sync_handle);
    std::atomic<bool> pulse_sync_started{false};
    GuestKernelObjectWaitResult pulse_sync_result =
        GuestKernelObjectWaitResult::InvalidHandle;
    std::thread pulse_sync_waiter([&] {
        pulse_sync_started.store(true, std::memory_order_release);
        pulse_sync_result = objects.wait(*pulse_sync_handle, 2s);
    });
    while (!pulse_sync_started.load(std::memory_order_acquire) ||
           pulse_sync->waiting_count() != 1u)
        std::this_thread::yield();
    assert(!pulse_sync->pulse());
    pulse_sync_waiter.join();
    assert(pulse_sync_result == GuestKernelObjectWaitResult::Signaled);
    assert(objects.wait(*pulse_sync_handle, 0ms) ==
           GuestKernelObjectWaitResult::Timeout);
    assert(objects.close(*pulse_sync_handle));

    auto pulse_notification = std::make_shared<GuestEventObject>(true, false);
    const auto pulse_notification_handle = objects.insert(pulse_notification);
    assert(pulse_notification_handle);
    std::atomic<bool> pulse_notification_started_a{false};
    std::atomic<bool> pulse_notification_started_b{false};
    GuestKernelObjectWaitResult pulse_notification_result_a =
        GuestKernelObjectWaitResult::InvalidHandle;
    GuestKernelObjectWaitResult pulse_notification_result_b =
        GuestKernelObjectWaitResult::InvalidHandle;
    std::thread pulse_notification_waiter_a([&] {
        pulse_notification_started_a.store(true, std::memory_order_release);
        pulse_notification_result_a = objects.wait(*pulse_notification_handle, 2s);
    });
    std::thread pulse_notification_waiter_b([&] {
        pulse_notification_started_b.store(true, std::memory_order_release);
        pulse_notification_result_b = objects.wait(*pulse_notification_handle, 2s);
    });
    while (!pulse_notification_started_a.load(std::memory_order_acquire) ||
           !pulse_notification_started_b.load(std::memory_order_acquire) ||
           pulse_notification->waiting_count() != 2u)
        std::this_thread::yield();
    assert(!pulse_notification->pulse());
    pulse_notification_waiter_a.join();
    pulse_notification_waiter_b.join();
    assert(pulse_notification_result_a == GuestKernelObjectWaitResult::Signaled);
    assert(pulse_notification_result_b == GuestKernelObjectWaitResult::Signaled);
    assert(objects.wait(*pulse_notification_handle, 0ms) ==
           GuestKernelObjectWaitResult::Timeout);
    assert(objects.close(*pulse_notification_handle));

    // Native semaphore objects can be found by their guest KSEMAPHORE address.
    constexpr GuestKernelHandle native_semaphore_address = 0xA0123400u;
    auto native_semaphore = std::make_shared<GuestSemaphoreObject>(
        1u, 2u, native_semaphore_address);
    assert(objects.insert_at(native_semaphore_address, native_semaphore));
    assert(objects.lookup(native_semaphore_address) == native_semaphore);
    assert(native_semaphore->guest_object_address() == native_semaphore_address);
    assert(objects.wait(native_semaphore_address, 0ms) ==
           GuestKernelObjectWaitResult::Signaled);
    assert(objects.close(native_semaphore_address));

    auto retained = objects.lookup(*notification_handle);
    assert(retained == notification);
    assert(objects.close(*notification_handle));
    assert(objects.wait(*notification_handle, 0ms) == GuestKernelObjectWaitResult::InvalidHandle);
    assert(!objects.close(*notification_handle));
    assert(retained->type() == GuestKernelObjectType::Event);
    assert(objects.close(*synchronization_handle));
    assert(objects.size() == 0);
    // Concurrent insert/lookup/close must not allocate duplicate live handles
    // or leave closed records in the process table.
    std::mutex seen_mutex;
    std::unordered_set<GuestKernelHandle> seen_handles;
    std::vector<std::thread> workers;
    for (std::uint32_t worker = 0; worker < 8u; ++worker) {
        workers.emplace_back([&] {
            for (std::uint32_t i = 0; i < 128u; ++i) {
                auto event = std::make_shared<GuestEventObject>(false, false);
                const auto handle = objects.insert(event);
                assert(handle.has_value());
                {
                    std::lock_guard lock(seen_mutex);
                    assert(seen_handles.insert(*handle).second);
                }
                assert(objects.lookup(*handle) == event);
                assert(objects.close(*handle));
                assert(!objects.lookup(*handle));
            }
        });
    }
    for (auto& worker : workers) worker.join();
    assert(objects.size() == 0);

    auto reentrant = std::make_shared<ReentrantCloseObject>(objects);
    const auto reentrant_handle = objects.insert(reentrant);
    assert(reentrant_handle);
    assert(objects.close(*reentrant_handle));
    assert(reentrant->callback_called);
    assert(reentrant->remaining_handles == 0u);
    assert(reentrant->callback_count == 1u);

    // NtDuplicateObject shares an object body across multiple handles. Closing
    // one alias must not run its final-close callback while another remains.
    auto duplicated = std::make_shared<ReentrantCloseObject>(objects);
    const auto original_handle = objects.insert(duplicated);
    assert(original_handle);
    const auto duplicate_handle = objects.insert(duplicated);
    assert(duplicate_handle && *duplicate_handle != *original_handle);
    assert(objects.close(*original_handle));
    assert(!duplicated->callback_called);
    assert(objects.lookup(*duplicate_handle) == duplicated);
    assert(objects.close(*duplicate_handle));
    assert(duplicated->callback_called);
    assert(duplicated->callback_count == 1u);
    assert(duplicated->remaining_handles == 0u);

    // The table's duplicate operation can atomically close the source after
    // inserting its replacement without firing the final-close callback.
    auto atomic_duplicate_object = std::make_shared<ReentrantCloseObject>(objects);
    const auto source_handle = objects.insert(atomic_duplicate_object);
    assert(source_handle);
    const auto same_access_handle = objects.duplicate(*source_handle, false);
    assert(same_access_handle && *same_access_handle != *source_handle);
    assert(objects.lookup(*source_handle) == atomic_duplicate_object);
    assert(objects.close(*source_handle));
    assert(!atomic_duplicate_object->callback_called);

    const auto close_source = objects.duplicate(*same_access_handle, true);
    assert(close_source);
    assert(!objects.lookup(*same_access_handle));
    assert(objects.lookup(*close_source) == atomic_duplicate_object);
    assert(!atomic_duplicate_object->callback_called);
    assert(objects.close(*close_source));
    assert(atomic_duplicate_object->callback_called);
    assert(atomic_duplicate_object->callback_count == 1u);
    assert(!objects.duplicate(0xDEADBEEFu, false));

    // ABI-specific handles may expose a native KTHREAD address, but must
    // reject the null value and collisions with existing objects.
    auto native_object = std::make_shared<GuestEventObject>(true, false);
    constexpr GuestKernelHandle native_thread_address = 0xA0123000u;
    assert(objects.insert_at(native_thread_address, native_object));
    assert(objects.lookup(native_thread_address) == native_object);
    assert(!objects.insert_at(native_thread_address, notification));
    assert(!objects.insert_at(0u, notification));
    assert(objects.close(native_thread_address));

    // Process teardown clears all handles atomically and invokes callbacks
    // after releasing the table lock.
    auto clear_callback = std::make_shared<ReentrantCloseObject>(objects);
    assert(objects.insert(clear_callback));
    objects.clear();
    assert(objects.size() == 0u);
    assert(clear_callback->callback_called);
    assert(clear_callback->remaining_handles == 0u);

    assert(!objects.insert(nullptr));
    return 0;
}
