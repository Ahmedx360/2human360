find_package(Threads REQUIRED)

add_library(TooHumanRuntimeCore STATIC
    memory/guest_memory.cpp
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
    add_library(TooHumanBootHle STATIC ppc/boot_hle.cpp)
    target_include_directories(TooHumanBootHle PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}"
        "${CMAKE_SOURCE_DIR}/TooHumanRecompLib/ppc"
        "${TH_SIMDE_DIR}"
    )
    target_link_libraries(TooHumanBootHle PUBLIC TooHumanRuntimeCore)
    target_compile_features(TooHumanBootHle PUBLIC cxx_std_20)
    if(BUILD_TESTING)
        add_executable(TooHumanBootHleTests tests/boot_hle_tests.cpp)
        target_link_libraries(TooHumanBootHleTests PRIVATE TooHumanBootHle)
        if(MSVC)
            target_compile_options(TooHumanBootHleTests PRIVATE /UNDEBUG)
        else()
            target_compile_options(TooHumanBootHleTests PRIVATE -UNDEBUG)
        endif()
        add_test(NAME TooHumanBootHleTests COMMAND TooHumanBootHleTests)
    endif()
else()
    message(STATUS "SIMDe not found (${TH_SIMDE_DIR}); skipping TooHumanBootHle. Run: git submodule update --init --recursive")
endif()

if(TH_BUILD_RECOMP_LIB)
    add_library(TooHumanPpcRuntime STATIC
        ppc/function_table.cpp
        ppc/guest_thread_manager.cpp
        ppc/import_registry.cpp
        ppc/boot_hle_register.cpp
        ppc/title_runtime.cpp
    )
    target_link_libraries(TooHumanPpcRuntime
        PUBLIC TooHumanRuntimeCore TooHumanRecompLib
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
