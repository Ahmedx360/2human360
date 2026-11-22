find_package(Threads REQUIRED)

add_library(TooHumanRuntimeCore STATIC
    kernel/guest_kernel_objects.cpp
    fs/guest_vfs.cpp
    memory/guest_memory.cpp
    memory/guest_mmio.cpp
    gpu/pm4_packet.cpp
    memory/guest_heap.cpp
    memory/guest_address_space.cpp
    image/xbox360_pe.cpp
    image/xex_image.cpp
    image/xex_imports.cpp
    ppc/title_import_manifest.cpp
)
add_library(TooHumanRecomp::RuntimeCore ALIAS TooHumanRuntimeCore)

add_executable(TooHumanXexImportAudit ../tools/xex_import_audit.cpp)
target_link_libraries(TooHumanXexImportAudit PRIVATE TooHumanRuntimeCore)
target_compile_features(TooHumanXexImportAudit PRIVATE cxx_std_20)

target_include_directories(TooHumanRuntimeCore
    PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}"
)
target_link_libraries(TooHumanRuntimeCore PUBLIC Threads::Threads)
target_compile_features(TooHumanRuntimeCore PUBLIC cxx_std_20)
set_target_properties(TooHumanRuntimeCore PROPERTIES
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED ON
    POSITION_INDEPENDENT_CODE ON
)

# Early-startup HLE. The handlers need only the generated ppc_context.h/ppc_config.h and SIMDe,
# not the 375-unit game library, so they build and test without it.
if(NOT DEFINED TH_SIMDE_DIR)
    set(TH_SIMDE_DIR "${CMAKE_SOURCE_DIR}/tools/XenonRecomp/thirdparty/simde")
endif()
if(EXISTS "${TH_SIMDE_DIR}/x86/avx.h")
    add_library(TooHumanBootHle STATIC ppc/boot_hle.cpp ppc/file_hle.cpp)
    target_include_directories(TooHumanBootHle PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}"
        "${CMAKE_SOURCE_DIR}/TooHumanRecompLib/ppc"
        "${TH_SIMDE_DIR}"
    )
    target_link_libraries(TooHumanBootHle PUBLIC TooHumanRuntimeCore)
    target_compile_features(TooHumanBootHle PUBLIC cxx_std_20)
else()
    message(STATUS "SIMDe not found (${TH_SIMDE_DIR}); skipping TooHumanBootHle. Run: git submodule update --init --recursive")
endif()

if(BUILD_TESTING)
    add_executable(TooHumanGuestMmioTests tests/guest_mmio_tests.cpp)
    target_link_libraries(TooHumanGuestMmioTests PRIVATE TooHumanRuntimeCore)
    target_compile_features(TooHumanGuestMmioTests PRIVATE cxx_std_20)
    if(MSVC)
        target_compile_options(TooHumanGuestMmioTests PRIVATE /UNDEBUG)
    else()
        target_compile_options(TooHumanGuestMmioTests PRIVATE -UNDEBUG)
    endif()
    add_test(NAME TooHumanGuestMmioTests COMMAND TooHumanGuestMmioTests)

    add_executable(TooHumanPm4PacketTests tests/pm4_packet_tests.cpp)
    target_link_libraries(TooHumanPm4PacketTests PRIVATE TooHumanRuntimeCore)
    target_compile_features(TooHumanPm4PacketTests PRIVATE cxx_std_20)
    if(MSVC)
        target_compile_options(TooHumanPm4PacketTests PRIVATE /UNDEBUG)
    else()
        target_compile_options(TooHumanPm4PacketTests PRIVATE -UNDEBUG)
    endif()
    add_test(NAME TooHumanPm4PacketTests COMMAND TooHumanPm4PacketTests)

    add_executable(TooHumanPm4DispatchTests tests/pm4_dispatch_tests.cpp)
    target_link_libraries(TooHumanPm4DispatchTests PRIVATE TooHumanRuntimeCore)
    target_compile_features(TooHumanPm4DispatchTests PRIVATE cxx_std_20)
    if(MSVC)
        target_compile_options(TooHumanPm4DispatchTests PRIVATE /UNDEBUG)
    else()
        target_compile_options(TooHumanPm4DispatchTests PRIVATE -UNDEBUG)
    endif()
    add_test(NAME TooHumanPm4DispatchTests COMMAND TooHumanPm4DispatchTests)
