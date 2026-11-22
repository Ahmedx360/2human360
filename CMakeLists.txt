cmake_minimum_required(VERSION 3.25)
project(TooHuman360Recomp LANGUAGES CXX)

include(CTest)
option(TH_BUILD_RECOMP_LIB "Build the statically recompiled Too Human PowerPC code" ON)
option(TH_BUILD_RUNTIME_CORE "Build the host-side runtime foundation" ON)
option(TH_BUILD_RUNTIME_PROBE "Build the opt-in Too Human runtime initialization probe" OFF)

if(TH_BUILD_RUNTIME_PROBE AND (NOT TH_BUILD_RUNTIME_CORE OR NOT TH_BUILD_RECOMP_LIB))
    message(FATAL_ERROR "TH_BUILD_RUNTIME_PROBE requires TH_BUILD_RUNTIME_CORE=ON and TH_BUILD_RECOMP_LIB=ON")
endif()

if(BUILD_TESTING OR TH_BUILD_RECOMP_LIB)
    find_package(Python3 3.11 REQUIRED COMPONENTS Interpreter)
endif()

if(BUILD_TESTING)
    add_test(
        NAME TooHumanRecompArtifacts
        COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/validate_recomp.py"
    )
    add_test(
        NAME TooHumanRecompPythonTests
        COMMAND "${Python3_EXECUTABLE}" -m unittest discover
            -s "${CMAKE_SOURCE_DIR}/tools/tests"
            -p "test_*.py"
    )
endif()

if(TH_BUILD_RECOMP_LIB)
    add_subdirectory(TooHumanRecompLib)
endif()

# Host runtime primitives remain independently buildable. When the generated
# library is enabled, runtime also builds its PPC function-table adapter.
if(TH_BUILD_RUNTIME_CORE)
    add_subdirectory(runtime)
endif()
