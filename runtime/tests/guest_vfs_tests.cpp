#include "fs/guest_vfs.hpp"

#include <array>
#include <cassert>
#include <utility>
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

    // The supplied title filetable sample contains stored-name,logical-name
    // rows. The second column is the logical name the game opens on game:.
    const std::array<std::pair<const char*, const char*>, 23> filetable_rows{{
        {"End_Credits_Credit_Eurostile32B#000.zzz.gz", "End_Credits_Credit_Eurostile32Bold_0.zzz.gz"},
        {"w00_06_AesirCyberneticsLab_huma#001.g41.gz", "w00_06_AesirCyberneticsLab_human_Tex.g41.gz"},
        {"w00_08_AesirFrontierTown_exteri#002.g00.gz", "w00_08_AesirFrontierTown_exterior_Tex.g00.gz"},
        {"w00_09_Flight_Cityscape_Night_L#003.g45.gz", "w00_09_Flight_Cityscape_Night_L1_Tex.g45.gz"},
        {"w00_09_Flight_Cityscape_Night_L#004.g45.gz", "w00_09_Flight_Cityscape_Night_L2_Tex.g45.gz"},
        {"w00_09_Flight_Cityscape_Night_L#005.g45.gz", "w00_09_Flight_Cityscape_Night_L3_Tex.g45.gz"},
        {"w00_09_Flight_Cityscape_Night_R#006.g45.gz", "w00_09_Flight_Cityscape_Night_R1_Tex.g45.gz"},
        {"w00_09_Flight_Cityscape_Night_R#007.g45.gz", "w00_09_Flight_Cityscape_Night_R2_Tex.g45.gz"},
        {"w00_09_Flight_Cityscape_Night_R#008.g45.gz", "w00_09_Flight_Cityscape_Night_R3_Tex.g45.gz"},
        {"w00_scene40_HeimdallOffice_larg#009.g05.gz", "w00_scene40_HeimdallOffice_large_Tex.g05.gz"},
        {"w01_07a_deathfromabove_arena_D0#010.g01.gz", "w01_07a_deathfromabove_arena_D00_Tex.g01.gz"},
        {"w01_07a_deathfromabove_arena_D0#011.g23.gz", "w01_07a_deathfromabove_arena_D01_Tex.g23.gz"},
        {"w02_07_Tree_Forest_Facade_DOWN_#012.g20.gz", "w02_07_Tree_Forest_Facade_DOWN_D00_Tex.g20.gz"},
        {"w02_07_Tree_Forest_Facade_UP_D0#013.g20.gz", "w02_07_Tree_Forest_Facade_UP_D00_Tex.g20.gz"},
        {"w03_10_maintenancebatteryroom_D#014.g08.gz", "w03_10_maintenancebatteryroom_D00_Tex.g08.gz"},
        {"w04_06_FctryPlantB_MchinePrts_D#015.g06.gz", "w04_06_FctryPlantB_MchinePrts_D00_Tex.g06.gz"},
        {"w04_06_FctryPlantB_MchinePrts_D#016.zzz.gz", "w04_06_FctryPlantB_MchinePrts_D02_Tex.zzz.gz"},
        {"w04_09_WalkwayC_GarmBalcony01_D#017.g06.gz", "w04_09_WalkwayC_GarmBalcony01_D00_Tex.g06.gz"},
        {"w04_10_MiniBoss_GarmBalcony02_D#018.g06.gz", "w04_10_MiniBoss_GarmBalcony02_D00_Tex.g06.gz"},
        {"w04_12_CitadelTortureGalleryA_D#019.g09.gz", "w04_12_CitadelTortureGalleryA_D00_Tex.g09.gz"},
        {"w04_13_CtdlGllryB_LwrElvtrRm_D0#020.g09.gz", "w04_13_CtdlGllryB_LwrElvtrRm_D00_Tex.g09.gz"},
        {"w04_18_CitadelBridge_DiningRm_D#021.g09.gz", "w04_18_CitadelBridge_DiningRm_D00_Tex.g09.gz"},
        {"w04_20_HelBossFightLab_cinemati#022.g07.gz", "w04_20_HelBossFightLab_cinematic_Tex.g07.gz"}
    }};
    const std::string stored_texture = filetable_rows[12].first;
    const std::string logical_texture = filetable_rows[12].second;
    const std::string stored_effect = filetable_rows[16].first;
    const std::string logical_effect = filetable_rows[16].second;
    {
        std::ofstream table(tmp / "game" / "filetable.txt", std::ios::binary);
        for (const auto& [stored_name, logical_name] : filetable_rows)
            table << stored_name << ',' << logical_name << "\r\n";
        table << "../outside.bin,Unsafe.g41.gz\r\n";
        table << std::string(43u, 'x') << ",TooLongStored.g41.gz\\r\\n";
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
    {
        std::ofstream compressed(tmp / "game" / "relative_only.zzz.gz", std::ios::binary);
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
    // Every supplied sample row maps the logical second column to the
    // stored first column, regardless of asset-group extension or #ordinal.
    for (const auto& [stored_name, logical_name] : filetable_rows) {
        const auto resolved = vfs.resolve(
            std::string("game:\\") + logical_name, nullptr, nullptr);
        assert(resolved.has_value());
        assert(resolved->filename() == stored_name);
        assert(resolved->parent_path() == fs::weakly_canonical(tmp / "game"));
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
    // Stored disc names are limited to 42 bytes even though logical aliases
    // can be longer; a 43-byte physical name must be ignored.
    assert(vfs.open("game:\\TooLongStored.g41.gz", nullptr, 1, false, false).status ==
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
    const auto game_root_path = game_dir.file->path();
    auto relative_mapped = vfs.open(
        logical_texture, &game_root_path, 1, false, false,
        game_dir.file->volume_writable());
    assert(relative_mapped.status == GuestVfsStatus::Success);
    assert(relative_mapped.file->path().filename() == stored_texture);
    auto relative_compressed = vfs.open(
        "relative_only.zzz", &game_root_path, 1, false, false,
        game_dir.file->volume_writable());
    assert(relative_compressed.status == GuestVfsStatus::Success);
    assert(relative_compressed.file->path().filename() == "relative_only.zzz.gz");
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
