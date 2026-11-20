cmake_minimum_required(VERSION 3.25)
project(TooHuman360Recomp LANGUAGES CXX)

include(CTest)
option(TH_BUILD_RECOMP_LIB "Build the statically recompiled Too Human PowerPC code" ON)

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
            -p "test_recomp_validation.py"
    )
endif()

if(TH_BUILD_RECOMP_LIB)
    add_subdirectory(TooHumanRecompLib)
endif()
