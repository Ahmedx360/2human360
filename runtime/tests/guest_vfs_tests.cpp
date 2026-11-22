#include "fs/guest_vfs.hpp"

#include <cassert>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <atomic>
#include <thread>

using namespace toohuman::runtime;
namespace fs = std::filesystem;

int main() {
    const auto tmp = fs::temp_directory_path() / "th_vfs_test";
    fs::remove_all(tmp);
    fs::create_directories(tmp / "game" / "Data");
    { std::ofstream(tmp / "game" / "Data" / "File.TXT", std::ios::binary) << "hello world"; }
    GuestVfs vfs(tmp / "game", tmp / "save");

    // Case-insensitive lookup through several device spellings.
    for (const char* name : {"game:\\data\\file.txt", "D:\\DATA\\FILE.TXT", "\\Device\\Cdrom0\\data\\file.txt",
                             "\\??\\game:\\Data\\File.TXT"}) {
        auto r = vfs.open(name, nullptr, 1, false, false);
        assert(r.status == GuestVfsStatus::Success);
        char buf[16]{};
        assert(r.file->read(buf, 5, 6) == 5 && std::memcmp(buf, "world", 5) == 0);
        assert(r.file->size() == 11);
    }
    // Missing files, traversal, and read-only game volume.
    assert(vfs.open("game:\\nope.bin", nullptr, 1, false, false).status == GuestVfsStatus::ObjectNameNotFound);
    assert(vfs.open("game:\\..\\x", nullptr, 1, false, false).status == GuestVfsStatus::ObjectNameNotFound);
    assert(vfs.open("game:\\new.bin", nullptr, 2, true, false).status == GuestVfsStatus::AccessDenied);
    // Save volume: create, write, read back, collision.
    auto w = vfs.open("cache:\\save\\slot0.bin", nullptr, 2, true, false);
    assert(w.status == GuestVfsStatus::Success && w.information == 2);
    assert(w.file->write("abc", 3, 0) == 3);

    // size() and writes share the per-file lock; this catches unsynchronized
    // metadata reads while the stream and path length are changing.
    std::atomic<bool> concurrent_file_failed{false};
    std::thread size_reader([&] {
        for (unsigned i = 0; i < 256; ++i) {
            const auto current_size = w.file->size();
            if (current_size > 4096u)
                concurrent_file_failed.store(true, std::memory_order_release);
        }
    });
    for (unsigned i = 0; i < 256; ++i) {
        const char value = static_cast<char>('a' + (i % 26u));
        if (w.file->write(&value, 1, 3u + i) != 1u)
            concurrent_file_failed.store(true, std::memory_order_release);
    }
    size_reader.join();
    assert(!concurrent_file_failed.load(std::memory_order_acquire));
    assert(vfs.open("cache:\\save\\slot0.bin", nullptr, 2, true, false).status == GuestVfsStatus::ObjectNameCollision);
    auto r = vfs.open("cache:\\save\\slot0.bin", nullptr, 1, false, false);
    char b[4]{};
    assert(r.status == GuestVfsStatus::Success && r.file->read(b, 3, std::nullopt) == 3 && !std::memcmp(b, "abc", 3));
    // Existing open-if must preserve content; overwrite must truncate.
    auto open_if = vfs.open("cache:\\save\\slot0.bin", nullptr, 3, false, false);
    assert(open_if.status == GuestVfsStatus::Success && open_if.information == 1u);
    char preserved[4]{};
    assert(open_if.file->read(preserved, 3, 0) == 3 && !std::memcmp(preserved, "abc", 3));
    // A read-only handle cannot request a mutating open disposition.
    auto denied_overwrite = vfs.open("cache:\\save\\slot0.bin", nullptr, 4, false, false);
    assert(denied_overwrite.status == GuestVfsStatus::AccessDenied);
    auto still_preserved = vfs.open("cache:\\save\\slot0.bin", nullptr, 1, false, false);
    char still_abc[4]{};
    assert(still_preserved.status == GuestVfsStatus::Success);
    assert(still_preserved.file->read(still_abc, 3, 0) == 3);
    assert(!std::memcmp(still_abc, "abc", 3));
    auto denied_create = vfs.open("cache:\\save\\read_only_create.bin",
                                  nullptr, 2, false, false);
    assert(denied_create.status == GuestVfsStatus::AccessDenied);
    assert(!fs::exists(tmp / "save" / "save" / "read_only_create.bin"));

    auto overwrite = vfs.open("cache:\\save\\slot0.bin", nullptr, 4, true, false);
    assert(overwrite.status == GuestVfsStatus::Success && overwrite.information == 3u);
    assert(overwrite.file->size() == 0u);

    // Rights belong to the opened handle, not just the volume.
    auto read_only_file = vfs.open("cache:\\save\\slot0.bin", nullptr, 1, false, false);
    assert(read_only_file.status == GuestVfsStatus::Success);
    assert(!read_only_file.file->can_write());
    assert(read_only_file.file->write("x", 1, 0) == 0u);
    assert(!read_only_file.file->resize(10u));
    assert(read_only_file.file->flush()); // No pending output on a read-only handle.

    // A root-directory handle preserves the read-only game-volume policy.
    auto game_dir = vfs.open("game:\\", nullptr, 1, false, true);
    assert(game_dir.status == GuestVfsStatus::Success && game_dir.file->is_directory());
    bool child_volume_writable = true;
    const auto child = vfs.resolve("new.bin", &game_dir.file->path(),
                                   &child_volume_writable, game_dir.file->volume_writable());
    assert(child && !child_volume_writable);
    assert(vfs.open("new.bin", &game_dir.file->path(), 2, true, false,
                    game_dir.file->volume_writable()).status == GuestVfsStatus::AccessDenied);
    // A read-only directory handle cannot grant create rights on a writable mount.
    auto save_dir_read = vfs.open("cache:\\save", nullptr, 1, false, true);
    assert(save_dir_read.status == GuestVfsStatus::Success);
    assert(!save_dir_read.file->can_write());
    assert(vfs.open("relative.bin", &save_dir_read.file->path(), 2, true, false,
                    save_dir_read.file->can_write()).status == GuestVfsStatus::AccessDenied);
    auto save_dir_write = vfs.open("cache:\\save", nullptr, 1, true, true);
    assert(save_dir_write.status == GuestVfsStatus::Success);
    assert(save_dir_write.file->can_write());
    auto relative_created = vfs.open("relative.bin", &save_dir_write.file->path(),
                                     2, true, false, save_dir_write.file->can_write());
    assert(relative_created.status == GuestVfsStatus::Success);

    // Existing symlinks must not escape the configured root.
    fs::create_directories(tmp / "outside");
    { std::ofstream(tmp / "outside" / "secret.txt") << "secret"; }
    std::error_code symlink_error;
    fs::create_directory_symlink(tmp / "outside", tmp / "game" / "Junction", symlink_error);
    if (!symlink_error) {
        assert(!vfs.resolve("game:\\Junction\\secret.txt", nullptr, nullptr));
    }

    // Invalid dispositions are rejected instead of silently becoming open.
    assert(vfs.open("game:\\Data\\File.TXT", nullptr, 6, false, false).status ==
           GuestVfsStatus::InvalidParameter);

    // Directory enumeration supports wildcard matching, cursor continuation,
    // restart, and explicit end-of-directory status.
    fs::create_directories(tmp / "game" / "Enumerate");
    { std::ofstream(tmp / "game" / "Enumerate" / "alpha.txt") << "a"; }
    { std::ofstream(tmp / "game" / "Enumerate" / "beta.bin") << "bb"; }
    auto enumerate = vfs.open("game:\\Enumerate", nullptr, 1, false, true);
    assert(enumerate.status == GuestVfsStatus::Success);
    GuestVfsStatus enum_status = GuestVfsStatus::Unsuccessful;
    auto first_entry = enumerate.file->next_directory_entry("a*.txt", true, enum_status);
    assert(first_entry && enum_status == GuestVfsStatus::Success);
    assert(first_entry->name == "alpha.txt");
    assert(first_entry->end_of_file == 1u);
    assert((first_entry->attributes & 0x80u) != 0u);
    auto no_more = enumerate.file->next_directory_entry("a*.txt", false, enum_status);
    assert(!no_more && enum_status == GuestVfsStatus::NoSuchFile);
    auto beta = enumerate.file->next_directory_entry("*", true, enum_status);
    assert(beta && beta->name == "alpha.txt");
    beta = enumerate.file->next_directory_entry("", false, enum_status);
    assert(beta && beta->name == "beta.bin");
    beta = enumerate.file->next_directory_entry("", false, enum_status);
    assert(!beta && enum_status == GuestVfsStatus::NoMoreFiles);
    auto denied_enum = vfs.open("game:\\Enumerate", nullptr, 1, false, true,
                                true, false);
    assert(denied_enum.status == GuestVfsStatus::Success);
    assert(!denied_enum.file->next_directory_entry("*", true, enum_status));
    assert(enum_status == GuestVfsStatus::AccessDenied);

    // Directory open.
    assert(vfs.open("game:\\", nullptr, 1, false, true).file->is_directory());
    fs::remove_all(tmp);
    return 0;
}
