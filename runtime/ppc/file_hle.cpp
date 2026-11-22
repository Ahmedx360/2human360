// File-system HLE: NtCreateFile/NtOpenFile/NtReadFile/NtWriteFile and query/set information,
// backed by the host-directory GuestVfs (see fs/guest_vfs.hpp).
#include "ppc/boot_hle.hpp"
#include "fs/guest_vfs.hpp"
#include "kernel/guest_kernel_objects.hpp"

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ppc_context.h>

namespace toohuman::runtime::boot_hle {
namespace {

constexpr std::uint32_t kSuccess = 0;
constexpr std::uint32_t kInvalidHandle = 0xC0000008u;
constexpr std::uint32_t kInvalidParameter = 0xC000000Du;
constexpr std::uint32_t kEndOfFile = 0xC0000011u;
constexpr std::uint32_t kNotImplemented = 0xC0000002u;
constexpr std::uint32_t kAccessDenied = 0xC0000022u;
constexpr std::uint32_t kInfoLengthMismatch = 0xC0000004u;
constexpr std::uint32_t kNoMoreFiles = 0x80000006u;

std::uint8_t* at(std::uint8_t* base, std::uint32_t a) { return base + a; }
std::uint32_t rd32(std::uint8_t* base, std::uint32_t a) {
    std::uint32_t v; std::memcpy(&v, base + a, 4); return __builtin_bswap32(v);
}
void wr32(std::uint8_t* base, std::uint32_t a, std::uint32_t v) {
    v = __builtin_bswap32(v); std::memcpy(base + a, &v, 4);
}
void wr64(std::uint8_t* base, std::uint32_t a, std::uint64_t v) {
    v = __builtin_bswap64(v); std::memcpy(base + a, &v, 8);
}
std::uint64_t rd64(std::uint8_t* base, std::uint32_t a) {
    std::uint64_t v; std::memcpy(&v, base + a, 8); return __builtin_bswap64(v);
}
void set_iosb(std::uint8_t* base, std::uint32_t iosb, std::uint32_t status, std::uint32_t info) {
    if (iosb == 0) return;
    wr32(base, iosb, status);
    wr32(base, iosb + 4, info);
}

// OBJECT_ATTRIBUTES: {root_dir, ANSI_STRING* name, attributes}; ANSI_STRING: {u16 len, u16 max, char* buf}.
bool read_object_name(std::uint8_t* base, std::uint32_t attrs, std::string& name,
                      std::uint32_t& root_handle) {
    if (attrs == 0) return false;
    root_handle = rd32(base, attrs);
    if (root_handle >= 0xFFFFFFF0u) root_handle = 0; // pseudo-handle sentinel: no root directory
    const auto str = rd32(base, attrs + 4);
    if (str == 0) return false;
    const auto len = (static_cast<std::uint32_t>(*at(base, str)) << 8) | *at(base, str + 1);
    const auto buf = rd32(base, str + 4);
    name.assign(reinterpret_cast<const char*>(at(base, buf)), len);
    return true;
}

std::shared_ptr<GuestFile> file_from_handle(std::uint32_t handle) {
    auto object = process_kernel_objects().lookup(handle);
    if (!object || object->type() != GuestKernelObjectType::File) return nullptr;
    return std::static_pointer_cast<GuestFile>(object);
}

std::uint32_t open_common(PPCContext& ctx, std::uint8_t* base, std::uint32_t out_handle,
                          std::uint32_t access, std::uint32_t attrs, std::uint32_t iosb,
                          std::uint32_t disposition, std::uint32_t options) {
    std::string name;
    std::uint32_t root_handle = 0;
    if (std::getenv("TH_TRACE_FILES")) std::fprintf(stderr, "    [file] open attrs=%08X access=%08X\n", attrs, access);
    if (!read_object_name(base, attrs, name, root_handle)) return kInvalidParameter;
    std::filesystem::path root;
    const std::filesystem::path* root_ptr = nullptr;
    if (root_handle != 0) {
        const auto dir = file_from_handle(root_handle);
        if (!dir) return kInvalidHandle;
        root = dir->path();
        root_ptr = &root;
    }
    constexpr std::uint32_t kWriteMask = 0x40000002u | 0x00000002u | 0x00000004u | 0x40000000u | 0x10000000u;
    const bool want_write = (access & kWriteMask) != 0;
    const bool directory_only = (options & 0x1u) != 0; // FILE_DIRECTORY_FILE
    auto result = process_vfs().open(name, root_ptr, disposition, want_write, directory_only);
    if (std::getenv("TH_TRACE_FILES"))
        std::fprintf(stderr, "    [file] open '%s' disp=%u -> %08X\n", name.c_str(), disposition,
                     static_cast<unsigned>(result.status));
    if (result.status != GuestVfsStatus::Success) {
        set_iosb(base, iosb, static_cast<std::uint32_t>(result.status), 0);
        return static_cast<std::uint32_t>(result.status);
    }
    const auto handle = process_kernel_objects().insert(result.file);
    if (!handle) return 0xC0000001u;
    if (out_handle != 0) wr32(base, out_handle, *handle);
    set_iosb(base, iosb, kSuccess, result.information);
    return kSuccess;
}

} // namespace

// xboxkrnl #0xD2. NtCreateFile(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, PIO_STATUS_BLOCK,
// PLARGE_INTEGER alloc, ULONG attrs, ULONG share, ULONG disposition, [stack] ULONG options).
PPC_FUNC(NtCreateFile) {
    const auto options = rd32(base, ctx.r1.u32 + 0x54);
    ctx.r3.u32 = open_common(ctx, base, ctx.r3.u32, ctx.r4.u32, ctx.r5.u32, ctx.r6.u32,
                             ctx.r10.u32, options);
}

// xboxkrnl #0xDF. NtOpenFile(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, PIO_STATUS_BLOCK, share, options).
PPC_FUNC(NtOpenFile) {
    ctx.r3.u32 = open_common(ctx, base, ctx.r3.u32, ctx.r4.u32, ctx.r5.u32, ctx.r6.u32, 1u,
                             ctx.r8.u32);
}

// xboxkrnl #0xF0. NtReadFile(h, event, apc, apcctx, iosb, buf, len, PLARGE_INTEGER offset).
PPC_FUNC(NtReadFile) {
    const auto file = file_from_handle(ctx.r3.u32);
    const auto iosb = ctx.r7.u32;
    if (!file || file->is_directory()) { ctx.r3.u32 = kInvalidHandle; return; }
    std::optional<std::uint64_t> offset;
    if (ctx.r10.u32 != 0) {
        const auto value = rd64(base, ctx.r10.u32);
        if (value != 0xFFFFFFFFFFFFFFFFull) offset = value; // -1 means "current position"
    }
    const auto length = ctx.r9.u32;
    const auto got = file->read(base + ctx.r8.u32, length, offset);
    if (got == 0 && length != 0) {
        set_iosb(base, iosb, kEndOfFile, 0);
        ctx.r3.u32 = kEndOfFile;
    } else {
        set_iosb(base, iosb, kSuccess, static_cast<std::uint32_t>(got));
        ctx.r3.u32 = kSuccess;
    }
    if (ctx.r4.u32 != 0) {
        if (auto event = std::dynamic_pointer_cast<GuestEventObject>(
                process_kernel_objects().lookup(ctx.r4.u32))) (void)event->set();
    }
}

// xboxkrnl #0xFF. NtWriteFile(h, event, apc, apcctx, iosb, buf, len, PLARGE_INTEGER offset).
PPC_FUNC(NtWriteFile) {
    const auto file = file_from_handle(ctx.r3.u32);
    const auto iosb = ctx.r7.u32;
    if (!file || file->is_directory()) { ctx.r3.u32 = kInvalidHandle; return; }
    std::optional<std::uint64_t> offset;
    if (ctx.r10.u32 != 0) {
        const auto value = rd64(base, ctx.r10.u32);
        if (value != 0xFFFFFFFFFFFFFFFFull) offset = value;
    }
    const auto wrote = file->write(base + ctx.r8.u32, ctx.r9.u32, offset);
    if (wrote != ctx.r9.u32) { set_iosb(base, iosb, kAccessDenied, 0); ctx.r3.u32 = kAccessDenied; return; }
    set_iosb(base, iosb, kSuccess, static_cast<std::uint32_t>(wrote));
    ctx.r3.u32 = kSuccess;
}

// xboxkrnl #0xE8. NtQueryInformationFile(h, iosb, info, len, class).
PPC_FUNC(NtQueryInformationFile) {
    const auto file = file_from_handle(ctx.r3.u32);
    if (!file) { ctx.r3.u32 = kInvalidHandle; return; }
    const auto iosb = ctx.r4.u32, info = ctx.r5.u32, length = ctx.r6.u32, cls = ctx.r7.u32;
    const auto size = file->size();
    const std::uint64_t alloc = (size + 0xFFFu) & ~0xFFFull;
    std::uint32_t written = 0;
    switch (cls) {
    case 5: // FileStandardInformation: alloc, eof, links, delete_pending, directory
        if (length < 24) { ctx.r3.u32 = kInfoLengthMismatch; return; }
        wr64(base, info, alloc); wr64(base, info + 8, size);
        wr32(base, info + 16, 1);
        *at(base, info + 20) = 0; *at(base, info + 21) = file->is_directory() ? 1 : 0;
        written = 24; break;
    case 14: // FilePositionInformation
        if (length < 8) { ctx.r3.u32 = kInfoLengthMismatch; return; }
        wr64(base, info, file->position()); written = 8; break;
    case 34: // FileNetworkOpenInformation
        if (length < 56) { ctx.r3.u32 = kInfoLengthMismatch; return; }
        std::memset(at(base, info), 0, 56);
        wr64(base, info + 32, alloc); wr64(base, info + 40, size);
        wr32(base, info + 48, file->is_directory() ? 0x10u : 0x80u);
        written = 56; break;
    default:
        std::fprintf(stderr, "[TooHuman] NtQueryInformationFile class %u not implemented\n", cls);
        ctx.r3.u32 = kNotImplemented; return;
    }
    set_iosb(base, iosb, kSuccess, written);
    ctx.r3.u32 = kSuccess;
}

// xboxkrnl #0xF7. NtSetInformationFile(h, iosb, info, len, class).
PPC_FUNC(NtSetInformationFile) {
    const auto file = file_from_handle(ctx.r3.u32);
    if (!file) { ctx.r3.u32 = kInvalidHandle; return; }
    const auto iosb = ctx.r4.u32, info = ctx.r5.u32, cls = ctx.r7.u32;
    switch (cls) {
    case 14: file->set_position(rd64(base, info)); break;               // FilePositionInformation
    case 20: if (!file->resize(rd64(base, info))) { ctx.r3.u32 = kAccessDenied; return; } break; // EndOfFile
    default:
        std::fprintf(stderr, "[TooHuman] NtSetInformationFile class %u not implemented\n", cls);
        ctx.r3.u32 = kNotImplemented; return;
    }
    set_iosb(base, iosb, kSuccess, 0);
    ctx.r3.u32 = kSuccess;
}

// xboxkrnl #0xE7. NtQueryFullAttributesFile(POBJECT_ATTRIBUTES, PFILE_NETWORK_OPEN_INFORMATION).
PPC_FUNC(NtQueryFullAttributesFile) {
    std::string name;
    std::uint32_t root_handle = 0;
    if (!read_object_name(base, ctx.r3.u32, name, root_handle)) { ctx.r3.u32 = kInvalidParameter; return; }
    std::filesystem::path root;
    const std::filesystem::path* root_ptr = nullptr;
    if (root_handle != 0) {
        const auto dir = file_from_handle(root_handle);
        if (!dir) { ctx.r3.u32 = kInvalidHandle; return; }
        root = dir->path(); root_ptr = &root;
    }
    auto result = process_vfs().open(name, root_ptr, 1u, false, false);
    if (std::getenv("TH_TRACE_FILES"))
        std::fprintf(stderr, "    [file] attrs '%s' -> %08X\n", name.c_str(),
                     static_cast<unsigned>(result.status));
    if (result.status != GuestVfsStatus::Success) {
        ctx.r3.u32 = static_cast<std::uint32_t>(result.status); return;
    }
    const auto size = result.file->size();
    const auto out = ctx.r4.u32;
    std::memset(at(base, out), 0, 56);
    wr64(base, out + 32, (size + 0xFFFu) & ~0xFFFull); wr64(base, out + 40, size);
    wr32(base, out + 48, result.file->is_directory() ? 0x10u : 0x80u);
    ctx.r3.u32 = kSuccess;
}

// xboxkrnl #0xDB. NtFlushBuffersFile(h, iosb).
PPC_FUNC(NtFlushBuffersFile) {
    if (!file_from_handle(ctx.r3.u32)) { ctx.r3.u32 = kInvalidHandle; return; }
    set_iosb(base, ctx.r4.u32, kSuccess, 0);
    ctx.r3.u32 = kSuccess;
}

} // namespace toohuman::runtime::boot_hle
