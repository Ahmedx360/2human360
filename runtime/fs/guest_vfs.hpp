#pragma once

#include "kernel/guest_kernel_objects.hpp"

#include <cstddef>
#include <cstdint>
#include <filesystem>
#include <fstream>
#include <memory>
#include <mutex>
#include <optional>
#include <string>
#include <vector>

namespace toohuman::runtime {

enum class GuestVfsStatus : std::uint32_t {
    Success = 0,
    NoSuchFile = 0xC000000Fu,
    EndOfFile = 0xC0000011u,
    NoMoreFiles = 0x80000006u,
    ObjectNameNotFound = 0xC0000034u,
    ObjectNameCollision = 0xC0000035u,
    AccessDenied = 0xC0000022u,
    Unsuccessful = 0xC0000001u,
    NotADirectory = 0xC0000103u,
    FileIsADirectory = 0xC00000BAu,
    InvalidParameter = 0xC000000Du,
};

struct GuestDirectoryEntry {
    std::string name;
    std::uint32_t file_index{};
    std::uint64_t creation_time{};
    std::uint64_t last_access_time{};
    std::uint64_t last_write_time{};
    std::uint64_t change_time{};
    std::uint64_t end_of_file{};
    std::uint64_t allocation_size{};
    std::uint32_t attributes{};
};

// A host file or directory opened through the guest VFS. Volume permissions
// are inherited by directory-relative opens; per-handle data rights are
// separately enforced by read/write/resize.
class GuestFile final : public GuestKernelObject {
public:
    GuestFile(std::filesystem::path path, bool directory,
              bool readable, bool writable, bool volume_writable);

    [[nodiscard]] GuestKernelObjectType type() const noexcept override {
        return GuestKernelObjectType::File;
    }
    [[nodiscard]] GuestKernelObjectWaitResult wait(
        std::optional<std::chrono::milliseconds>) override {
        return GuestKernelObjectWaitResult::Signaled;
    }
    [[nodiscard]] bool is_directory() const noexcept { return directory_; }
    [[nodiscard]] bool can_read() const noexcept { return readable_; }
    [[nodiscard]] bool can_write() const noexcept { return writable_ && volume_writable_; }
    [[nodiscard]] bool volume_writable() const noexcept { return volume_writable_; }
    [[nodiscard]] bool is_open() const;
    [[nodiscard]] const std::filesystem::path& path() const noexcept { return path_; }
    [[nodiscard]] std::uint64_t size() const;
    [[nodiscard]] std::size_t read(void* out, std::size_t length,
                                   std::optional<std::uint64_t> offset);
    [[nodiscard]] std::size_t write(const void* data, std::size_t length,
                                    std::optional<std::uint64_t> offset);
    [[nodiscard]] std::uint64_t position() const;
    void set_position(std::uint64_t position);
    [[nodiscard]] bool resize(std::uint64_t new_size);
    [[nodiscard]] bool flush();

    [[nodiscard]] std::optional<GuestDirectoryEntry> next_directory_entry(
        const std::string& pattern, bool restart, GuestVfsStatus& status);

private:
    std::filesystem::path path_;
    bool directory_{};
    bool readable_{};
    bool writable_{};
    bool volume_writable_{};
    mutable std::mutex mutex_;
    mutable std::fstream stream_;
    std::uint64_t position_{};
    std::string directory_pattern_;
    std::vector<GuestDirectoryEntry> directory_entries_;
    std::size_t directory_cursor_{};
    bool directory_scanned_{};
};

struct GuestVfsOpenResult {
    GuestVfsStatus status{GuestVfsStatus::Success};
    std::shared_ptr<GuestFile> file;
    std::uint32_t information{}; // FILE_OPENED=1, FILE_CREATED=2, FILE_OVERWRITTEN=3
};

// Maps Xbox 360 device paths onto a host directory tree.
// game:/d:/Cdrom0 and the title partition map read-only to game_root;
// other volumes map read/write to save_root.
class GuestVfs {
public:
    GuestVfs(std::filesystem::path game_root, std::filesystem::path save_root);
    [[nodiscard]] static GuestVfs from_environment();

    [[nodiscard]] std::optional<std::filesystem::path> resolve(
        const std::string& guest_name, const std::filesystem::path* root_dir,
        bool* writable, bool root_writable = true) const;

    [[nodiscard]] GuestVfsOpenResult open(
        const std::string& guest_name, const std::filesystem::path* root_dir,
        std::uint32_t disposition, bool want_write, bool directory_only,
        bool root_writable = true, bool want_read = true) const;

    [[nodiscard]] const std::filesystem::path& game_root() const noexcept {
        return game_root_;
    }

private:
    std::filesystem::path game_root_;
    std::filesystem::path save_root_;
};

[[nodiscard]] GuestVfs& process_vfs() noexcept;

} // namespace toohuman::runtime
