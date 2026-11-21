#include "ppc/guest_thread_manager.hpp"

#include <utility>

namespace toohuman::runtime {
namespace {

void set_error(std::string* error, const char* message) {
    if (error) *error = message;
}

} // namespace

struct GuestThreadManager::Record {
    explicit Record(GuestThreadStartup value, Entry callback,
                    std::uint32_t initial_suspend_count)
        : startup(std::move(value)),
          entry(std::move(callback)),
          suspend_count(initial_suspend_count),
          state(initial_suspend_count != 0
                    ? GuestThreadLifecycleState::Suspended
                    : GuestThreadLifecycleState::Running) {}

    GuestThreadStartup startup;
    Entry entry;
    mutable std::mutex mutex;
    std::condition_variable_any condition;
    std::jthread worker;
    GuestThreadLifecycleState state{GuestThreadLifecycleState::Running};
    std::uint32_t suspend_count{};
    std::uint32_t exit_code{kStillActive};
};

GuestThreadManager::~GuestThreadManager() {
    std::vector<std::shared_ptr<Record>> workers;
    {
        std::lock_guard lock(mutex_);
        shutting_down_ = true;
        workers = workers_;
        workers_.clear();
        handles_.clear();
    }

    // Release workers waiting for their initial resume. Running executors must
    // observe the stop token and return.
    for (const auto& record : workers) {
        record->worker.request_stop();
        record->condition.notify_all();
    }
    for (const auto& record : workers) {
        if (record->worker.joinable()) record->worker.join();
    }
}

void GuestThreadManager::reap_completed_workers() {
    std::vector<std::shared_ptr<Record>> completed;
    {
        std::lock_guard manager_lock(mutex_);
        auto it = workers_.begin();
        while (it != workers_.end()) {
            bool is_completed = false;
            {
                std::lock_guard record_lock((*it)->mutex);
                is_completed = (*it)->state == GuestThreadLifecycleState::Completed;
            }
            if (is_completed) {
                completed.push_back(*it);
                it = workers_.erase(it);
            } else {
                ++it;
            }
        }
    }

    // Join outside the manager lock. Completed is published just before the
    // worker returns, so this only covers its short exit epilogue.
    for (const auto& record : completed) {
        if (record->worker.joinable()) record->worker.join();
    }
}

std::optional<GuestThreadHandle> GuestThreadManager::create(
    GuestThreadStartup startup, Entry entry, bool initially_suspended,
    std::string* error) {
    if (!entry) {
        set_error(error, "Guest thread requires a non-empty executor");
        return std::nullopt;
    }

    reap_completed_workers();
    auto record = std::make_shared<Record>(
        std::move(startup), std::move(entry), initially_suspended ? 1u : 0u);

    std::lock_guard manager_lock(mutex_);
    if (shutting_down_) {
        set_error(error, "Guest thread manager is shutting down");
        return std::nullopt;
    }

    GuestThreadHandle handle = 0;
    for (std::uint64_t attempts = 0; attempts < 0x3FFF0000ull; ++attempts) {
        handle = next_handle_;
        next_handle_ += 4u;
        if (next_handle_ < 0x20000u) next_handle_ = 0x20000u;
        if (handle != 0 && handles_.find(handle) == handles_.end()) break;
        handle = 0;
    }
    if (handle == 0) {
        set_error(error, "Guest thread handle space is exhausted");
        return std::nullopt;
    }

    handles_.emplace(handle, record);
    workers_.push_back(record);

    // Holding the manager lock prevents teardown/reaping from racing jthread
    // assignment. The worker itself never acquires the manager lock.
    try {
    record->worker = std::jthread([record](std::stop_token stop) {
        {
            std::unique_lock lock(record->mutex);
            const bool resumed = record->condition.wait(
                lock, stop, [&] { return record->suspend_count == 0; });
            if (!resumed || stop.stop_requested()) {
                record->exit_code = kStatusThreadIsTerminating;
                record->state = GuestThreadLifecycleState::Completed;
                lock.unlock();
                record->condition.notify_all();
                return;
            }
            record->state = GuestThreadLifecycleState::Running;
        }
        record->condition.notify_all();

        std::uint32_t exit_code = kStatusUnsuccessful;
        try {
            exit_code = record->entry(record->startup, stop);
        } catch (...) {
            // Never allow a C++ exception to escape a host thread entry point.
            exit_code = kStatusUnsuccessful;
        }

        {
            std::lock_guard lock(record->mutex);
            record->exit_code = exit_code;
            record->state = GuestThreadLifecycleState::Completed;
        }
        record->condition.notify_all();
    });
    } catch (...) {
        handles_.erase(handle);
        workers_.pop_back();
        set_error(error, "Could not start the host worker thread");
        return std::nullopt;
    }

    return handle;
}

bool GuestThreadManager::resume(GuestThreadHandle handle,
                                std::uint32_t* previous_count,
                                std::string* error) {
    reap_completed_workers();

    std::shared_ptr<Record> record;
    {
        std::lock_guard lock(mutex_);
        const auto it = handles_.find(handle);
        if (it == handles_.end()) {
            set_error(error, "Guest thread handle is invalid or closed");
            return false;
        }
        record = it->second;
    }

    {
        std::lock_guard lock(record->mutex);
        if (previous_count) *previous_count = record->suspend_count;
        if (record->state == GuestThreadLifecycleState::Completed) return true;
        if (record->suspend_count != 0) --record->suspend_count;
    }
    record->condition.notify_all();
    return true;
}

GuestThreadWaitResult GuestThreadManager::wait(
    GuestThreadHandle handle,
    std::optional<std::chrono::milliseconds> timeout) {
    reap_completed_workers();

    std::shared_ptr<Record> record;
    {
        std::lock_guard lock(mutex_);
        const auto it = handles_.find(handle);
        if (it == handles_.end()) return GuestThreadWaitResult::InvalidHandle;
        record = it->second;
    }

    std::unique_lock lock(record->mutex);
    const auto completed = [&] {
        return record->state == GuestThreadLifecycleState::Completed;
    };
    if (timeout) {
        if (!record->condition.wait_for(lock, *timeout, completed))
            return GuestThreadWaitResult::Timeout;
    } else {
        record->condition.wait(lock, completed);
    }
    return GuestThreadWaitResult::Signaled;
}

bool GuestThreadManager::get_state(
    GuestThreadHandle handle, GuestThreadLifecycleState& state,
    std::uint32_t* suspend_count) const {
    std::shared_ptr<Record> record;
    {
        std::lock_guard lock(mutex_);
        const auto it = handles_.find(handle);
        if (it == handles_.end()) return false;
        record = it->second;
    }

    std::lock_guard lock(record->mutex);
    state = record->state;
    if (suspend_count) *suspend_count = record->suspend_count;
    return true;
}

bool GuestThreadManager::get_exit_code(GuestThreadHandle handle,
                                       std::uint32_t& exit_code) const {
    std::shared_ptr<Record> record;
    {
        std::lock_guard lock(mutex_);
        const auto it = handles_.find(handle);
        if (it == handles_.end()) return false;
        record = it->second;
    }

    std::lock_guard lock(record->mutex);
    exit_code = record->state == GuestThreadLifecycleState::Completed
        ? record->exit_code : kStillActive;
    return true;
}

bool GuestThreadManager::close_handle(GuestThreadHandle handle) {
    reap_completed_workers();
    std::lock_guard lock(mutex_);
    return handles_.erase(handle) != 0;
}

} // namespace toohuman::runtime
