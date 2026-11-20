add_library(TooHumanRuntimeCore STATIC
    memory/guest_memory.cpp
    memory/guest_address_space.cpp
    image/xbox360_pe.cpp
    image/xex_imports.cpp
)
add_library(TooHumanRecomp::RuntimeCore ALIAS TooHumanRuntimeCore)

target_include_directories(TooHumanRuntimeCore
    PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}"
)
target_compile_features(TooHumanRuntimeCore PUBLIC cxx_std_20)
set_target_properties(TooHumanRuntimeCore PROPERTIES
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED ON
    POSITION_INDEPENDENT_CODE ON
)

if(TH_BUILD_RECOMP_LIB)
    add_library(TooHumanPpcRuntime STATIC
        ppc/function_table.cpp
        ppc/import_registry.cpp
    )
    target_link_libraries(TooHumanPpcRuntime
        PUBLIC TooHumanRuntimeCore TooHumanRecompLib
    )
    target_compile_features(TooHumanPpcRuntime PUBLIC cxx_std_20)
    set_target_properties(TooHumanPpcRuntime PROPERTIES
        CXX_STANDARD 20
        CXX_STANDARD_REQUIRED ON
        POSITION_INDEPENDENT_CODE ON
    )
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
endif()

if(BUILD_TESTING)
    add_executable(TooHumanGuestMemoryTests
        tests/guest_memory_tests.cpp
    )
    add_executable(TooHumanXbox360PeTests
        tests/xbox360_pe_tests.cpp
    )
    foreach(test_target IN ITEMS TooHumanGuestMemoryTests TooHumanXbox360PeTests)
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
endif()
