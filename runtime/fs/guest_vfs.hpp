#pragma once
#include "kernel/guest_kernel_objects.hpp"

#include <cstdint>
#include <filesystem>
#include <fstream>
#include <memory>
#include <mutex>
#include <optional>
#include <string>

namespace toohuman::runtime {

enum class GuestVfsStatus : std::uint32_t {
    Success = 0,
    NoSuchFile = 0xC000000Fu,
    EndOfFile = 0xC0000011u,
    ObjectNameNotFound = 0xC0000034u,
    ObjectNameCollision = 0xC0000035u,
    AccessDenied = 0xC0000022u,
    Unsuccessful = 0xC0000001u,
    NotADirectory = 0xC0000103u,
    FileIsADirectory = 0xC00000BAu,
};

// A host file or directory opened through the guest VFS.
class GuestFile final : public GuestKernelObject {
public:
    GuestFile(std::filesystem::path path, bool directory, bool writable);
    [[nodiscard]] GuestKernelObjectType type() const noexcept override { return GuestKernelObjectType::File; }
    [[nodiscard]] GuestKernelObjectWaitResult wait(std::optional<std::chrono::milliseconds>) override {
        return GuestKernelObjectWaitResult::Signaled;
    }
    [[nodiscard]] bool is_directory() const noexcept { return directory_; }
    [[nodiscard]] const std::filesystem::path& path() const noexcept { return path_; }
    [[nodiscard]] std::uint64_t size() const;
    // Reads at `offset` (or the current position when nullopt). Returns bytes read.
    [[nodiscard]] std::size_t read(void* out, std::size_t length, std::optional<std::uint64_t> offset);
    [[nodiscard]] std::size_t write(const void* data, std::size_t length, std::optional<std::uint64_t> offset);
    [[nodiscard]] std::uint64_t position() const;
    void set_position(std::uint64_t position);
    [[nodiscard]] bool resize(std::uint64_t new_size);
    // Directory enumeration cursor (index into sorted entry names).
    std::size_t dir_cursor{};

private:
    std::filesystem::path path_;
    bool directory_;
    mutable std::mutex mutex_;
    mutable std::fstream stream_;
    std::uint64_t position_{};
};

struct GuestVfsOpenResult {
    GuestVfsStatus status{GuestVfsStatus::Success};
    std::shared_ptr<GuestFile> file;
    std::uint32_t information{}; // FILE_OPENED=1, FILE_CREATED=2, FILE_OVERWRITTEN=3
};

// Maps Xbox 360 device paths onto a host directory tree.
//   game:\, d:\, \Device\Cdrom0\, \Device\Harddisk0\Partition1\Game  -> game root (read-only)
//   every other volume (cache:, hdd:, \Device\Harddisk0\...)         -> save root (read/write)
class GuestVfs {
public:
    GuestVfs(std::filesystem::path game_root, std::filesystem::path save_root);
    // Reads TH_GAME_ROOT / TH_SAVE_ROOT, defaulting to ./game and ./th_save.
    [[nodiscard]] static GuestVfs from_environment();

    // Returns the host path for `guest_name` (relative to `root_dir` when given), or nullopt
    // if it escapes the root. `writable` reports whether the volume accepts writes.
    [[nodiscard]] std::optional<std::filesystem::path> resolve(
        const std::string& guest_name, const std::filesystem::path* root_dir, bool* writable) const;

    // disposition uses NT values: 0 supersede, 1 open, 2 create, 3 open_if, 4 overwrite, 5 overwrite_if.
    [[nodiscard]] GuestVfsOpenResult open(const std::string& guest_name,
                                          const std::filesystem::path* root_dir,
                                          std::uint32_t disposition, bool want_write,
                                          bool directory_only) const;

    [[nodiscard]] const std::filesystem::path& game_root() const noexcept { return game_root_; }

private:
    std::filesystem::path game_root_;
    std::filesystem::path save_root_;
};

[[nodiscard]] GuestVfs& process_vfs() noexcept;

} // namespace toohuman::runtime
