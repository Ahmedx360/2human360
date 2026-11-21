#include "ppc/guest_thread_manager.hpp"
#include <utility>
namespace toohuman::runtime {
namespace {
void set_error(std::string* error, const char* message) {
    if (error) *error = message;
}
}
struct GuestThreadManager::Record final : GuestKernelObject {
    explicit Record(GuestThreadStartup value, Entry callback, std::uint32_t initial_suspend_count)
        : startup(std::move(value)), entry(std::move(callback)),
          suspend_count(initial_suspend_count),
          state(initial_suspend_count ? GuestThreadLifecycleState::Suspended
                                      : GuestThreadLifecycleState::Running) {}
    [[nodiscard]] GuestKernelObjectType type() const noexcept override {
        return GuestKernelObjectType::Thread;
    }
    [[nodiscard]] GuestKernelObjectWaitResult wait(
        std::optional<std::chrono::milliseconds> timeout) override {
        std::unique_lock lock(mutex);
        const auto completed = [&] { return state == GuestThreadLifecycleState::Completed; };
        if (timeout) {
            if (!condition.wait_for(lock, *timeout, completed))
                return GuestKernelObjectWaitResult::Timeout;
        } else condition.wait(lock, completed);
        return GuestKernelObjectWaitResult::Signaled;
    }
    GuestThreadStartup startup;
    Entry entry;
    mutable std::mutex mutex;
    std::condition_variable_any condition;
    std::jthread worker;
    GuestThreadLifecycleState state{GuestThreadLifecycleState::Running};
    std::uint32_t suspend_count{};
    std::uint32_t exit_code{GuestThreadManager::kStillActive};
};
GuestThreadManager::GuestThreadManager() noexcept : object_table_(&owned_object_table_) {}
GuestThreadManager::GuestThreadManager(GuestKernelObjectTable& table) noexcept
    : object_table_(&table) {}
GuestThreadManager::~GuestThreadManager() {
    std::vector<std::shared_ptr<Record>> workers;
    std::vector<GuestKernelHandle> handles;
    {
        std::lock_guard lock(mutex_);
        shutting_down_ = true;
        workers = workers_;
        workers_.clear();
        handles.swap(owned_handles_);
    }
    for (const auto handle : handles) object_table_->close(handle);
    for (const auto& record : workers) {
        record->worker.request_stop();
        record->condition.notify_all();
    }
    for (const auto& record : workers)
        if (record->worker.joinable()) record->worker.join();
}
std::shared_ptr<GuestThreadManager::Record> GuestThreadManager::find_thread(
    GuestThreadHandle handle) const {
    auto object = object_table_->lookup(handle);
    if (!object || object->type() != GuestKernelObjectType::Thread) return {};
    return std::dynamic_pointer_cast<Record>(std::move(object));
}
void GuestThreadManager::reap_completed_workers() {
    std::vector<std::shared_ptr<Record>> completed;
    {
        std::lock_guard manager_lock(mutex_);
        auto it = workers_.begin();
        while (it != workers_.end()) {
            bool done = false;
            {
                std::lock_guard record_lock((*it)->mutex);
                done = (*it)->state == GuestThreadLifecycleState::Completed;
            }
            if (done) {
                completed.push_back(*it);
                it = workers_.erase(it);
            } else ++it;
        }
    }
    for (const auto& record : completed)
        if (record->worker.joinable()) record->worker.join();
}
std::optional<GuestThreadHandle> GuestThreadManager::create(
    GuestThreadStartup startup, Entry entry, bool initially_suspended, std::string* error) {
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
    const auto handle = object_table_->insert(record);
    if (!handle) {
        set_error(error, "Guest kernel object handle space is exhausted");
        return std::nullopt;
    }
    workers_.push_back(record);
    owned_handles_.push_back(*handle);
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
            std::uint32_t code = kStatusUnsuccessful;
            try { code = record->entry(record->startup, stop); }
            catch (...) { code = kStatusUnsuccessful; }
            {
                std::lock_guard lock(record->mutex);
                record->exit_code = code;
                record->state = GuestThreadLifecycleState::Completed;
            }
            record->condition.notify_all();
        });
    } catch (...) {
        owned_handles_.pop_back();
        workers_.pop_back();
        object_table_->close(*handle);
        set_error(error, "Could not start the host worker thread");
        return std::nullopt;
    }
    return handle;
}
bool GuestThreadManager::resume(GuestThreadHandle handle, std::uint32_t* previous_count,
                                std::string* error) {
    reap_completed_workers();
    auto record = find_thread(handle);
    if (!record) {
        set_error(error, "Guest thread handle is invalid, closed, or not a thread");
        return false;
    }
    {
        std::lock_guard lock(record->mutex);
        if (previous_count) *previous_count = record->suspend_count;
        if (record->state == GuestThreadLifecycleState::Completed) return true;
        if (record->suspend_count) --record->suspend_count;
    }
    record->condition.notify_all();
    return true;
}
GuestThreadWaitResult GuestThreadManager::wait(
    GuestThreadHandle handle, std::optional<std::chrono::milliseconds> timeout) {
    auto record = find_thread(handle);
    return record ? record->wait(timeout) : GuestThreadWaitResult::InvalidHandle;
}
bool GuestThreadManager::get_state(GuestThreadHandle handle, GuestThreadLifecycleState& state,
                                   std::uint32_t* suspend_count) const {
    auto record = find_thread(handle);
    if (!record) return false;
    std::lock_guard lock(record->mutex);
    state = record->state;
    if (suspend_count) *suspend_count = record->suspend_count;
    return true;
}
bool GuestThreadManager::get_exit_code(GuestThreadHandle handle, std::uint32_t& exit_code) const {
    auto record = find_thread(handle);
    if (!record) return false;
    std::lock_guard lock(record->mutex);
    exit_code = record->state == GuestThreadLifecycleState::Completed
        ? record->exit_code : kStillActive;
    return true;
}
bool GuestThreadManager::close_handle(GuestThreadHandle handle) {
    if (!find_thread(handle)) return false;
    return object_table_->close(handle);
}
} // namespace toohuman::runtime
