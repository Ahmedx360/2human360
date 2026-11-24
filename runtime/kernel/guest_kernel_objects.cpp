#include "kernel/guest_kernel_objects.hpp"

#include <algorithm>
#include <atomic>
#include <functional>
#include <thread>
#include <utility>
#include <vector>

namespace toohuman::runtime {
namespace {
struct GuestKernelObjectWaitChanges {
    std::mutex mutex;
    std::condition_variable condition;
    std::uint64_t epoch{};
    std::atomic<std::uint32_t> waiters{};

    void notify() noexcept {
        if (waiters.load() == 0u) return;
        try {
            std::lock_guard lock(mutex);
            ++epoch;
        } catch (...) {
            return;
        }
        condition.notify_all();
    }
};

GuestKernelObjectWaitChanges& guest_kernel_object_wait_changes() {
    static GuestKernelObjectWaitChanges changes;
    return changes;
}
} // namespace

void notify_guest_kernel_object_waiters() noexcept {
    guest_kernel_object_wait_changes().notify();
}

GuestEventObject::GuestEventObject(
    bool manual_reset, bool initially_signaled,
    std::uint32_t guest_object_address)
    : manual_reset_(manual_reset),
      guest_object_address_(guest_object_address),
      signaled_(initially_signaled) {}

GuestKernelObjectType GuestEventObject::type() const noexcept {
    return GuestKernelObjectType::Event;
}

GuestKernelObjectWaitResult GuestEventObject::wait(
    std::optional<std::chrono::milliseconds> timeout) {
    std::unique_lock lock(mutex_);
    const auto initial_pulse_generation = pulse_generation_;
    const bool queued = !signaled_;
    if (queued) ++waiting_count_;

    const auto ready = [&] {
        return signaled_ ||
               (pulse_generation_ != initial_pulse_generation && pulse_tokens_ != 0);
    };
    if (!ready()) {
        bool awakened = true;
        if (timeout)
            awakened = condition_.wait_for(lock, *timeout, ready);
        else
            condition_.wait(lock, ready);
        if (!awakened) {
            if (queued) --waiting_count_;
            return GuestKernelObjectWaitResult::Timeout;
        }
    }

    if (queued) --waiting_count_;
    if (pulse_generation_ != initial_pulse_generation && pulse_tokens_ != 0) {
        --pulse_tokens_;
        return GuestKernelObjectWaitResult::Signaled;
    }
    if (!signaled_)
        return GuestKernelObjectWaitResult::Timeout;
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
    notify_guest_kernel_object_waiters();
    return previous;
}

bool GuestEventObject::reset() {
    std::lock_guard lock(mutex_);
    const bool previous = signaled_;
    signaled_ = false;
    return previous;
}

bool GuestEventObject::pulse() {
    bool previous = false;
    bool wake_waiters = false;
    {
        std::lock_guard lock(mutex_);
        previous = signaled_;
        signaled_ = false;
        ++pulse_generation_;
        pulse_tokens_ = manual_reset_ ? waiting_count_
                                      : (waiting_count_ != 0 ? 1u : 0u);
        wake_waiters = pulse_tokens_ != 0;
    }
    if (wake_waiters) {
        if (manual_reset_) condition_.notify_all();
        else condition_.notify_one();
    }
    return previous;
}

void GuestEventObject::clear() {
    (void)reset();
}

std::size_t GuestEventObject::waiting_count() noexcept {
    std::lock_guard lock(mutex_);
    return waiting_count_;
}

bool GuestEventObject::is_signaled() noexcept {
    std::lock_guard lock(mutex_);
    return signaled_;
}

GuestMutantObject::GuestMutantObject(bool initially_owned) {
    if (initially_owned) {
        owner_ = std::this_thread::get_id();
        recursion_count_ = 1u;
    }
}

GuestKernelObjectType GuestMutantObject::type() const noexcept {
    return GuestKernelObjectType::Mutant;
}

GuestKernelObjectWaitResult GuestMutantObject::wait(
    std::optional<std::chrono::milliseconds> timeout) {
    std::unique_lock lock(mutex_);
    const auto current = std::this_thread::get_id();
    if (recursion_count_ != 0 && owner_ == current) {
        ++recursion_count_;
        return GuestKernelObjectWaitResult::Signaled;
    }

    const auto available = [&] { return recursion_count_ == 0; };
    if (!available()) {
        if (timeout) {
            if (!condition_.wait_for(lock, *timeout, available))
                return GuestKernelObjectWaitResult::Timeout;
        } else {
            condition_.wait(lock, available);
        }
    }
    owner_ = current;
    recursion_count_ = 1u;
    return GuestKernelObjectWaitResult::Signaled;
}

bool GuestMutantObject::release() noexcept {
    {
        std::lock_guard lock(mutex_);
        if (recursion_count_ == 0 || owner_ != std::this_thread::get_id())
            return false;
        --recursion_count_;
        if (recursion_count_ != 0)
            return true;
        owner_ = {};
    }
    condition_.notify_one();
    notify_guest_kernel_object_waiters();
    return true;
}

std::uint32_t GuestMutantObject::recursion_count() noexcept {
    std::lock_guard lock(mutex_);
    return recursion_count_;
}

GuestTimerObject::GuestTimerObject(bool manual_reset)
    : manual_reset_(manual_reset) {}

GuestKernelObjectType GuestTimerObject::type() const noexcept {
    return GuestKernelObjectType::Timer;
}

std::chrono::steady_clock::time_point GuestTimerObject::add_saturated(
    std::chrono::steady_clock::time_point now,
    std::chrono::milliseconds delay) noexcept {
    if (delay.count() < 0)
        delay = std::chrono::milliseconds::zero();
    const auto max_delay = std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::steady_clock::time_point::max() - now);
    if (delay >= max_delay)
        return std::chrono::steady_clock::time_point::max();
    return now + std::chrono::duration_cast<
        std::chrono::steady_clock::duration>(delay);
}

