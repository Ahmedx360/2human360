add_library(TooHumanRuntimeCore STATIC
    memory/guest_memory.cpp
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

if(BUILD_TESTING)
    add_executable(TooHumanGuestMemoryTests
        tests/guest_memory_tests.cpp
    )
    target_link_libraries(TooHumanGuestMemoryTests PRIVATE TooHumanRuntimeCore)
    target_compile_features(TooHumanGuestMemoryTests PRIVATE cxx_std_20)
    if(MSVC)
        target_compile_options(TooHumanGuestMemoryTests PRIVATE /UNDEBUG)
    else()
        target_compile_options(TooHumanGuestMemoryTests PRIVATE -UNDEBUG)
    endif()
    add_test(NAME TooHumanGuestMemoryTests COMMAND TooHumanGuestMemoryTests)
endif()
