#include "fs/guest_vfs.hpp"

#include <cassert>
#include <cstring>
#include <filesystem>
#include <fstream>

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
    assert(vfs.open("game:\\new.bin", nullptr, 2, true, false).status == GuestVfsStatus::ObjectNameNotFound);
    // Save volume: create, write, read back, collision.
    auto w = vfs.open("cache:\\save\\slot0.bin", nullptr, 2, true, false);
    assert(w.status == GuestVfsStatus::Success && w.information == 2);
    assert(w.file->write("abc", 3, 0) == 3);
    assert(vfs.open("cache:\\save\\slot0.bin", nullptr, 2, true, false).status == GuestVfsStatus::ObjectNameCollision);
    auto r = vfs.open("cache:\\save\\slot0.bin", nullptr, 1, false, false);
    char b[4]{};
    assert(r.status == GuestVfsStatus::Success && r.file->read(b, 3, std::nullopt) == 3 && !std::memcmp(b, "abc", 3));
    // Directory open.
    assert(vfs.open("game:\\", nullptr, 1, false, true).file->is_directory());
    fs::remove_all(tmp);
    return 0;
}
