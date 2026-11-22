#include "fs/guest_vfs.hpp"

#include <algorithm>
#include <chrono>
#include <cstdint>
#include <cctype>
#include <cstdlib>
#include <limits>
#include <system_error>

namespace toohuman::runtime {
namespace fs = std::filesystem;
namespace {

std::string lower(std::string value) {
    std::transform(value.begin(), value.end(), value.begin(),
                   [](unsigned char c) { return static_cast<char>(std::tolower(c)); });
    return value;
}

bool strip_prefix(std::string& name, const char* prefix, bool component_boundary = false) {
    const auto lowered = lower(name);
    const std::string wanted(prefix);
    if (lowered.compare(0, wanted.size(), wanted) != 0) return false;
    if (component_boundary && name.size() > wanted.size() &&
        name[wanted.size()] != '/') return false;
    name.erase(0, wanted.size());
    return true;
}

bool is_within(const fs::path& root, const fs::path& candidate) {
    const auto relative = candidate.lexically_relative(root);
    if (relative.empty()) return candidate == root;
    if (relative.is_absolute()) return false;
    for (const auto& component : relative) {
        if (component == "..") return false;
    }
    return true;
}

std::optional<fs::path> canonical_path(const fs::path& path) {
    std::error_code ec;
    auto result = fs::weakly_canonical(path, ec);
    if (ec) return std::nullopt;
    return result.lexically_normal();
}

// Finds component in dir ignoring case; returns the real entry name.
std::optional<std::string> find_case_insensitive(
    const fs::path& dir, const std::string& component) {
    std::error_code ec;
    if (fs::exists(dir / component, ec) && !ec) return component;

    const auto wanted = lower(component);
    fs::directory_iterator it(dir, ec);
    if (ec) return std::nullopt;
    const fs::directory_iterator end;
    for (; it != end; it.increment(ec)) {
        if (ec) return std::nullopt;
        const auto name = it->path().filename().string();
        if (lower(name) == wanted) return name;
    }
    return std::nullopt;
}

bool wildcard_match_ci(std::string_view pattern, std::string_view name) {
    std::size_t p = 0, n = 0;
    std::size_t star = std::string_view::npos;
    std::size_t retry = 0;
    const auto equal_ci = [](char a, char b) {
        return std::tolower(static_cast<unsigned char>(a)) ==
               std::tolower(static_cast<unsigned char>(b));
    };
    while (n < name.size()) {
        if (p < pattern.size() &&
            (pattern[p] == '?' || equal_ci(pattern[p], name[n]))) {
            ++p;
            ++n;
        } else if (p < pattern.size() && pattern[p] == '*') {
            star = p++;
            retry = n;
        } else if (star != std::string_view::npos) {
            p = star + 1;
            n = ++retry;
        } else {
            return false;
        }
    }
    while (p < pattern.size() && pattern[p] == '*') ++p;
    return p == pattern.size();
}

std::uint64_t to_filetime(fs::file_time_type value) {
    const auto system_time = std::chrono::time_point_cast<std::chrono::system_clock::duration>(
        value - fs::file_time_type::clock::now() + std::chrono::system_clock::now());
    const auto ticks = std::chrono::duration_cast<std::chrono::nanoseconds>(
        system_time.time_since_epoch()).count() / 100;
    constexpr std::int64_t kWindowsEpochOffset = 116444736000000000ll;
    const auto filetime = ticks + kWindowsEpochOffset;
    return filetime < 0 ? 0u : static_cast<std::uint64_t>(filetime);
}

} // namespace

GuestFile::GuestFile(fs::path path, bool directory, bool readable,
                     bool writable, bool volume_writable)
    : path_(std::move(path)), directory_(directory),
      readable_(readable), writable_(writable),
      volume_writable_(volume_writable) {
    if (!directory_) {
        auto mode = std::ios::binary;
        // Keep existing content when opening an existing file for write.
        // Handle rights are still enforced explicitly by read()/write().
        if (writable_) mode |= std::ios::in | std::ios::out;
        else mode |= std::ios::in;
        stream_.open(path_, mode);
    }
}

bool GuestFile::is_open() const {
    if (directory_) return true;
    std::lock_guard lock(mutex_);
    return stream_.is_open();
}

std::uint64_t GuestFile::size() const {
    std::lock_guard lock(mutex_);
    std::error_code ec;
    const auto value = fs::file_size(path_, ec);
    return ec ? 0 : static_cast<std::uint64_t>(value);
}

std::size_t GuestFile::read(void* out, std::size_t length,
                            std::optional<std::uint64_t> offset) {
    if (!readable_ || (length != 0 && out == nullptr) ||
        length > static_cast<std::size_t>(std::numeric_limits<std::streamsize>::max()))
        return 0;
    if (length == 0) return 0;

    std::lock_guard lock(mutex_);
    if (!stream_.is_open()) return 0;
    stream_.clear();
    const auto at = offset.value_or(position_);
    if (at > static_cast<std::uint64_t>(std::numeric_limits<std::streamoff>::max()))
        return 0;
    stream_.seekg(static_cast<std::streamoff>(at));
    if (!stream_) { stream_.clear(); return 0; }
    stream_.read(static_cast<char*>(out), static_cast<std::streamsize>(length));
    const auto got = static_cast<std::size_t>(stream_.gcount());
    stream_.clear();
    position_ = at + got;
    return got;
}

std::size_t GuestFile::write(const void* data, std::size_t length,
                             std::optional<std::uint64_t> offset) {
    if (!can_write() || (length != 0 && data == nullptr) ||
        length > static_cast<std::size_t>(std::numeric_limits<std::streamsize>::max()))
        return 0;
    if (length == 0) return 0;

    std::lock_guard lock(mutex_);
    if (!stream_.is_open()) return 0;
    stream_.clear();
    const auto at = offset.value_or(position_);
    if (at > static_cast<std::uint64_t>(std::numeric_limits<std::streamoff>::max()) ||
        length > std::numeric_limits<std::uint64_t>::max() - at)
        return 0;
    stream_.seekp(static_cast<std::streamoff>(at));
    if (!stream_) { stream_.clear(); return 0; }
    stream_.write(static_cast<const char*>(data), static_cast<std::streamsize>(length));
    stream_.flush();
    if (!stream_) { stream_.clear(); return 0; }
    position_ = at + length;
    return length;
}

std::optional<GuestDirectoryEntry> GuestFile::next_directory_entry(
    const std::string& pattern, bool restart, GuestVfsStatus& status,
    std::size_t max_name_bytes) {
    std::lock_guard lock(mutex_);
    if (!directory_) {
        status = GuestVfsStatus::NotADirectory;
        return std::nullopt;
    }
    if (!readable_) {
        status = GuestVfsStatus::AccessDenied;
        return std::nullopt;
    }
    if (pattern.find_first_of("/\\:") != std::string::npos) {
        status = GuestVfsStatus::InvalidParameter;
        return std::nullopt;
    }

    const bool pattern_changed = !pattern.empty() && directory_pattern_ != pattern;
    if (restart || pattern_changed || !directory_scanned_) {
        if (!pattern.empty() || restart) directory_pattern_ = pattern;
        directory_cursor_ = 0;
        directory_entries_.clear();
        directory_scanned_ = true;

        std::error_code ec;
        std::filesystem::directory_iterator it(path_, ec);
        if (ec) {
            status = GuestVfsStatus::AccessDenied;
            return std::nullopt;
        }
        const std::filesystem::directory_iterator end;
        for (; it != end; it.increment(ec)) {
            if (ec) {
                status = GuestVfsStatus::Unsuccessful;
                directory_entries_.clear();
                return std::nullopt;
            }
            const auto name = it->path().filename().string();
            if (!pattern.empty() && !wildcard_match_ci(pattern, name)) continue;

            const auto canonical = canonical_path(it->path());
            const auto canonical_root = canonical_path(path_);
            if (!canonical || !canonical_root || !is_within(*canonical_root, *canonical))
                continue; // Never enumerate a link outside the mounted directory.

            GuestDirectoryEntry entry{};
            entry.name = name;
            std::error_code type_error;
            const bool is_dir = std::filesystem::is_directory(*canonical, type_error);
            if (type_error) continue;
            entry.attributes = is_dir ? 0x10u : 0x80u;
            if (!name.empty() && name.front() == '.') entry.attributes |= 0x02u;
            if (!is_dir) {
                std::error_code size_error;
                const auto bytes = std::filesystem::file_size(*canonical, size_error);
                if (size_error) continue;
                entry.end_of_file = static_cast<std::uint64_t>(bytes);
                entry.allocation_size = entry.end_of_file == 0 ? 0u :
                    (entry.end_of_file > std::numeric_limits<std::uint64_t>::max() - 0xFFFu
                        ? entry.end_of_file
                        : (entry.end_of_file + 0xFFFu) & ~0xFFFull);
            }
            std::error_code time_error;
            const auto write_time = std::filesystem::last_write_time(*canonical, time_error);
            if (!time_error) {
                entry.creation_time = to_filetime(write_time);
                entry.last_access_time = entry.creation_time;
                entry.last_write_time = entry.creation_time;
                entry.change_time = entry.creation_time;
            }
            directory_entries_.push_back(std::move(entry));
        }

        std::sort(directory_entries_.begin(), directory_entries_.end(),
                  [](const GuestDirectoryEntry& a, const GuestDirectoryEntry& b) {
                      return lower(a.name) < lower(b.name);
                  });
        for (std::size_t i = 0; i < directory_entries_.size(); ++i)
            directory_entries_[i].file_index = static_cast<std::uint32_t>(i);
    }

    if (directory_cursor_ >= directory_entries_.size()) {
        status = directory_entries_.empty() && !pattern.empty()
            ? GuestVfsStatus::NoSuchFile : GuestVfsStatus::NoMoreFiles;
        return std::nullopt;
    }
    const auto& next = directory_entries_[directory_cursor_];
    if (next.name.size() > max_name_bytes) {
        // Leave the cursor unchanged so the caller can retry with a larger buffer.
        status = GuestVfsStatus::BufferOverflow;
        return std::nullopt;
    }
    status = GuestVfsStatus::Success;
    return directory_entries_[directory_cursor_++];
}

std::uint64_t GuestFile::position() const {
    std::lock_guard lock(mutex_);
    return position_;
}

void GuestFile::set_position(std::uint64_t value) {
    std::lock_guard lock(mutex_);
    position_ = value;
}

bool GuestFile::resize(std::uint64_t new_size) {
    if (!can_write() || directory_) return false;
    std::lock_guard lock(mutex_);
    if (!stream_.is_open()) return false;
    stream_.flush();
    std::error_code ec;
    fs::resize_file(path_, new_size, ec);
    if (ec) return false;
    if (position_ > new_size) position_ = new_size;
    stream_.clear();
    return true;
}

bool GuestFile::flush() {
    if (directory_) return false;
    std::lock_guard lock(mutex_);
    if (!stream_.is_open()) return false;
    // A read-only handle has no buffered writes to flush.
    if (!can_write()) return true;
    stream_.flush();
    return static_cast<bool>(stream_);
}

GuestVfs::GuestVfs(fs::path game_root, fs::path save_root)
    : game_root_(std::move(game_root)), save_root_(std::move(save_root)) {}

GuestVfs GuestVfs::from_environment() {
    const char* game = std::getenv("TH_GAME_ROOT");
    const char* save = std::getenv("TH_SAVE_ROOT");
    return GuestVfs(game ? game : "game", save ? save : "th_save");
}

std::optional<fs::path> GuestVfs::resolve(
    const std::string& guest_name, const fs::path* root_dir,
    bool* writable, bool root_writable) const {
    if (guest_name.empty() || guest_name.find('\0') != std::string::npos)
        return std::nullopt;

    std::string name = guest_name;
    std::replace(name.begin(), name.end(), '\\', '/');

    fs::path root;
    bool can_write = false;
    if (root_dir != nullptr) {
        // Root-directory handles may only be used for relative names and may
        // never acquire more write access than their originating volume.
        if (name.find(':') != std::string::npos) return std::nullopt;
        root = *root_dir;
        can_write = root_writable;
    } else {
        (void)strip_prefix(name, "//?/");
        (void)strip_prefix(name, "/??/");

        bool game = false;
        if (strip_prefix(name, "game:") || strip_prefix(name, "d:")) {
            game = true;
        } else if (strip_prefix(name, "/device/cdrom0", true) ||
                   strip_prefix(name, "/device/harddisk0/partition1/game", true)) {
            game = true;
        }

        if (!game) {
            // Other drive/device names are isolated under the save root.
            const auto colon = name.find(':');
            if (colon != std::string::npos && colon < 8) {
                name.erase(0, colon + 1);
            } else if (lower(name).compare(0, 8, "/device/") == 0) {
                const auto next = name.find('/', 8);
                name.erase(0, next == std::string::npos ? name.size() : next);
            }
        }
        root = game ? game_root_ : save_root_;
        can_write = !game;
    }

    // Leading separators in device paths are root-relative, not host absolute.
    while (!name.empty() && name.front() == '/') name.erase(name.begin());
    if (writable) *writable = can_write;

    const auto canonical_root = canonical_path(root);
    if (!canonical_root) return std::nullopt;
    fs::path result = *canonical_root;

    std::size_t start = 0;
    while (start < name.size()) {
        const auto end = name.find('/', start);
        const auto component = name.substr(
            start, end == std::string::npos ? std::string::npos : end - start);
        start = end == std::string::npos ? name.size() : end + 1;

        if (component.empty() || component == ".") continue;
        if (component == ".." || component.find(':') != std::string::npos)
            return std::nullopt;

        std::string resolved_component = component;
        std::error_code ec;
        if (fs::is_directory(result, ec) && !ec) {
            if (const auto actual = find_case_insensitive(result, component))
                resolved_component = *actual;
        }

        result /= resolved_component;
        const auto canonical_candidate = canonical_path(result);
        // weakly_canonical resolves existing symlinks, including links in
        // intermediate path components, before checking the root boundary.
        if (!canonical_candidate || !is_within(*canonical_root, *canonical_candidate))
            return std::nullopt;
        result = *canonical_candidate;
    }
    return result;
}

GuestVfsOpenResult GuestVfs::open(
    const std::string& guest_name, const fs::path* root_dir,
    std::uint32_t disposition, bool want_write, bool directory_only,
    bool root_writable, bool want_read) const {
    GuestVfsOpenResult result;
    if (disposition > 5u) {
        result.status = GuestVfsStatus::InvalidParameter;
        return result;
    }

    bool volume_writable = false;
    const auto host = resolve(guest_name, root_dir, &volume_writable, root_writable);
    if (!host) { result.status = GuestVfsStatus::ObjectNameNotFound; return result; }

    std::error_code ec;
    const bool exists = fs::exists(*host, ec);
    if (ec) { result.status = GuestVfsStatus::Unsuccessful; return result; }
    const bool is_dir = exists && fs::is_directory(*host, ec);
    if (ec) { result.status = GuestVfsStatus::Unsuccessful; return result; }

    const bool create_if_missing =
        disposition == 0u || disposition == 2u || disposition == 3u || disposition == 5u;
    const bool overwrite_existing =
        exists && (disposition == 0u || disposition == 4u || disposition == 5u);

    if (exists && disposition == 2u) {
        result.status = GuestVfsStatus::ObjectNameCollision;
        return result;
    }
    if (!exists && !create_if_missing) {
        result.status = GuestVfsStatus::ObjectNameNotFound;
        return result;
    }
    const bool mutating_open = (!exists && create_if_missing) || overwrite_existing;
    if (mutating_open && !want_write) {
        result.status = GuestVfsStatus::AccessDenied;
        return result;
    }
    if ((want_write || mutating_open) && !volume_writable) {
        result.status = GuestVfsStatus::AccessDenied;
        return result;
    }

    if (exists && is_dir) {
        if (overwrite_existing) {
            result.status = GuestVfsStatus::FileIsADirectory;
            return result;
        }
        if (!directory_only) {
            result.status = GuestVfsStatus::FileIsADirectory;
            return result;
        }
        result.file = std::make_shared<GuestFile>(
            *host, true, want_read, want_write, volume_writable);
        result.information = 1u;
        return result;
    }
    if (directory_only) {
        if (exists) {
            result.status = GuestVfsStatus::NotADirectory;
            return result;
        }
        std::error_code create_error;
        fs::create_directories(*host, create_error);
        if (create_error) {
            result.status = GuestVfsStatus::AccessDenied;
            return result;
        }
        result.file = std::make_shared<GuestFile>(
            *host, true, want_read, want_write, volume_writable);
        result.information = 2u;
        return result;
    }

    std::uint32_t information = exists ? 1u : 2u;
    if (!exists) {
        std::error_code create_error;
        fs::create_directories(host->parent_path(), create_error);
        if (create_error) {
            result.status = GuestVfsStatus::AccessDenied;
            return result;
        }
        std::ofstream created(*host, std::ios::binary | std::ios::out);
        if (!created) {
            result.status = GuestVfsStatus::AccessDenied;
            return result;
        }
        created.close();
    } else if (overwrite_existing) {
        std::error_code truncate_error;
        fs::resize_file(*host, 0u, truncate_error);
        if (truncate_error) {
            result.status = GuestVfsStatus::AccessDenied;
            return result;
        }
        information = 3u;
    }

    result.file = std::make_shared<GuestFile>(
        *host, false, want_read, want_write, volume_writable);
    if (!result.file->is_open()) {
        result.file.reset();
        result.status = GuestVfsStatus::AccessDenied;
        return result;
    }
    result.information = information;
    return result;
}

GuestVfs& process_vfs() noexcept {
    static GuestVfs vfs = GuestVfs::from_environment();
    return vfs;
}

} // namespace toohuman::runtime