void GuestTimerObject::set_timer(std::chrono::milliseconds due_delay,
                                 std::uint32_t period_ms) {
    {
        std::lock_guard lock(mutex_);
        signaled_ = false;
        armed_ = true;
        period_ms_ = period_ms;
        due_time_ = add_saturated(std::chrono::steady_clock::now(), due_delay);
    }
    condition_.notify_all();
    notify_guest_kernel_object_waiters();
}

bool GuestTimerObject::cancel() noexcept {
    bool was_armed = false;
    {
        std::lock_guard lock(mutex_);
        was_armed = armed_;
        armed_ = false;
        period_ms_ = 0;
    }
    condition_.notify_all();
    notify_guest_kernel_object_waiters();
    return was_armed;
}

bool GuestTimerObject::is_armed() noexcept {
    std::lock_guard lock(mutex_);
    return armed_;
}

GuestKernelObjectWaitResult GuestTimerObject::wait(
    std::optional<std::chrono::milliseconds> timeout) {
    std::unique_lock lock(mutex_);
    const auto start = std::chrono::steady_clock::now();
    const auto timeout_deadline = timeout
        ? add_saturated(start, *timeout)
        : std::chrono::steady_clock::time_point::max();

    for (;;) {
        const auto now = std::chrono::steady_clock::now();
        if (armed_ && now >= due_time_) {
            signaled_ = true;
            if (period_ms_ == 0u) {
                armed_ = false;
            } else {
                due_time_ = add_saturated(
                    now, std::chrono::milliseconds(period_ms_));
            }
            condition_.notify_all();
        }

        if (signaled_) {
            if (!manual_reset_)
                signaled_ = false;
            return GuestKernelObjectWaitResult::Signaled;
        }
        if (timeout && now >= timeout_deadline)
            return GuestKernelObjectWaitResult::Timeout;

        auto wake_deadline = timeout_deadline;
        if (armed_ && due_time_ < wake_deadline)
            wake_deadline = due_time_;
        if (wake_deadline == std::chrono::steady_clock::time_point::max())
            condition_.wait(lock);
        else
            condition_.wait_until(lock, wake_deadline);
    }
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
    notify_guest_kernel_object_waiters();
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


GuestKernelObjectWaitResult GuestKernelObjectTable::wait_multiple(
    std::span<const GuestKernelHandle> handles, bool wait_all,
    std::optional<std::chrono::milliseconds> timeout,
    std::size_t* signaled_index) const {
    if (handles.empty() || handles.size() > 64u)
        return GuestKernelObjectWaitResult::InvalidHandle;

    // Resolve every handle up front and retain the objects for the duration of
    // the wait. Closing a handle after this point does not invalidate an
    // already-started kernel wait.
    std::vector<std::shared_ptr<GuestKernelObject>> objects;
    objects.reserve(handles.size());
    {
        std::lock_guard lock(mutex_);
        for (const auto handle : handles) {
            const auto it = objects_.find(handle);
            if (it == objects_.end())
                return GuestKernelObjectWaitResult::InvalidHandle;
            objects.push_back(it->second);
        }
    }
    return wait_multiple_objects(objects, wait_all, timeout, signaled_index);
}

GuestKernelObjectWaitResult GuestKernelObjectTable::wait_multiple_objects(
    std::span<const std::shared_ptr<GuestKernelObject>> objects, bool wait_all,
    std::optional<std::chrono::milliseconds> timeout,
    std::size_t* signaled_index) const {
    if (objects.empty() || objects.size() > 64u)
        return GuestKernelObjectWaitResult::InvalidHandle;
    for (const auto& object : objects) {
        if (!object) return GuestKernelObjectWaitResult::InvalidHandle;
    }
    if (wait_all) {
        for (std::size_t i = 0; i < objects.size(); ++i) {
            for (std::size_t j = i + 1; j < objects.size(); ++j) {
                if (objects[i].get() == objects[j].get())
                    return GuestKernelObjectWaitResult::InvalidHandle;
            }
        }
    }

    // Acquire supported dispatcher objects in a stable lock order. WaitAll
    // observes and consumes the complete set atomically.
    std::vector<std::mutex*> object_mutexes;
    object_mutexes.reserve(objects.size());
    for (const auto& object : objects) {
        if (auto event = std::dynamic_pointer_cast<GuestEventObject>(object))
            object_mutexes.push_back(&event->mutex_);
        else if (auto semaphore = std::dynamic_pointer_cast<GuestSemaphoreObject>(object))
            object_mutexes.push_back(&semaphore->mutex_);
        else if (auto mutant = std::dynamic_pointer_cast<GuestMutantObject>(object))
            object_mutexes.push_back(&mutant->mutex_);
        else if (auto timer = std::dynamic_pointer_cast<GuestTimerObject>(object))
            object_mutexes.push_back(&timer->mutex_);
    }
    std::sort(object_mutexes.begin(), object_mutexes.end(),
              std::less<std::mutex*>{});
    object_mutexes.erase(
        std::unique(object_mutexes.begin(), object_mutexes.end()),
        object_mutexes.end());

    using Clock = std::chrono::steady_clock;
    const auto start = Clock::now();
    auto deadline = Clock::time_point::max();
    if (timeout) {
        if (*timeout <= std::chrono::milliseconds::zero()) {
            deadline = start;
        } else {
            const auto max_delay =
                std::chrono::duration_cast<std::chrono::milliseconds>(
                    Clock::time_point::max() - start);
            if (*timeout >= max_delay)
                deadline = Clock::time_point::max();
            else
                deadline = start + std::chrono::duration_cast<Clock::duration>(*timeout);
        }
    }

    auto& changes = guest_kernel_object_wait_changes();
    changes.waiters.fetch_add(1u);
    struct WaiterRegistration {
        GuestKernelObjectWaitChanges& changes;
        ~WaiterRegistration() {
            changes.waiters.fetch_sub(1u);
        }
    } registration{changes};

    const auto current_thread = std::this_thread::get_id();
    for (;;) {
        // Snapshot before checking object state. A signal between this snapshot
        // and the wait below changes the epoch, preventing a lost wake-up.
        std::uint64_t observed_epoch = 0;
        {
            std::lock_guard lock(changes.mutex);
            observed_epoch = changes.epoch;
        }

        auto next_timer_due = Clock::time_point::max();
        bool timer_state_changed = false;
        bool invalid_object = false;
        bool signaled = false;
        std::size_t ready_index = 0;
        {
            std::vector<std::unique_lock<std::mutex>> locks;
            locks.reserve(object_mutexes.size());
            for (auto* object_mutex : object_mutexes)
                locks.emplace_back(*object_mutex);

            const auto now = Clock::now();
            const auto is_ready = [&](const std::shared_ptr<GuestKernelObject>& object) -> bool {
                if (auto event = std::dynamic_pointer_cast<GuestEventObject>(object))
                    return event->signaled_;

                if (auto semaphore = std::dynamic_pointer_cast<GuestSemaphoreObject>(object))
                    return semaphore->count_ != 0;

                if (auto mutant = std::dynamic_pointer_cast<GuestMutantObject>(object))
                    return mutant->recursion_count_ == 0 ||
                           mutant->owner_ == current_thread;

                if (auto timer = std::dynamic_pointer_cast<GuestTimerObject>(object)) {
                    if (timer->armed_ && now >= timer->due_time_) {
                        timer->signaled_ = true;
                        if (timer->period_ms_ == 0u) {
                            timer->armed_ = false;
                        } else {
                            timer->due_time_ = GuestTimerObject::add_saturated(
                                now, std::chrono::milliseconds(timer->period_ms_));
                        }
                        timer->condition_.notify_all();
                        timer_state_changed = true;
                    }
                    if (!timer->signaled_ && timer->armed_ &&
                        timer->due_time_ < next_timer_due) {
                        next_timer_due = timer->due_time_;
                    }
                    return timer->signaled_;
                }

                // Thread objects are level-triggered and remain signaled after
                // completion. Other object kinds must provide a nonblocking probe.
                const auto result = object->wait(std::chrono::milliseconds::zero());
                if (result == GuestKernelObjectWaitResult::InvalidHandle)
                    invalid_object = true;
                return result == GuestKernelObjectWaitResult::Signaled;
            };

            const auto consume = [&](const std::shared_ptr<GuestKernelObject>& object) {
                if (auto event = std::dynamic_pointer_cast<GuestEventObject>(object)) {
                    if (!event->manual_reset_) event->signaled_ = false;
                } else if (auto semaphore =
                               std::dynamic_pointer_cast<GuestSemaphoreObject>(object)) {
                    --semaphore->count_;
                } else if (auto mutant =
                               std::dynamic_pointer_cast<GuestMutantObject>(object)) {
                    if (mutant->recursion_count_ == 0) {
                        mutant->owner_ = current_thread;
                        mutant->recursion_count_ = 1u;
                    } else {
                        ++mutant->recursion_count_;
                    }
                } else if (auto timer = std::dynamic_pointer_cast<GuestTimerObject>(object)) {
                    if (!timer->manual_reset_) timer->signaled_ = false;
                }
            };

            if (wait_all) {
                bool all_ready = true;
                for (const auto& object : objects) {
                    if (!is_ready(object)) all_ready = false;
                }
                if (invalid_object)
                    return GuestKernelObjectWaitResult::InvalidHandle;
                if (all_ready) {
                    for (const auto& object : objects) consume(object);
                    signaled = true;
                }
            } else {
                for (std::size_t i = 0; i < objects.size(); ++i) {
                    if (is_ready(objects[i])) {
                        if (invalid_object)
                            return GuestKernelObjectWaitResult::InvalidHandle;
                        consume(objects[i]);
                        ready_index = i;
                        signaled = true;
                        break;
                    }
                    if (invalid_object)
                        return GuestKernelObjectWaitResult::InvalidHandle;
                }
            }
        } // Release every dispatcher-object lock before notifying or sleeping.

        if (timer_state_changed)
            notify_guest_kernel_object_waiters();
        if (signaled) {
            if (signaled_index) *signaled_index = ready_index;
            return GuestKernelObjectWaitResult::Signaled;
        }

        const auto now = Clock::now();
        if (timeout && now >= deadline)
            return GuestKernelObjectWaitResult::Timeout;
        auto wake_deadline = deadline;
        if (next_timer_due < wake_deadline)
            wake_deadline = next_timer_due;

        std::unique_lock lock(changes.mutex);
        const auto changed = [&] { return changes.epoch != observed_epoch; };
        if (changed())
            continue;
        if (wake_deadline == Clock::time_point::max()) {
            changes.condition.wait(lock, changed);
        } else {
            // A timer due-time or the caller timeout wakes this wait. Re-enter
            // the loop to check readiness before deciding that the timeout won.
            (void)changes.condition.wait_until(lock, wake_deadline, changed);
        }
    }
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