endif()

if(BUILD_TESTING)
    add_executable(TooHumanGuestKernelObjectTests tests/guest_kernel_objects_tests.cpp)
    target_link_libraries(TooHumanGuestKernelObjectTests PRIVATE TooHumanRuntimeCore)
    target_compile_features(TooHumanGuestKernelObjectTests PRIVATE cxx_std_20)
    if(MSVC)
        target_compile_options(TooHumanGuestKernelObjectTests PRIVATE /UNDEBUG)
    else()
        target_compile_options(TooHumanGuestKernelObjectTests PRIVATE -UNDEBUG)
    endif()
    add_test(NAME TooHumanGuestKernelObjectTests COMMAND TooHumanGuestKernelObjectTests)
endif()

if(BUILD_TESTING)
    add_executable(TooHumanGuestVfsTests tests/guest_vfs_tests.cpp)
    target_link_libraries(TooHumanGuestVfsTests PRIVATE TooHumanRuntimeCore)
    target_compile_options(TooHumanGuestVfsTests PRIVATE $<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-UNDEBUG> $<$<CXX_COMPILER_ID:MSVC>:/UNDEBUG>)
    add_test(NAME TooHumanGuestVfsTests COMMAND TooHumanGuestVfsTests)
endif()

if(TH_BUILD_RECOMP_LIB)
    add_library(TooHumanPpcRuntime STATIC
        ppc/function_table.cpp
        ppc/guest_thread_manager.cpp
        ppc/guest_thread_execution.cpp
        ppc/guest_thread_runtime.cpp
        ppc/import_registry.cpp
        ppc/boot_hle_register.cpp
        ppc/title_runtime.cpp
    )
    # Generated PPC accessors call the runtime MMIO bus, so the game-code
    # archive must precede RuntimeCore when a final executable resolves symbols.
    target_link_libraries(TooHumanPpcRuntime
        PUBLIC TooHumanRecompLib TooHumanRuntimeCore
    )
    if(TARGET TooHumanBootHle)
        target_link_libraries(TooHumanPpcRuntime PUBLIC TooHumanBootHle)
    endif()
    target_compile_features(TooHumanPpcRuntime PUBLIC cxx_std_20)
    set_target_properties(TooHumanPpcRuntime PROPERTIES
        CXX_STANDARD 20
        CXX_STANDARD_REQUIRED ON
        POSITION_INDEPENDENT_CODE ON
    )
endif()

# The boot-HLE tests exercise both the handlers and their integration with the
# PPC import registry. Declare them only after TooHumanPpcRuntime exists so
# CMake resolves the dependency as a target rather than a plain -l library.
if(BUILD_TESTING AND TARGET TooHumanBootHle AND TARGET TooHumanPpcRuntime)
    add_executable(TooHumanBootHleTests tests/boot_hle_tests.cpp)
    target_link_libraries(TooHumanBootHleTests PRIVATE TooHumanBootHle TooHumanPpcRuntime)
    if(MSVC)
        target_compile_options(TooHumanBootHleTests PRIVATE /UNDEBUG)
    else()
        target_compile_options(TooHumanBootHleTests PRIVATE -UNDEBUG)
    endif()
    add_test(NAME TooHumanBootHleTests COMMAND TooHumanBootHleTests)
endif()

if(TH_BUILD_RUNTIME_PROBE)
    add_executable(TooHumanRuntimeProbe ../tools/runtime_probe.cpp)
    target_link_libraries(TooHumanRuntimeProbe PRIVATE TooHumanPpcRuntime)
    target_compile_features(TooHumanRuntimeProbe PRIVATE cxx_std_20)
endif()

