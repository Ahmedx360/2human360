#include "ppc/guest_thread_manager.hpp"
#include "ppc/guest_thread_execution.hpp"

#include <utility>

namespace toohuman::runtime {
namespace {

void set_error(std::string* error, const char* message) {
    if (error) *error = message;
}

void run_cleanup(GuestThreadManager::Cleanup cleanup,
                 GuestThreadStartup& startup) noexcept {
    if (!cleanup) return;
    try {
        cleanup(startup);
    } catch (...) {
        // Cleanup is a best-effort, exactly-once release hook. Never allow an
        // exception to escape a worker thread or a kernel-object close path.
    }
}

} // namespace

struct GuestThreadManager::Record final : GuestKernelObject {
    explicit Record(GuestThreadStartup value, Entry callback, Cleanup cleanup_callback,
                    std::uint32_t initial_suspend_count)
        : startup(std::move(value)),
          entry(std::move(callback)),
          cleanup(std::move(cleanup_callback)),
          execution_control(initial_suspend_count),
          state(initial_suspend_count ? GuestThreadLifecycleState::Suspended
                                      : GuestThreadLifecycleState::Running) {}

    ~Record() override {
        Cleanup final_cleanup;
        {
            std::lock_guard lock(mutex);
            final_cleanup = std::move(cleanup);
        }
        run_cleanup(std::move(final_cleanup), startup);
    }

    [[nodiscard]] GuestKernelObjectType type() const noexcept override {
        return GuestKernelObjectType::Thread;
    }

    [[nodiscard]] std::uint32_t guest_object_address() const noexcept override {
        return startup.kthread_address;
    }

    [[nodiscard]] GuestKernelObjectWaitResult wait(
        std::optional<std::chrono::milliseconds> timeout) override {
        Cleanup deferred_cleanup;
        GuestKernelObjectWaitResult result = GuestKernelObjectWaitResult::Signaled;
        {
            std::unique_lock lock(mutex);
            ++active_waiters;
            const auto completed = [&] {
                return state == GuestThreadLifecycleState::Completed;
            };
            if (timeout) {
                if (!condition.wait_for(lock, *timeout, completed))
                    result = GuestKernelObjectWaitResult::Timeout;
            } else {
                condition.wait(lock, completed);
            }

            --active_waiters;
            deferred_cleanup = take_cleanup_locked();
        }
        perform_cleanup(std::move(deferred_cleanup));
        return result;
    }

    void on_handle_closed() noexcept override {
        Cleanup deferred_cleanup;
        {
            std::lock_guard lock(mutex);
            handle_closed = true;
            deferred_cleanup = take_cleanup_locked();
        }
        perform_cleanup(std::move(deferred_cleanup));
    }

    void complete(std::uint32_t code) noexcept {
        Cleanup deferred_cleanup;
        {
            std::lock_guard lock(mutex);
            if (state == GuestThreadLifecycleState::Completed) return;
            exit_code = code;
            state = GuestThreadLifecycleState::Completed;
            deferred_cleanup = take_cleanup_locked();
        }
        notify_guest_kernel_object_waiters();
        perform_cleanup(std::move(deferred_cleanup));
    }

    void wait_for_cleanup_idle() {
        std::unique_lock lock(mutex);
        condition.wait(lock, [&] {
            return active_waiters == 0 && !cleanup_in_progress;
        });
    }

    [[nodiscard]] bool can_reap() const {
        std::lock_guard lock(mutex);
        return state == GuestThreadLifecycleState::Completed &&
               handle_closed && active_waiters == 0 &&
               !cleanup_in_progress && !cleanup;
    }

private:
    [[nodiscard]] Cleanup take_cleanup_locked() noexcept {
        if (!handle_closed || active_waiters != 0 ||
            state != GuestThreadLifecycleState::Completed || !cleanup) {
            return {};
        }
        cleanup_in_progress = true;
        return std::move(cleanup);
    }

