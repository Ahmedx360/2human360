#include "kernel/guest_kernel_objects.hpp"

#include <utility>
#include <vector>

namespace toohuman::runtime {

GuestEventObject::GuestEventObject(bool manual_reset, bool initially_signaled)
    : manual_reset_(manual_reset), signaled_(initially_signaled) {}

GuestKernelObjectType GuestEventObject::type() const noexcept {
    return GuestKernelObjectType::Event;
}

GuestKernelObjectWaitResult GuestEventObject::wait(
    std::optional<std::chrono::milliseconds> timeout) {
    std::unique_lock lock(mutex_);
    const auto ready = [&] { return signaled_; };
    if (!signaled_) {
        if (timeout) {
            if (!condition_.wait_for(lock, *timeout, ready))
                return GuestKernelObjectWaitResult::Timeout;
        } else {
            condition_.wait(lock, ready);
        }
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

GuestSemaphoreObject::GuestSemaphoreObject(
    std::uint32_t initial_count, std::uint32_t maximum_count,
    std::uint32_t guest_object_address)
    : count_(initial_count), maximum_count_(maximum_count),
      guest_object_address_(guest_object_address) {}

GuestKernelObjectType GuestSemaphoreObject::type() const noexcept {
    return GuestKernelObjectType::Semaphore;
}

GuestKernelObjectWaitResult GuestSemaphoreObject::wait(
    std::optional<std::chrono::milliseconds> timeout) {
    std::unique_lock lock(mutex_);
    const auto ready = [&] { return count_ != 0; };
    if (!ready()) {
        if (timeout) {
            if (!condition_.wait_for(lock, *timeout, ready))
                return GuestKernelObjectWaitResult::Timeout;
        } else {
            condition_.wait(lock, ready);
        }
    }
    --count_;
    return GuestKernelObjectWaitResult::Signaled;
}

bool GuestSemaphoreObject::release(
    std::uint32_t adjustment, std::uint32_t& previous_count) noexcept {
    {
        std::lock_guard lock(mutex_);
        previous_count = count_;
        if (adjustment == 0 || count_ > maximum_count_ ||
            adjustment > maximum_count_ - count_)
            return false;
        count_ += adjustment;
    }
    if (adjustment == 1u) condition_.notify_one();
    else condition_.notify_all();
    return true;
}

std::uint32_t GuestSemaphoreObject::count() const noexcept {
    std::lock_guard lock(mutex_);
    return count_;
}

GuestKernelObjectTable::~GuestKernelObjectTable() {
    clear();
}

bool GuestKernelObjectTable::add_handle_reference_locked(
    const std::shared_ptr<GuestKernelObject>& object) {
    auto it = object_handle_states_.find(object.get());
    if (it != object_handle_states_.end()) {
        if (it->second.object.expired()) {
            object_handle_states_.erase(it);
        } else {
            if (it->second.closed) return false;
            ++it->second.open_handles;
            return true;
        }
    }
    object_handle_states_.emplace(
        object.get(), ObjectHandleState{object, 1u, false});
    return true;
}

std::optional<GuestKernelHandle> GuestKernelObjectTable::insert(
    std::shared_ptr<GuestKernelObject> object) {
    if (!object) return std::nullopt;
    std::lock_guard lock(mutex_);

    for (std::uint64_t attempts = 0; attempts < 0x3FFF0000ull; ++attempts) {
        const auto handle = next_handle_;
        next_handle_ += 4u;
        if (next_handle_ < 0x1000u) next_handle_ = 0x1000u;
        if (handle == 0 || objects_.contains(handle)) continue;
        if (!add_handle_reference_locked(object)) return std::nullopt;
        objects_.emplace(handle, object);
        return handle;
    }
    return std::nullopt;
}

bool GuestKernelObjectTable::insert_at(
    GuestKernelHandle handle, std::shared_ptr<GuestKernelObject> object) {
    if (handle == 0 || !object) return false;
    std::lock_guard lock(mutex_);
    if (objects_.contains(handle)) return false;
    if (!add_handle_reference_locked(object)) return false;
    objects_.emplace(handle, std::move(object));
    return true;
}

std::shared_ptr<GuestKernelObject> GuestKernelObjectTable::lookup(
    GuestKernelHandle handle) const {
    std::lock_guard lock(mutex_);
    const auto it = objects_.find(handle);
    return it == objects_.end() ? nullptr : it->second;
}

bool GuestKernelObjectTable::close(GuestKernelHandle handle) {
    std::shared_ptr<GuestKernelObject> object;
    bool last_handle = false;
    {
        std::lock_guard lock(mutex_);
        const auto it = objects_.find(handle);
        if (it == objects_.end()) return false;
        object = std::move(it->second);
        objects_.erase(it);

        const auto state = object_handle_states_.find(object.get());
        if (state != object_handle_states_.end() && state->second.open_handles != 0) {
            --state->second.open_handles;
            if (state->second.open_handles == 0 && !state->second.closed) {
                state->second.closed = true;
                last_handle = true;
            }
        }
    }
    // Notify only when the final table handle is gone. Do not call object
    // callbacks under the table mutex: they may release guest heaps or re-enter.
    if (last_handle) object->on_handle_closed();
    return true;
}

std::optional<GuestKernelHandle> GuestKernelObjectTable::duplicate(
    GuestKernelHandle source, bool close_source) {
    std::lock_guard lock(mutex_);
    const auto source_it = objects_.find(source);
    if (source_it == objects_.end()) return std::nullopt;
    const auto object = source_it->second;

    std::optional<GuestKernelHandle> duplicate_handle;
    for (std::uint64_t attempts = 0; attempts < 0x3FFF0000ull; ++attempts) {
        const auto candidate = next_handle_;
        next_handle_ += 4u;
        if (next_handle_ < 0x1000u) next_handle_ = 0x1000u;
        if (candidate == 0 || objects_.contains(candidate)) continue;
        if (!add_handle_reference_locked(object)) return std::nullopt;
        objects_.emplace(candidate, object);
        duplicate_handle = candidate;
        break;
    }
    if (!duplicate_handle) return std::nullopt;

    if (close_source) {
        // emplace() may rehash the unordered_map and invalidate source_it.
        objects_.erase(source);
        const auto state = object_handle_states_.find(object.get());
        if (state != object_handle_states_.end() &&
            state->second.open_handles != 0) {
            --state->second.open_handles;
            // The just-created duplicate keeps at least one table handle open.
            if (state->second.open_handles == 0 && !state->second.closed)
                state->second.closed = true;
        }
    }
    return duplicate_handle;
}


bool GuestKernelObjectTable::close_object(
    const std::shared_ptr<GuestKernelObject>& object) {
    if (!object) return false;
    bool removed = false;
    bool notify = false;
    {
        std::lock_guard lock(mutex_);
        for (auto it = objects_.begin(); it != objects_.end();) {
            if (it->second.get() == object.get()) {
                it = objects_.erase(it);
                removed = true;
            } else {
                ++it;
            }
        }
        const auto state = object_handle_states_.find(object.get());
        if (state != object_handle_states_.end() &&
            state->second.open_handles != 0) {
            state->second.open_handles = 0;
            if (!state->second.closed) {
                state->second.closed = true;
                notify = true;
            }
        }
    }
    if (notify) object->on_handle_closed();
    return removed;
}

void GuestKernelObjectTable::clear() {
    std::vector<std::shared_ptr<GuestKernelObject>> notify;
    {
        std::lock_guard lock(mutex_);
        notify.reserve(object_handle_states_.size());
        for (auto& [raw, state] : object_handle_states_) {
            (void)raw;
            if (state.open_handles != 0 && !state.closed) {
                state.open_handles = 0;
                state.closed = true;
                if (auto object = state.object.lock())
                    notify.push_back(std::move(object));
            }
        }
        objects_.clear();
    }
    for (const auto& object : notify) object->on_handle_closed();
}

GuestKernelObjectWaitResult GuestKernelObjectTable::wait(
    GuestKernelHandle handle,
    std::optional<std::chrono::milliseconds> timeout) const {
    auto object = lookup(handle);
    return object ? object->wait(timeout)
                  : GuestKernelObjectWaitResult::InvalidHandle;
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
