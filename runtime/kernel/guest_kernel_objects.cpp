#include "kernel/guest_kernel_objects.hpp"
namespace toohuman::runtime {
GuestEventObject::GuestEventObject(bool manual_reset, bool initially_signaled)
    : manual_reset_(manual_reset), signaled_(initially_signaled) {}
GuestKernelObjectType GuestEventObject::type() const noexcept { return GuestKernelObjectType::Event; }
GuestKernelObjectWaitResult GuestEventObject::wait(std::optional<std::chrono::milliseconds> timeout) {
    std::unique_lock lock(mutex_);
    const auto ready = [&] { return signaled_; };
    if (!signaled_) {
        if (timeout) {
            if (!condition_.wait_for(lock, *timeout, ready)) return GuestKernelObjectWaitResult::Timeout;
        } else condition_.wait(lock, ready);
    }
    if (!manual_reset_) signaled_ = false;
    return GuestKernelObjectWaitResult::Signaled;
}
bool GuestEventObject::set() {
    bool previous = false;
    {
        std::lock_guard lock(mutex_);
        previous = signaled_;
        signaled_ = true;
    }
    if (manual_reset_) condition_.notify_all();
    else condition_.notify_one();
    return previous;
}
void GuestEventObject::clear() {
    std::lock_guard lock(mutex_);
    signaled_ = false;
}
std::optional<GuestKernelHandle> GuestKernelObjectTable::insert(std::shared_ptr<GuestKernelObject> object) {
    if (!object) return std::nullopt;
    std::lock_guard lock(mutex_);
    for (std::uint64_t n = 0; n < 0x3FFF0000ull; ++n) {
        const auto handle = next_handle_;
        next_handle_ += 4u;
        if (next_handle_ < 0x1000u) next_handle_ = 0x1000u;
        if (handle && objects_.emplace(handle, object).second) return handle;
    }
    return std::nullopt;
}
bool GuestKernelObjectTable::insert_at(
    GuestKernelHandle handle, std::shared_ptr<GuestKernelObject> object) {
    if (handle == 0 || !object) return false;
    std::lock_guard lock(mutex_);
    return objects_.emplace(handle, std::move(object)).second;
}
std::shared_ptr<GuestKernelObject> GuestKernelObjectTable::lookup(GuestKernelHandle handle) const {
    std::lock_guard lock(mutex_);
    const auto it = objects_.find(handle);
    return it == objects_.end() ? nullptr : it->second;
}
bool GuestKernelObjectTable::close(GuestKernelHandle handle) {
    std::shared_ptr<GuestKernelObject> object;
    {
        std::lock_guard lock(mutex_);
        const auto it = objects_.find(handle);
        if (it == objects_.end()) return false;
        object = std::move(it->second);
        objects_.erase(it);
    }
    // Callbacks may lock object state or free guest allocations. Never call
    // them while holding the process handle-table mutex.
    object->on_handle_closed();
    return true;
}
GuestKernelObjectWaitResult GuestKernelObjectTable::wait(
    GuestKernelHandle handle, std::optional<std::chrono::milliseconds> timeout) const {
    auto object = lookup(handle);
    return object ? object->wait(timeout) : GuestKernelObjectWaitResult::InvalidHandle;
}
std::size_t GuestKernelObjectTable::size() const {
    std::lock_guard lock(mutex_);
    return objects_.size();
}
GuestKernelObjectTable& process_kernel_objects() noexcept {
    static GuestKernelObjectTable table;
    return table;
}
} // namespace toohuman::runtime