    void perform_cleanup(Cleanup callback) noexcept {
        if (callback) {
            run_cleanup(std::move(callback), startup);
            {
                std::lock_guard lock(mutex);
                cleanup_in_progress = false;
            }
        }
        condition.notify_all();
    }

public:

    GuestThreadStartup startup;
    Entry entry;
    Cleanup cleanup;
    mutable std::mutex mutex;
    std::condition_variable_any condition;
    std::jthread worker;
    GuestThreadLifecycleState state{GuestThreadLifecycleState::Running};
    GuestThreadExecutionControl execution_control;
    std::uint32_t exit_code{GuestThreadManager::kStillActive};
    std::uint32_t active_waiters{};
    bool handle_closed{};
    bool cleanup_in_progress{};
};

GuestThreadManager::GuestThreadManager() noexcept
    : object_table_(&owned_object_table_) {}

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

    // The close callback marks each thread handle as no longer externally
    // reachable. Running workers keep their guest context until complete().
    for (const auto handle : handles) object_table_->close(handle);
    // Duplicated handles may still exist after the manager's original handle
    // was closed. Runtime shutdown invalidates every alias before cleanup
    // callbacks can outlive the runtime/heaps they capture.
    for (const auto& record : workers) object_table_->close_object(record);
    for (const auto& record : workers) {
        record->worker.request_stop();
        record->condition.notify_all();
    }
    for (const auto& record : workers) {
        if (record->worker.joinable()) record->worker.join();
    }
    // A wait that raced handle closure may own the final cleanup callback.
    // Do not let the manager's caller destroy guest heaps until that callback
    // has finished using them.
    for (const auto& record : workers) record->wait_for_cleanup_idle();
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
            done = (*it)->can_reap();
            if (done) {
                completed.push_back(*it);
                it = workers_.erase(it);
            } else {
                ++it;
            }
        }
    }
    for (const auto& record : completed) {
        if (record->worker.joinable()) record->worker.join();
    }
}

