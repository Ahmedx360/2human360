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

    // The title's filetable rows are stored-name,logical-name. The logical
    // second column is resolved to the physical first-column file on game:.
    const std::string stored_texture =
        "w02_07_Tree_Forest_Facade_DOWN_#012.g20.gz";
    const std::string logical_texture =
        "w02_07_Tree_Forest_Facade_DOWN_D00_Tex.g20.gz";
    const std::string stored_effect =
        "w04_06_FctryPlantB_MchinePrts_D#016.zzz.gz";
    const std::string logical_effect =
        "w04_06_FctryPlantB_MchinePrts_D02_Tex.zzz.gz";
    {
        std::ofstream table(tmp / "game" / "filetable.txt", std::ios::binary);
        table << stored_texture << ',' << logical_texture << "\r\n"
              << stored_effect << ',' << logical_effect << "\r\n"
              << "../outside.bin,Unsafe.g41.gz\r\n";
    }
    { std::ofstream(tmp / "game" / stored_texture, std::ios::binary) << "texture"; }
    { std::ofstream(tmp / "game" / stored_effect, std::ios::binary) << "effect"; }

    // The logical contents.zzz path may be supplied by an extracted .gz
    // sibling. The VFS leaves gzip bytes intact for the guest's decompressor.
    const unsigned char gzip_signature[] = {0x1Fu, 0x8Bu, 0x08u, 0x00u};
    {
        std::ofstream compressed(tmp / "game" / "contents.zzz.gz", std::ios::binary);
        compressed.write(reinterpret_cast<const char*>(gzip_signature),
                         sizeof(gzip_signature));
    }
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
    // Resolve a logical asset name through filetable.txt and retain the
    // compressed physical filename for the guest-side gzip reader.
    auto mapped_texture = vfs.open(
        "game:\\" + logical_texture, nullptr, 1, false, false);
    assert(mapped_texture.status == GuestVfsStatus::Success);
    assert(mapped_texture.file->path().filename() == stored_texture);
    char texture_data[8]{};
    assert(mapped_texture.file->read(texture_data, 7u, 0u) == 7u);
    assert(std::memcmp(texture_data, "texture", 7u) == 0);

    auto mapped_effect = vfs.open(
        "game:\\" + logical_effect, nullptr, 1, false, false);
    assert(mapped_effect.status == GuestVfsStatus::Success);
    assert(mapped_effect.file->path().filename() == stored_effect);

    // The first column is not treated as a logical-name alias, and malformed
    // traversal rows are ignored rather than escaping the game root.
    assert(vfs.open("game:\\" + stored_texture, nullptr, 1, false, false).file->path().filename() ==
           stored_texture);
    assert(vfs.open("game:\\Unsafe.g41.gz", nullptr, 1, false, false).status ==
           GuestVfsStatus::ObjectNameNotFound);

    auto compressed_index = vfs.open(
        "game:\\contents.zzz", nullptr, 1, false, false);
    assert(compressed_index.status == GuestVfsStatus::Success);
    assert(compressed_index.file->path().filename() == "contents.zzz.gz");
    unsigned char signature[4]{};
    assert(compressed_index.file->read(signature, sizeof(signature), 0u) ==
           sizeof(signature));
    assert(std::memcmp(signature, gzip_signature, sizeof(signature)) == 0);

    // An exact uncompressed file wins when both spellings are present.
    { std::ofstream(tmp / "game" / "contents.zzz", std::ios::binary) << "plain"; }
    auto exact_index = vfs.open("game:\\contents.zzz", nullptr, 1, false, false);
    assert(exact_index.status == GuestVfsStatus::Success);
    assert(exact_index.file->path().filename() == "contents.zzz");

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
    auto too_small = enumerate.file->next_directory_entry("a*.txt", true, enum_status, 8u);
    assert(!too_small && enum_status == GuestVfsStatus::BufferOverflow);
    // A failed small-buffer query must not consume the matching entry.
    auto first_entry = enumerate.file->next_directory_entry("", false, enum_status, 9u);
    assert(first_entry && enum_status == GuestVfsStatus::Success);
    assert(first_entry->name == "alpha.txt");
    assert(first_entry->end_of_file == 1u);
    assert((first_entry->attributes & 0x80u) != 0u);
    auto no_more = enumerate.file->next_directory_entry("a*.txt", false, enum_status);
    assert(!no_more && enum_status == GuestVfsStatus::NoMoreFiles);
    auto beta = enumerate.file->next_directory_entry("*", true, enum_status);
    assert(beta && beta->name == "alpha.txt");
    beta = enumerate.file->next_directory_entry("", false, enum_status);
    assert(beta && beta->name == "beta.bin");
    beta = enumerate.file->next_directory_entry("", false, enum_status);
    assert(!beta && enum_status == GuestVfsStatus::NoMoreFiles);
    auto absent_pattern = enumerate.file->next_directory_entry("missing*", true, enum_status);
    assert(!absent_pattern && enum_status == GuestVfsStatus::NoSuchFile);
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
