// File-system HLE backed by the host-directory GuestVfs.
#include "ppc/boot_hle.hpp"
#include "fs/guest_vfs.hpp"
#include "kernel/guest_kernel_objects.hpp"
#include "memory/guest_address_space.hpp"

#include <algorithm>
#include <cstdint>
#include <chrono>
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <memory>
#include <optional>
#include <string>
#include <ppc_context.h>

namespace toohuman::runtime::boot_hle {
namespace {

constexpr std::uint32_t kSuccess = 0x00000000u;
constexpr std::uint32_t kInvalidHandle = 0xC0000008u;
constexpr std::uint32_t kInvalidParameter = 0xC000000Du;
constexpr std::uint32_t kAccessViolation = 0xC0000005u;
constexpr std::uint32_t kEndOfFile = 0xC0000011u;
constexpr std::uint32_t kFileIsADirectory = 0xC00000BAu;
constexpr std::uint32_t kNotImplemented = 0xC0000002u;
constexpr std::uint32_t kAccessDenied = 0xC0000022u;
constexpr std::uint32_t kInfoLengthMismatch = 0xC0000004u;

enum class NameReadResult { Success, InvalidParameter, AccessViolation };

bool guest_range(std::uint8_t* base, std::uint32_t address,
                 std::size_t size, GuestMemoryAccess access) noexcept {
    return GuestAddressSpace::is_accessible_range(base, address, size, access);
}

std::uint8_t* at(std::uint8_t* base, std::uint32_t address) noexcept {
    return base + address;
}

std::uint32_t rd32(std::uint8_t* base, std::uint32_t address) noexcept {
    const auto* p = at(base, address);
    return (std::uint32_t(p[0]) << 24) |
           (std::uint32_t(p[1]) << 16) |
           (std::uint32_t(p[2]) << 8) |
           std::uint32_t(p[3]);
}

void wr32(std::uint8_t* base, std::uint32_t address, std::uint32_t value) noexcept {
    auto* p = at(base, address);
    p[0] = static_cast<std::uint8_t>(value >> 24);
    p[1] = static_cast<std::uint8_t>(value >> 16);
    p[2] = static_cast<std::uint8_t>(value >> 8);
    p[3] = static_cast<std::uint8_t>(value);
}

void wr64(std::uint8_t* base, std::uint32_t address, std::uint64_t value) noexcept {
    auto* p = at(base, address);
    for (unsigned i = 0; i < 8; ++i)
        p[i] = static_cast<std::uint8_t>(value >> ((7u - i) * 8u));
}

std::uint64_t rd64(std::uint8_t* base, std::uint32_t address) noexcept {
    const auto* p = at(base, address);
    std::uint64_t value = 0;
    for (unsigned i = 0; i < 8; ++i)
        value = (value << 8) | p[i];
    return value;
}

void set_iosb(std::uint8_t* base, std::uint32_t iosb,
              std::uint32_t status, std::uint32_t information) noexcept {
    if (iosb == 0) return;
    wr32(base, iosb, status);
    wr32(base, iosb + 4u, information);
}

// Xbox OBJECT_ATTRIBUTES starts with RootDirectory and ObjectName. The object
// name is an 8-byte big-endian ANSI_STRING descriptor (Length, MaximumLength,
// Buffer). Validate each guest range before dereferencing it.
NameReadResult read_ansi_string(
    std::uint8_t* base, std::uint32_t descriptor,
    std::string& value, bool allow_empty) {
    if (descriptor == 0)
        return allow_empty ? NameReadResult::Success : NameReadResult::InvalidParameter;
    if (!guest_range(base, descriptor, 8u, GuestMemoryAccess::Read))
        return NameReadResult::AccessViolation;

    const auto length = (std::uint32_t(*at(base, descriptor)) << 8) |
                        std::uint32_t(*at(base, descriptor + 1u));
    const auto maximum_length = (std::uint32_t(*at(base, descriptor + 2u)) << 8) |
                                std::uint32_t(*at(base, descriptor + 3u));
    const auto buffer = rd32(base, descriptor + 4u);
    if (length == 0) {
        value.clear();
        return allow_empty ? NameReadResult::Success : NameReadResult::InvalidParameter;
    }
    if (length > maximum_length || length > 0x8000u || buffer == 0)
        return NameReadResult::InvalidParameter;
    if (!guest_range(base, buffer, length, GuestMemoryAccess::Read))
        return NameReadResult::AccessViolation;

    value.assign(reinterpret_cast<const char*>(at(base, buffer)), length);
    for (const auto ch : value) {
        if (ch == '\0' || static_cast<unsigned char>(ch) > 0x7Fu)
            return NameReadResult::InvalidParameter;
    }
    return NameReadResult::Success;
}

NameReadResult read_object_name(std::uint8_t* base, std::uint32_t attrs,
                                std::string& name, std::uint32_t& root_handle,
                                bool& root_writable) {
    if (attrs == 0) return NameReadResult::InvalidParameter;
    if (!guest_range(base, attrs, 8u, GuestMemoryAccess::Read))
        return NameReadResult::AccessViolation;

    root_handle = rd32(base, attrs);
    if (root_handle >= 0xFFFFFFF0u) root_handle = 0;
    root_writable = true;

    const auto string_address = rd32(base, attrs + 4u);
    if (string_address == 0) return NameReadResult::InvalidParameter;
    if (!guest_range(base, string_address, 8u, GuestMemoryAccess::Read))
        return NameReadResult::AccessViolation;

    const auto length = (std::uint32_t(*at(base, string_address)) << 8) |
                        std::uint32_t(*at(base, string_address + 1u));
    const auto buffer = rd32(base, string_address + 4u);
    if (length == 0 || length > 0x8000u || buffer == 0)
        return NameReadResult::InvalidParameter;
    if (!guest_range(base, buffer, length, GuestMemoryAccess::Read))
        return NameReadResult::AccessViolation;

    name.assign(reinterpret_cast<const char*>(at(base, buffer)), length);
    if (name.find('\0') != std::string::npos)
        return NameReadResult::InvalidParameter;
    return NameReadResult::Success;
}

std::shared_ptr<GuestFile> file_from_handle(std::uint32_t handle) {
    return std::dynamic_pointer_cast<GuestFile>(
        process_kernel_objects().lookup(handle));
}

std::uint32_t open_common(std::uint8_t* base, std::uint32_t out_handle,
                          std::uint32_t access, std::uint32_t attrs,
                          std::uint32_t iosb, std::uint32_t disposition,
                          std::uint32_t options) {
    if (base == nullptr || out_handle == 0 ||
        !guest_range(base, out_handle, 4u, GuestMemoryAccess::Write) ||
        (iosb != 0 && !guest_range(base, iosb, 8u, GuestMemoryAccess::Write))) {
        return kAccessViolation;
    }

    std::string name;
    std::uint32_t root_handle = 0;
    bool root_writable = true;
    const auto name_status = read_object_name(
        base, attrs, name, root_handle, root_writable);
    if (name_status != NameReadResult::Success) {
        const auto status = name_status == NameReadResult::AccessViolation
            ? kAccessViolation : kInvalidParameter;
        set_iosb(base, iosb, status, 0);
        return status;
    }

    std::filesystem::path root;
    const std::filesystem::path* root_ptr = nullptr;
    if (root_handle != 0) {
        const auto directory = file_from_handle(root_handle);
        if (!directory) {
            set_iosb(base, iosb, kInvalidHandle, 0);
            return kInvalidHandle;
        }
        if (!directory->is_directory()) {
            set_iosb(base, iosb, kInvalidParameter, 0);
            return kInvalidParameter;
        }
        root = directory->path();
        root_ptr = &root;
        root_writable = directory->can_write();
    }

    constexpr std::uint32_t kGenericRead = 0x80000000u;
    constexpr std::uint32_t kGenericWrite = 0x40000000u;
    constexpr std::uint32_t kGenericAll = 0x10000000u;
    constexpr std::uint32_t kReadMask =
        kGenericRead | kGenericAll | 0x00000001u | 0x00000008u | 0x00000080u;
    constexpr std::uint32_t kWriteMask =
        kGenericWrite | kGenericAll | 0x00000002u | 0x00000004u |
        0x00000010u | 0x00000100u | 0x00010000u | 0x00040000u | 0x00080000u;
    const bool want_read = (access & kReadMask) != 0;
    const bool want_write = (access & kWriteMask) != 0;
    const bool directory_only = (options & 0x1u) != 0; // FILE_DIRECTORY_FILE

    if (std::getenv("TH_TRACE_FILES"))
        std::fprintf(stderr, "    [file] open '%s' access=%08X disp=%u\n",
                     name.c_str(), access, disposition);

    auto result = process_vfs().open(
        name, root_ptr, disposition, want_write, directory_only,
        root_writable, want_read);
    if (result.status != GuestVfsStatus::Success) {
        const auto status = static_cast<std::uint32_t>(result.status);
        set_iosb(base, iosb, status, 0);
        return status;
    }
    if (!result.file) {
        set_iosb(base, iosb, kAccessDenied, 0);
        return kAccessDenied;
    }

    const auto handle = process_kernel_objects().insert(result.file);
    if (!handle) {
        set_iosb(base, iosb, kAccessDenied, 0);
        return kAccessDenied;
    }
    wr32(base, out_handle, *handle);
    set_iosb(base, iosb, kSuccess, result.information);
    return kSuccess;
}

bool valid_iosb(std::uint8_t* base, std::uint32_t iosb) noexcept {
    return iosb == 0 || guest_range(base, iosb, 8u, GuestMemoryAccess::Write);
}

void signal_optional_event(std::uint32_t handle) {
    if (handle == 0) return;
    if (auto event = std::dynamic_pointer_cast<GuestEventObject>(
            process_kernel_objects().lookup(handle))) {
        (void)event->set();
    }
}

} // namespace

// xboxkrnl #0xD2. NtCreateFile(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES,
// PIO_STATUS_BLOCK, PLARGE_INTEGER alloc, ULONG attrs, ULONG share,
// ULONG disposition, [stack] ULONG options).
PPC_FUNC(NtCreateFile) {
    const auto stack_options64 = static_cast<std::uint64_t>(ctx.r1.u32) + 0x54u;
    if (stack_options64 > 0xFFFFFFFFull ||
        !guest_range(base, static_cast<std::uint32_t>(stack_options64),
                    4u, GuestMemoryAccess::Read)) {
        ctx.r3.u32 = kAccessViolation;
        return;
    }
    const auto options = rd32(base, static_cast<std::uint32_t>(stack_options64));
    ctx.r3.u32 = open_common(base, ctx.r3.u32, ctx.r4.u32, ctx.r5.u32,
                             ctx.r6.u32, ctx.r10.u32, options);
}

// xboxkrnl #0xDF. NtOpenFile(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES,
// PIO_STATUS_BLOCK, share, options).
PPC_FUNC(NtOpenFile) {
    ctx.r3.u32 = open_common(base, ctx.r3.u32, ctx.r4.u32, ctx.r5.u32,
                             ctx.r6.u32, 1u, ctx.r8.u32);
}

// xboxkrnl #0xF0. NtReadFile(h, event, apc, apcctx, iosb, buf, len, offset).
PPC_FUNC(NtReadFile) {
    const auto file = file_from_handle(ctx.r3.u32);
    if (!file) { ctx.r3.u32 = kInvalidHandle; return; }
    if (file->is_directory()) { ctx.r3.u32 = kFileIsADirectory; return; }
    if (!file->can_read()) { ctx.r3.u32 = kAccessDenied; return; }

    const auto iosb = ctx.r7.u32;
    const auto buffer = ctx.r8.u32;
    const auto length = ctx.r9.u32;
    const auto offset_ptr = ctx.r10.u32;
    const auto event = ctx.r4.u32 == 0 ? std::shared_ptr<GuestEventObject>{}
        : std::dynamic_pointer_cast<GuestEventObject>(
              process_kernel_objects().lookup(ctx.r4.u32));
    if ((ctx.r4.u32 != 0 && !event) ||
        !valid_iosb(base, iosb) ||
        (length != 0 && !guest_range(base, buffer, length, GuestMemoryAccess::Write)) ||
        (offset_ptr != 0 && !guest_range(base, offset_ptr, 8u, GuestMemoryAccess::Read))) {
        ctx.r3.u32 = kAccessViolation;
        return;
    }
    std::optional<std::uint64_t> offset;
    if (offset_ptr != 0) {
        const auto value = rd64(base, offset_ptr);
        if (value != 0xFFFFFFFFFFFFFFFFull) offset = value;
    }

    const auto got = file->read(length ? at(base, buffer) : nullptr, length, offset);
    if (got == 0 && length != 0) {
        set_iosb(base, iosb, kEndOfFile, 0);
        ctx.r3.u32 = kEndOfFile;
    } else {
        set_iosb(base, iosb, kSuccess, static_cast<std::uint32_t>(got));
        ctx.r3.u32 = kSuccess;
    }
    if (event) (void)event->set();
}

// xboxkrnl #0xFF. NtWriteFile(h, event, apc, apcctx, iosb, buf, len, offset).
PPC_FUNC(NtWriteFile) {
    const auto file = file_from_handle(ctx.r3.u32);
    if (!file) { ctx.r3.u32 = kInvalidHandle; return; }
    if (file->is_directory()) { ctx.r3.u32 = kFileIsADirectory; return; }
    if (!file->can_write()) { ctx.r3.u32 = kAccessDenied; return; }

    const auto iosb = ctx.r7.u32;
    const auto buffer = ctx.r8.u32;
    const auto length = ctx.r9.u32;
    const auto offset_ptr = ctx.r10.u32;
    const auto event = ctx.r4.u32 == 0 ? std::shared_ptr<GuestEventObject>{}
        : std::dynamic_pointer_cast<GuestEventObject>(
              process_kernel_objects().lookup(ctx.r4.u32));
    if ((ctx.r4.u32 != 0 && !event) ||
        !valid_iosb(base, iosb) ||
        (length != 0 && !guest_range(base, buffer, length, GuestMemoryAccess::Read)) ||
        (offset_ptr != 0 && !guest_range(base, offset_ptr, 8u, GuestMemoryAccess::Read))) {
        ctx.r3.u32 = kAccessViolation;
        return;
    }
    std::optional<std::uint64_t> offset;
    if (offset_ptr != 0) {
        const auto value = rd64(base, offset_ptr);
        if (value != 0xFFFFFFFFFFFFFFFFull) offset = value;
    }

    const auto wrote = file->write(length ? at(base, buffer) : nullptr, length, offset);
    if (wrote != length) {
        set_iosb(base, iosb, kAccessDenied, 0);
        ctx.r3.u32 = kAccessDenied;
        return;
    }
    set_iosb(base, iosb, kSuccess, static_cast<std::uint32_t>(wrote));
    ctx.r3.u32 = kSuccess;
    if (event) (void)event->set();
}

// xboxkrnl #0xE8. NtQueryInformationFile(h, iosb, info, len, class).
PPC_FUNC(NtQueryInformationFile) {
    const auto file = file_from_handle(ctx.r3.u32);
    if (!file) { ctx.r3.u32 = kInvalidHandle; return; }
    const auto iosb = ctx.r4.u32;
    const auto info = ctx.r5.u32;
    const auto length = ctx.r6.u32;
    const auto cls = ctx.r7.u32;
    if (!valid_iosb(base, iosb)) { ctx.r3.u32 = kAccessViolation; return; }

    std::uint32_t required = 0;
    switch (cls) {
    case 4: required = 40u; break;  // FileBasicInformation
    case 5: required = 24u; break;  // FileStandardInformation
    case 14: required = 8u; break;  // FilePositionInformation
    case 34: required = 56u; break; // FileNetworkOpenInformation
    default:
        ctx.r3.u32 = kNotImplemented;
        return;
    }
    if (length < required) { ctx.r3.u32 = kInfoLengthMismatch; return; }
    if (!guest_range(base, info, required, GuestMemoryAccess::Write)) {
        ctx.r3.u32 = kAccessViolation;
        return;
    }

    const auto size = file->size();
    const auto allocation = (size + 0xFFFu) & ~0xFFFull;
    switch (cls) {
    case 4: {
        // The portable VFS exposes host write time only. Use it for the four
        // FILE_BASIC_INFORMATION timestamps until creation/access/change
        // timestamps are tracked independently by GuestFile.
        std::uint64_t filetime = 0;
        std::error_code time_error;
        const auto last_write = std::filesystem::last_write_time(file->path(), time_error);
        if (!time_error) {
            const auto system_time =
                std::chrono::time_point_cast<std::chrono::system_clock::duration>(
                    last_write - std::filesystem::file_time_type::clock::now() +
                    std::chrono::system_clock::now());
            const auto unix_100ns =
                std::chrono::duration_cast<std::chrono::nanoseconds>(
                    system_time.time_since_epoch()).count() / 100;
            constexpr std::int64_t kWindowsEpochOffset100ns = 116444736000000000ll;
            const auto guest_time = unix_100ns + kWindowsEpochOffset100ns;
            if (guest_time > 0) filetime = static_cast<std::uint64_t>(guest_time);
        }

        std::memset(at(base, info), 0, 40u);
        wr64(base, info + 0x00u, filetime);
        wr64(base, info + 0x08u, filetime);
        wr64(base, info + 0x10u, filetime);
        wr64(base, info + 0x18u, filetime);

        const auto filename = file->path().filename().string();
        std::uint32_t attributes = file->is_directory() ? 0x10u : 0u;
        if (!filename.empty() && filename.front() == '.') attributes |= 0x02u;
        if (attributes == 0) attributes = 0x80u; // FILE_ATTRIBUTE_NORMAL.
        wr32(base, info + 0x20u, attributes);
        break;
    }
    case 5:
        std::memset(at(base, info), 0, 24u);
        wr64(base, info, allocation);
        wr64(base, info + 8u, size);
        wr32(base, info + 16u, 1u);
        *at(base, info + 20u) = 0;
        *at(base, info + 21u) = file->is_directory() ? 1u : 0u;
        break;
    case 14:
        wr64(base, info, file->position());
        break;
    case 34:
        std::memset(at(base, info), 0, 56u);
        wr64(base, info + 32u, allocation);
        wr64(base, info + 40u, size);
        wr32(base, info + 48u, file->is_directory() ? 0x10u : 0x80u);
        break;
    }
    set_iosb(base, iosb, kSuccess, required);
    ctx.r3.u32 = kSuccess;
}

// xboxkrnl #0xF7. NtSetInformationFile(h, iosb, info, len, class).
PPC_FUNC(NtSetInformationFile) {
    const auto file = file_from_handle(ctx.r3.u32);
    if (!file) { ctx.r3.u32 = kInvalidHandle; return; }
    const auto iosb = ctx.r4.u32;
    const auto info = ctx.r5.u32;
    const auto length = ctx.r6.u32;
    const auto cls = ctx.r7.u32;
    if (!valid_iosb(base, iosb)) { ctx.r3.u32 = kAccessViolation; return; }

    if (length < 8u || !guest_range(base, info, 8u, GuestMemoryAccess::Read)) {
        ctx.r3.u32 = length < 8u ? kInfoLengthMismatch : kAccessViolation;
        return;
    }
    switch (cls) {
    case 14:
        file->set_position(rd64(base, info));
        break;
    case 20:
        if (!file->can_write()) { ctx.r3.u32 = kAccessDenied; return; }
        if (!file->resize(rd64(base, info))) { ctx.r3.u32 = kAccessDenied; return; }
        break;
    default:
        ctx.r3.u32 = kNotImplemented;
        return;
    }
    set_iosb(base, iosb, kSuccess, 0);
    ctx.r3.u32 = kSuccess;
}

// xboxkrnl #0xE7. NtQueryFullAttributesFile(POBJECT_ATTRIBUTES, output).
PPC_FUNC(NtQueryFullAttributesFile) {
    std::string name;
    std::uint32_t root_handle = 0;
    bool root_writable = true;
    const auto name_status = read_object_name(
        base, ctx.r3.u32, name, root_handle, root_writable);
    if (name_status != NameReadResult::Success) {
        ctx.r3.u32 = name_status == NameReadResult::AccessViolation
            ? kAccessViolation : kInvalidParameter;
        return;
    }
    const auto out = ctx.r4.u32;
    if (!guest_range(base, out, 56u, GuestMemoryAccess::Write)) {
        ctx.r3.u32 = kAccessViolation;
        return;
    }

    std::filesystem::path root;
    const std::filesystem::path* root_ptr = nullptr;
    if (root_handle != 0) {
        const auto directory = file_from_handle(root_handle);
        if (!directory) { ctx.r3.u32 = kInvalidHandle; return; }
        if (!directory->is_directory()) { ctx.r3.u32 = kInvalidParameter; return; }
        root = directory->path();
        root_ptr = &root;
        root_writable = directory->can_write();
    }

    bool volume_writable = false;
    const auto host = process_vfs().resolve(
        name, root_ptr, &volume_writable, root_writable);
    if (!host) { ctx.r3.u32 = 0xC0000034u; return; }

    std::error_code ec;
    const bool exists = std::filesystem::exists(*host, ec);
    if (ec) { ctx.r3.u32 = kAccessDenied; return; }
    if (!exists) { ctx.r3.u32 = 0xC0000034u; return; }
    const bool is_directory = std::filesystem::is_directory(*host, ec);
    if (ec) { ctx.r3.u32 = kAccessDenied; return; }
    const auto size = is_directory ? 0u : std::filesystem::file_size(*host, ec);
    if (ec) { ctx.r3.u32 = kAccessDenied; return; }

    std::memset(at(base, out), 0, 56u);
    wr64(base, out + 32u, (size + 0xFFFu) & ~0xFFFull);
    wr64(base, out + 40u, size);
    wr32(base, out + 48u, is_directory ? 0x10u : 0x80u);
    ctx.r3.u32 = kSuccess;
}

// xboxkrnl #0xEF. NtQueryVolumeInformationFile(handle, iosb, info, length, class).
// Implement the stable volume and size records used by the Xbox 360 kernel ABI.
// Allocation units are represented as 4 KiB clusters over the host-backed VFS volume.
PPC_FUNC(NtQueryVolumeInformationFile) {
    constexpr std::uint32_t kInvalidInfoClass = 0xC0000003u;
    constexpr std::uint32_t kInfoLengthMismatch = 0xC0000004u;
    constexpr std::uint32_t kRequiredLength = 24u;
    constexpr std::uint32_t kVolumeInformationClass = 1u;
    constexpr std::uint32_t kSizeInformationClass = 3u;
    constexpr std::uint64_t kAllocationUnitBytes = 0x1000u;

    if (!valid_iosb(base, ctx.r4.u32)) {
        ctx.r3.u32 = kAccessViolation;
        return;
    }

    const auto info_class = ctx.r7.u32;
    if (info_class != kVolumeInformationClass &&
        info_class != kSizeInformationClass) {
        set_iosb(base, ctx.r4.u32, kInvalidInfoClass, 0);
        ctx.r3.u32 = kInvalidInfoClass;
        return;
    }
    if (ctx.r6.u32 < kRequiredLength) {
        set_iosb(base, ctx.r4.u32, kInfoLengthMismatch, 0);
        ctx.r3.u32 = kInfoLengthMismatch;
        return;
    }

    const auto file = file_from_handle(ctx.r3.u32);
    if (!file) {
        set_iosb(base, ctx.r4.u32, kInvalidHandle, 0);
        ctx.r3.u32 = kInvalidHandle;
        return;
    }

    const auto iosb = ctx.r4.u32;
    const auto information = ctx.r5.u32;
    if (!valid_iosb(base, iosb) ||
        !guest_range(base, information, kRequiredLength, GuestMemoryAccess::Write)) {
        ctx.r3.u32 = kAccessViolation;
        return;
    }

    std::memset(at(base, information), 0, kRequiredLength);
    if (info_class == kVolumeInformationClass) {
        // The Xbox kernel returns an empty volume label and zero serial/time
        // for this generic VFS-backed mount.
        // FILE_FS_VOLUME_INFORMATION: label begins at byte 17.
        set_iosb(base, iosb, kSuccess, 17u);
        ctx.r3.u32 = kSuccess;
        return;
    }

    std::error_code space_error;
    const auto volume_path = file->is_directory()
        ? file->path() : file->path().parent_path();
    const auto space = std::filesystem::space(volume_path, space_error);
    if (space_error ||
        space.capacity == static_cast<std::uintmax_t>(-1) ||
        space.available == static_cast<std::uintmax_t>(-1)) {
        set_iosb(base, iosb, kAccessDenied, 0);
        ctx.r3.u32 = kAccessDenied;
        return;
    }

    // FILE_FS_SIZE_INFORMATION uses 64-bit allocation-unit counts followed
    // by sectors-per-unit and bytes-per-sector. Use 512-byte sectors and
    // 4 KiB allocation units for the host-directory compatibility volume.
    const auto total_units = space.capacity / kAllocationUnitBytes;
    const auto available_units = space.available / kAllocationUnitBytes;
    wr64(base, information + 0x00u, total_units);
    wr64(base, information + 0x08u, available_units);
    wr32(base, information + 0x10u, 8u);
    wr32(base, information + 0x14u, 512u);
    set_iosb(base, iosb, kSuccess, kRequiredLength);
    ctx.r3.u32 = kSuccess;
}

// xboxkrnl #0xE4. Synchronous FILE_DIRECTORY_INFORMATION query.
PPC_FUNC(NtQueryDirectoryFile) {
    constexpr std::uint32_t kInfoLengthMismatch = 0xC0000004u;
    constexpr std::uint32_t kNoSuchFile = 0xC000000Fu;
    constexpr std::uint32_t kNoMoreFiles = 0x80000006u;

    const auto file = file_from_handle(ctx.r3.u32);
    if (!file) { ctx.r3.u32 = kInvalidHandle; return; }
    if (!file->is_directory()) { ctx.r3.u32 = 0xC0000103u; return; }
    if (!file->can_read()) { ctx.r3.u32 = kAccessDenied; return; }

    const auto iosb = ctx.r7.u32;
    const auto output = ctx.r8.u32;
    const auto length = ctx.r9.u32;
    const auto name_descriptor = ctx.r10.u32;
    if (!valid_iosb(base, iosb)) { ctx.r3.u32 = kAccessViolation; return; }
    if (length < 72u) {
        set_iosb(base, iosb, kInfoLengthMismatch, 0);
        ctx.r3.u32 = kInfoLengthMismatch;
        return;
    }
    if (length > 0x100000u ||
        !guest_range(base, output, length, GuestMemoryAccess::Write)) {
        set_iosb(base, iosb, kAccessViolation, 0);
        ctx.r3.u32 = kAccessViolation;
        return;
    }

    std::uint32_t restart_address = 0;
    const auto restart_address64 = static_cast<std::uint64_t>(ctx.r1.u32) + 0x54u;
    if (restart_address64 > 0xFFFFFFFFull ||
        !guest_range(base, static_cast<std::uint32_t>(restart_address64),
                     4u, GuestMemoryAccess::Read)) {
        set_iosb(base, iosb, kAccessViolation, 0);
        ctx.r3.u32 = kAccessViolation;
        return;
    }
    restart_address = static_cast<std::uint32_t>(restart_address64);
    const bool restart = rd32(base, restart_address) != 0;

    auto event = ctx.r4.u32 == 0 ? std::shared_ptr<GuestEventObject>{}
        : std::dynamic_pointer_cast<GuestEventObject>(
              process_kernel_objects().lookup(ctx.r4.u32));
    if (ctx.r4.u32 != 0 && !event) {
        set_iosb(base, iosb, kInvalidHandle, 0);
        ctx.r3.u32 = kInvalidHandle;
        return;
    }

    std::string pattern;
    const auto name_status = read_ansi_string(
        base, name_descriptor, pattern, true);
    if (name_status != NameReadResult::Success) {
        const auto status = name_status == NameReadResult::AccessViolation
            ? kAccessViolation : kInvalidParameter;
        set_iosb(base, iosb, status, 0);
        ctx.r3.u32 = status;
        return;
    }
    if (pattern.find_first_of("/\\:") != std::string::npos) {
        set_iosb(base, iosb, kInvalidParameter, 0);
        ctx.r3.u32 = kInvalidParameter;
        return;
    }

    GuestVfsStatus vfs_status = GuestVfsStatus::Unsuccessful;
    constexpr std::uint32_t kFileDirectoryInformationHeaderSize = 0x40u;
    const auto entry = file->next_directory_entry(
        pattern, restart, vfs_status,
        length - kFileDirectoryInformationHeaderSize);
    if (!entry) {
        const auto status = static_cast<std::uint32_t>(vfs_status);
        set_iosb(base, iosb, status, 0);
        ctx.r3.u32 = status == static_cast<std::uint32_t>(GuestVfsStatus::NoMoreFiles)
            ? kNoMoreFiles : (status == static_cast<std::uint32_t>(GuestVfsStatus::NoSuchFile)
                ? kNoSuchFile : status);
        return;
    }

    wr32(base, output + 0x00u, 0u); // NextEntryOffset: one entry per call.
    wr32(base, output + 0x04u, entry->file_index);
    wr64(base, output + 0x08u, entry->creation_time);
    wr64(base, output + 0x10u, entry->last_access_time);
    wr64(base, output + 0x18u, entry->last_write_time);
    wr64(base, output + 0x20u, entry->change_time);
    wr64(base, output + 0x28u, entry->end_of_file);
    wr64(base, output + 0x30u, entry->allocation_size);
    wr32(base, output + 0x38u, entry->attributes);
    wr32(base, output + 0x3Cu, static_cast<std::uint32_t>(entry->name.size()));
    std::memcpy(at(base, output + kFileDirectoryInformationHeaderSize),
                entry->name.data(), entry->name.size());

    // The Xbox 360 NtQueryDirectoryFile wrapper reports the supplied
    // Length in IO_STATUS_BLOCK.Information when the query succeeds.
    set_iosb(base, iosb, kSuccess, length);
    ctx.r3.u32 = kSuccess;
    if (event) (void)event->set();
}

// xboxkrnl #0xDB. NtFlushBuffersFile(h, iosb).
PPC_FUNC(NtFlushBuffersFile) {
    const auto file = file_from_handle(ctx.r3.u32);
    if (!file) { ctx.r3.u32 = kInvalidHandle; return; }
    const auto iosb = ctx.r4.u32;
    if (!valid_iosb(base, iosb)) { ctx.r3.u32 = kAccessViolation; return; }
    if (!file->flush()) { ctx.r3.u32 = kAccessDenied; return; }
    set_iosb(base, iosb, kSuccess, 0);
    ctx.r3.u32 = kSuccess;
}

} // namespace toohuman::runtime::boot_hle