std::optional<GuestThreadHandle> GuestThreadManager::create(
    GuestThreadStartup startup, Entry entry, bool initially_suspended,
    std::string* error, Cleanup cleanup,
    std::optional<GuestKernelHandle> requested_handle) {
    if (!entry) {
        set_error(error, "Guest thread requires a non-empty executor");
        run_cleanup(std::move(cleanup), startup);
        return std::nullopt;
    }

    reap_completed_workers();
    std::shared_ptr<Record> record;
    try {
        record = std::make_shared<Record>(
            std::move(startup), std::move(entry), std::move(cleanup),
            initially_suspended ? 1u : 0u);
    } catch (...) {
        set_error(error, "Could not allocate guest thread bookkeeping");
        run_cleanup(std::move(cleanup), startup);
        return std::nullopt;
    }

    std::lock_guard manager_lock(mutex_);
    if (shutting_down_) {
        set_error(error, "Guest thread manager is shutting down");
        return std::nullopt; // Record destructor invokes cleanup.
    }

    // Reserve host bookkeeping before publishing the guest handle. Without
    // this ordering, a vector allocation failure after insert() could leave a
    // live kernel-object handle that the manager cannot track or close.
    try {
        workers_.reserve(workers_.size() + 1u);
        owned_handles_.reserve(owned_handles_.size() + 1u);
    } catch (...) {
        set_error(error, "Could not allocate host bookkeeping for guest thread");
        return std::nullopt; // Record destructor invokes cleanup.
    }

    const auto handle = requested_handle
        ? (object_table_->insert_at(*requested_handle, record)
               ? requested_handle : std::nullopt)
        : object_table_->insert(record);
    if (!handle) {
        set_error(error, "Guest kernel object handle space is exhausted");
        return std::nullopt; // Record destructor invokes cleanup.
    }

    // Capacity is reserved, and these value insertions are non-throwing.
    workers_.push_back(record);
    owned_handles_.push_back(*handle);
    try {
        record->worker = std::jthread([record](std::stop_token stop) {
            // Never hold the record lock while waiting on the execution gate:
            // resume/suspend acquire the record lock before changing the gate.
            // Blocking here with both locks held would deadlock initially
            // suspended threads when their first NtResumeThread arrives.
            const bool resumed = record->execution_control.wait(stop);
            if (!resumed || stop.stop_requested()) {
                record->complete(kStatusThreadIsTerminating);
                return;
            }
            {
                std::lock_guard lock(record->mutex);
                record->state = record->execution_control.suspend_count() == 0u
                    ? GuestThreadLifecycleState::Running
                    : GuestThreadLifecycleState::Suspended;
            }
            record->condition.notify_all();

            GuestThreadExecutionScope execution_scope(stop, &record->execution_control);
            std::uint32_t code = kStatusUnsuccessful;
            try {
                code = record->entry(record->startup, stop);
            } catch (...) {
                code = kStatusUnsuccessful;
            }
            record->complete(code);
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

bool GuestThreadManager::resume(GuestThreadHandle handle,
                                std::uint32_t* previous_count,
                                std::string* error) {
    reap_completed_workers();
    auto record = find_thread(handle);
    if (!record) {
        set_error(error, "Guest thread handle is invalid, closed, or not a thread");
        return false;
    }
    {
        std::lock_guard lock(record->mutex);
        if (previous_count)
            *previous_count = record->execution_control.suspend_count();
        if (record->state == GuestThreadLifecycleState::Completed) return true;
        (void)record->execution_control.resume();
    }
    record->condition.notify_all();
    return true;
}

bool GuestThreadManager::suspend(GuestThreadHandle handle,
                                 std::uint32_t* previous_count,
                                 std::string* error) {
    reap_completed_workers();
    auto record = find_thread(handle);
    if (!record) {
        set_error(error, "Guest thread handle is invalid, closed, or not a thread");
        return false;
    }
    {
        std::lock_guard lock(record->mutex);
        if (record->state == GuestThreadLifecycleState::Completed) {
            set_error(error, "Guest thread has already completed");
            return false;
        }
        const auto previous = record->execution_control.suspend_count();
        if (previous == 0xFFFFFFFFu) {
            set_error(error, "Guest thread suspend count is exhausted");
            return false;
        }
        (void)record->execution_control.suspend();
        if (previous_count) *previous_count = previous;
    }
    return true;
}

GuestThreadWaitResult GuestThreadManager::wait(
    GuestThreadHandle handle,
    std::optional<std::chrono::milliseconds> timeout) {
    auto record = find_thread(handle);
    return record ? record->wait(timeout) : GuestThreadWaitResult::InvalidHandle;
}

bool GuestThreadManager::get_state(
    GuestThreadHandle handle, GuestThreadLifecycleState& state,
    std::uint32_t* suspend_count) const {
    auto record = find_thread(handle);
    if (!record) return false;
    std::lock_guard lock(record->mutex);
    if (record->state == GuestThreadLifecycleState::Completed) {
        state = GuestThreadLifecycleState::Completed;
    } else {
        const auto count = record->execution_control.suspend_count();
        state = count == 0u ? GuestThreadLifecycleState::Running
                            : GuestThreadLifecycleState::Suspended;
        if (suspend_count) *suspend_count = count;
        return true;
    }
    if (suspend_count) *suspend_count = 0u;
    return true;
}

bool GuestThreadManager::get_exit_code(GuestThreadHandle handle,
                                       std::uint32_t& exit_code) const {
    auto record = find_thread(handle);
    if (!record) return false;
    std::lock_guard lock(record->mutex);
    exit_code = record->state == GuestThreadLifecycleState::Completed
        ? record->exit_code : kStillActive;
    return true;
}

bool GuestThreadManager::close_handle(GuestThreadHandle handle) {
    if (!find_thread(handle)) return false;
    const bool closed = object_table_->close(handle);
    if (closed) reap_completed_workers();
    return closed;
}

} // namespace toohuman::runtime