if(BUILD_TESTING AND TH_BUILD_RECOMP_LIB)
    add_executable(TooHumanPpcImportRegistryTests
        tests/ppc_import_registry_tests.cpp
    )
    target_link_libraries(TooHumanPpcImportRegistryTests PRIVATE TooHumanPpcRuntime)
    target_compile_features(TooHumanPpcImportRegistryTests PRIVATE cxx_std_20)
    if(MSVC)
        target_compile_options(TooHumanPpcImportRegistryTests PRIVATE /UNDEBUG)
    else()
        target_compile_options(TooHumanPpcImportRegistryTests PRIVATE -UNDEBUG)
    endif()
    add_test(NAME TooHumanPpcImportRegistryTests COMMAND TooHumanPpcImportRegistryTests)

    add_executable(TooHumanGuestThreadManagerTests
        tests/guest_thread_manager_tests.cpp
    )
    target_link_libraries(TooHumanGuestThreadManagerTests PRIVATE TooHumanPpcRuntime)
    target_compile_features(TooHumanGuestThreadManagerTests PRIVATE cxx_std_20)
    if(MSVC)
        target_compile_options(TooHumanGuestThreadManagerTests PRIVATE /UNDEBUG)
    else()
        target_compile_options(TooHumanGuestThreadManagerTests PRIVATE -UNDEBUG)
    endif()
    add_test(NAME TooHumanGuestThreadManagerTests COMMAND TooHumanGuestThreadManagerTests)

    add_executable(TooHumanGuestThreadRuntimeTests
        tests/guest_thread_runtime_tests.cpp
    )
    target_link_libraries(TooHumanGuestThreadRuntimeTests PRIVATE TooHumanPpcRuntime)
    target_compile_features(TooHumanGuestThreadRuntimeTests PRIVATE cxx_std_20)
    if(MSVC)
        target_compile_options(TooHumanGuestThreadRuntimeTests PRIVATE /UNDEBUG)
    else()
        target_compile_options(TooHumanGuestThreadRuntimeTests PRIVATE -UNDEBUG)
    endif()
    add_test(NAME TooHumanGuestThreadRuntimeTests COMMAND TooHumanGuestThreadRuntimeTests)

    add_executable(TooHumanGuestThreadStartupTests
        tests/guest_thread_startup_tests.cpp
    )
    target_link_libraries(TooHumanGuestThreadStartupTests PRIVATE TooHumanPpcRuntime)
    target_compile_features(TooHumanGuestThreadStartupTests PRIVATE cxx_std_20)
    if(MSVC)
        target_compile_options(TooHumanGuestThreadStartupTests PRIVATE /UNDEBUG)
    else()
        target_compile_options(TooHumanGuestThreadStartupTests PRIVATE -UNDEBUG)
    endif()
    add_test(NAME TooHumanGuestThreadStartupTests COMMAND TooHumanGuestThreadStartupTests)
endif()

if(BUILD_TESTING)
    add_executable(TooHumanGuestHeapTests tests/guest_heap_tests.cpp)
    target_link_libraries(TooHumanGuestHeapTests PRIVATE TooHumanRuntimeCore)
    target_compile_features(TooHumanGuestHeapTests PRIVATE cxx_std_20)
    if(MSVC)
        target_compile_options(TooHumanGuestHeapTests PRIVATE /UNDEBUG)
    else()
        target_compile_options(TooHumanGuestHeapTests PRIVATE -UNDEBUG)
    endif()
    add_test(NAME TooHumanGuestHeapTests COMMAND TooHumanGuestHeapTests)

    add_executable(TooHumanGuestMemoryTests
        tests/guest_memory_tests.cpp
    )
    add_executable(TooHumanXbox360PeTests
        tests/xbox360_pe_tests.cpp
    )
    add_executable(TooHumanXexImageTests
        tests/xex_image_tests.cpp
    )
    foreach(test_target IN ITEMS TooHumanGuestMemoryTests TooHumanXbox360PeTests TooHumanXexImageTests)
        target_link_libraries(${test_target} PRIVATE TooHumanRuntimeCore)
        target_compile_features(${test_target} PRIVATE cxx_std_20)
        if(MSVC)
            target_compile_options(${test_target} PRIVATE /UNDEBUG)
        else()
            target_compile_options(${test_target} PRIVATE -UNDEBUG)
        endif()
    endforeach()
    add_test(NAME TooHumanGuestMemoryTests COMMAND TooHumanGuestMemoryTests)
    add_test(NAME TooHumanXbox360PeTests COMMAND TooHumanXbox360PeTests)
    add_test(NAME TooHumanXexImageTests COMMAND TooHumanXexImageTests)
endif()
