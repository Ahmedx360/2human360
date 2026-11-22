#include "fs/guest_vfs.hpp"

#include <algorithm>
#include <cctype>
#include <cstdlib>
#include <system_error>

namespace toohuman::runtime {
namespace fs = std::filesystem;
namespace {

std::string lower(std::string s) {
    std::transform(s.begin(), s.end(), s.begin(),
                   [](unsigned char c) { return static_cast<char>(std::tolower(c)); });
    return s;
}

bool strip_prefix(std::string& name, const std::string& lowered, const char* prefix) {
    const std::string p(prefix);
    if (lowered.compare(0, p.size(), p) != 0) return false;
    name.erase(0, p.size());
    return true;
}

// Finds `component` inside `dir` ignoring case; returns the real entry name if present.
std::optional<std::string> find_case_insensitive(const fs::path& dir, const std::string& component) {
    std::error_code ec;
    if (fs::exists(dir / component, ec)) return component;
    const auto want = lower(component);
    for (const auto& entry : fs::directory_iterator(dir, ec)) {
        const auto name = entry.path().filename().string();
        if (lower(name) == want) return name;
    }
    return std::nullopt;
}

} // namespace

GuestFile::GuestFile(fs::path path, bool directory, bool writable)
    : path_(std::move(path)), directory_(directory) {
    if (!directory_) {
        auto mode = std::ios::in | std::ios::binary;
        if (writable) mode |= std::ios::out;
        stream_.open(path_, mode);
    }
}

std::uint64_t GuestFile::size() const {
    std::error_code ec;
    const auto s = fs::file_size(path_, ec);
    return ec ? 0 : static_cast<std::uint64_t>(s);
}

std::size_t GuestFile::read(void* out, std::size_t length, std::optional<std::uint64_t> offset) {
    std::lock_guard lock(mutex_);
    if (!stream_.is_open()) return 0;
    stream_.clear();
    const auto at = offset.value_or(position_);
    stream_.seekg(static_cast<std::streamoff>(at));
    stream_.read(static_cast<char*>(out), static_cast<std::streamsize>(length));
    const auto got = static_cast<std::size_t>(stream_.gcount());
    stream_.clear();
    position_ = at + got;
    return got;
}

std::size_t GuestFile::write(const void* data, std::size_t length, std::optional<std::uint64_t> offset) {
    std::lock_guard lock(mutex_);
    if (!stream_.is_open()) return 0;
    stream_.clear();
    const auto at = offset.value_or(position_);
    stream_.seekp(static_cast<std::streamoff>(at));
    stream_.write(static_cast<const char*>(data), static_cast<std::streamsize>(length));
    stream_.flush();
    if (!stream_) { stream_.clear(); return 0; }
    position_ = at + length;
    return length;
}

std::uint64_t GuestFile::position() const {
    std::lock_guard lock(mutex_);
    return position_;
}

void GuestFile::set_position(std::uint64_t position) {
    std::lock_guard lock(mutex_);
    position_ = position;
}

bool GuestFile::resize(std::uint64_t new_size) {
    std::lock_guard lock(mutex_);
    std::error_code ec;
    stream_.flush();
    fs::resize_file(path_, new_size, ec);
    return !ec;
}

GuestVfs::GuestVfs(fs::path game_root, fs::path save_root)
    : game_root_(std::move(game_root)), save_root_(std::move(save_root)) {}

GuestVfs GuestVfs::from_environment() {
    const char* game = std::getenv("TH_GAME_ROOT");
    const char* save = std::getenv("TH_SAVE_ROOT");
    return GuestVfs(game ? game : "game", save ? save : "th_save");
}

std::optional<fs::path> GuestVfs::resolve(const std::string& guest_name,
                                          const fs::path* root_dir, bool* writable) const {
    std::string name = guest_name;
    std::replace(name.begin(), name.end(), '\\', '/');
    const auto lowered = lower(name);

    fs::path root;
    bool can_write = false;
    if (root_dir != nullptr) {
        // Relative to an already-open directory handle (which is already host-resolved).
        root = *root_dir;
        can_write = true;
    } else {
        strip_prefix(name, lowered, "//?/");
        strip_prefix(name, lowered, "/??/");
        const auto l2 = lower(name);
        bool game = false;
        game = strip_prefix(name, l2, "game:") || strip_prefix(name, l2, "d:") ||
               strip_prefix(name, l2, "/device/cdrom0") ||
               strip_prefix(name, l2, "/device/harddisk0/partition1/game");
        if (!game) {
            // Other volumes: drop the volume token and map into the save root.
            const auto colon = name.find(':');
            if (colon != std::string::npos && colon < 8) name.erase(0, colon + 1);
            else if (lower(name).compare(0, 8, "/device/") == 0) {
                const auto next = name.find('/', 8);
                name.erase(0, next == std::string::npos ? name.size() : next);
            }
        }
        root = game ? game_root_ : save_root_;
        can_write = !game;
    }
    if (writable) *writable = can_write;

    fs::path result = root;
    std::size_t start = 0;
    while (start <= name.size()) {
        const auto end = name.find('/', start);
        const auto component = name.substr(start, end == std::string::npos ? end : end - start);
        start = end == std::string::npos ? name.size() + 1 : end + 1;
        if (component.empty() || component == ".") continue;
        if (component == "..") return std::nullopt;
        std::error_code ec;
        if (fs::is_directory(result, ec)) {
            if (const auto real = find_case_insensitive(result, component)) {
                result /= *real;
                continue;
            }
        }
        result /= component;
    }
    return result;
}

GuestVfsOpenResult GuestVfs::open(const std::string& guest_name, const fs::path* root_dir,
                                  std::uint32_t disposition, bool want_write,
                                  bool directory_only) const {
    GuestVfsOpenResult result;
    bool writable = false;
    const auto host = resolve(guest_name, root_dir, &writable);
    if (!host) { result.status = GuestVfsStatus::ObjectNameNotFound; return result; }

    std::error_code ec;
    const bool exists = fs::exists(*host, ec);
    const bool is_dir = exists && fs::is_directory(*host, ec);
    const bool creating = disposition == 2 || disposition == 3 || disposition == 5 || disposition == 0;
    const bool modifying = want_write || disposition == 2 || disposition == 4 || disposition == 5 || disposition == 0;

    if (modifying && !writable) {
        if (!exists) { result.status = GuestVfsStatus::ObjectNameNotFound; return result; }
        if (disposition == 2) { result.status = GuestVfsStatus::ObjectNameCollision; return result; }
        // Read-only volume: allow opens, deny actual writes later.
        want_write = false;
    }
    if (exists && disposition == 2) { result.status = GuestVfsStatus::ObjectNameCollision; return result; }
    if (!exists && (disposition == 1 || disposition == 4)) {
        result.status = GuestVfsStatus::ObjectNameNotFound; return result;
    }
    if (exists && is_dir) {
        result.file = std::make_shared<GuestFile>(*host, true, false);
        result.information = 1;
        return result;
    }
    if (directory_only) {
        if (!exists && creating && writable) {
            fs::create_directories(*host, ec);
            result.file = std::make_shared<GuestFile>(*host, true, false);
            result.information = 2;
            return result;
        }
        result.status = exists ? GuestVfsStatus::NotADirectory : GuestVfsStatus::ObjectNameNotFound;
        return result;
    }
    if (!exists) {
        if (!(creating && writable)) { result.status = GuestVfsStatus::ObjectNameNotFound; return result; }
        fs::create_directories(host->parent_path(), ec);
        std::ofstream(*host, std::ios::binary).close();
        result.information = 2;
    } else if (disposition == 0 || disposition == 4 || disposition == 5) {
        if (writable) fs::resize_file(*host, 0, ec);
        result.information = 3;
    } else {
        result.information = 1;
    }
    auto file = std::make_shared<GuestFile>(*host, false, want_write && writable);
    if (file->size() > 0 || fs::exists(*host, ec)) result.file = std::move(file);
    return result;
}

GuestVfs& process_vfs() noexcept {
    static GuestVfs vfs = GuestVfs::from_environment();
    return vfs;
}

} // namespace toohuman::runtime
