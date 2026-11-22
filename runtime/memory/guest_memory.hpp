#pragma once

#include <cstddef>
#include <cstdint>
#include <optional>
#include <span>
#include <type_traits>

namespace toohuman::runtime {

// A non-owning view of a contiguous Xbox 360 guest address range.
// PPC scalar memory is big-endian; host byte order is never exposed here.
class GuestMemory final {
public:
    GuestMemory(std::uint32_t guest_base, std::span<std::uint8_t> storage) noexcept;

    [[nodiscard]] bool valid() const noexcept;
    [[nodiscard]] bool contains(std::uint32_t address, std::size_t size) const noexcept;
    [[nodiscard]] std::uint32_t guest_base() const noexcept;
    [[nodiscard]] std::size_t size() const noexcept;

    [[nodiscard]] std::optional<std::span<std::uint8_t>>
    view(std::uint32_t address, std::size_t size) noexcept;

    [[nodiscard]] std::optional<std::span<const std::uint8_t>>
    view(std::uint32_t address, std::size_t size) const noexcept;

    template <typename UInt>
    [[nodiscard]] std::optional<UInt> read_be(std::uint32_t address) const noexcept {
        static_assert(std::is_integral_v<UInt> && std::is_unsigned_v<UInt>,
                      "read_be requires an unsigned integer type");
        const auto bytes = view(address, sizeof(UInt));
        if (!bytes) {
            return std::nullopt;
        }

        UInt value = 0;
        for (const std::uint8_t byte : *bytes) {
            value = static_cast<UInt>((value << 8) | static_cast<UInt>(byte));
        }
        return value;
    }

    template <typename UInt>
    [[nodiscard]] bool write_be(std::uint32_t address, UInt value) noexcept {
        static_assert(std::is_integral_v<UInt> && std::is_unsigned_v<UInt>,
                      "write_be requires an unsigned integer type");
        const auto bytes = view(address, sizeof(UInt));
        if (!bytes) {
            return false;
        }

        for (std::size_t i = 0; i < sizeof(UInt); ++i) {
            const auto shift = static_cast<unsigned>((sizeof(UInt) - 1 - i) * 8);
            (*bytes)[i] = static_cast<std::uint8_t>(value >> shift);
        }
        return true;
    }

private:
    std::uint32_t guest_base_;
    std::span<std::uint8_t> storage_;
};

} // namespace toohuman::runtime
