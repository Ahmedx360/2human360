#include "kernel/guest_kernel_objects.hpp"
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
