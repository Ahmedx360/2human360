#include "kernel/guest_kernel_objects.hpp"
#include <cassert>
#include <chrono>
#include <memory>
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
    assert(!objects.insert(nullptr));
    return 0;
}
