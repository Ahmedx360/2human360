#include "kernel/guest_kernel_objects.hpp"
#include <cassert>
#include <chrono>
#include <memory>
#include <mutex>
#include <thread>
#include <unordered_set>
#include <vector>
using namespace std::chrono_literals;
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

    assert(!objects.insert(nullptr));
    return 0;
}
