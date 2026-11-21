project(TooHumanRecompLib LANGUAGES CXX)

if(NOT CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    message(FATAL_ERROR "The generated PowerPC code requires Clang/clang-cl (weak aliases and compiler builtins are used).")
endif()

set(TH_PPC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/ppc")
set(TH_SIMDE_DIR "${CMAKE_SOURCE_DIR}/tools/XenonRecomp/thirdparty/simde")
set(TH_MAPPING_FILE "${TH_PPC_DIR}/ppc_func_mapping.cpp")
set(TH_SHARED_HEADER "${TH_PPC_DIR}/ppc_recomp_shared.h")
set(TH_CONTEXT_HEADER "${TH_PPC_DIR}/ppc_context.h")

if(NOT EXISTS "${TH_SIMDE_DIR}/x86/avx.h")
    message(FATAL_ERROR "SIMDe is missing. Run: git submodule update --init --recursive")
endif()
if(NOT EXISTS "${TH_MAPPING_FILE}" OR NOT EXISTS "${TH_SHARED_HEADER}" OR NOT EXISTS "${TH_CONTEXT_HEADER}")
    message(FATAL_ERROR "Generated PPC files are incomplete. Regenerate TooHumanRecompLib/ppc before building.")
endif()

file(GLOB TH_PPC_INPUTS CONFIGURE_DEPENDS "${TH_PPC_DIR}/ppc_recomp.*.cpp")
if(NOT TH_PPC_INPUTS)
    message(FATAL_ERROR "No ppc_recomp.*.cpp files found in TooHumanRecompLib/ppc.")
endif()

# Normalize historical emitter defects in build-directory copies only.
set(TH_PPC_SOURCES)
set(TH_PREPARED_DIR "${CMAKE_CURRENT_BINARY_DIR}/prepared_ppc")
foreach(TH_SOURCE IN LISTS TH_PPC_INPUTS)
    get_filename_component(TH_NAME "${TH_SOURCE}" NAME)
    # Run the normalizer over every generated unit. It is idempotent and
    # repairs both known historical units and newly discovered emitter defects
    # (for example scalar PPC scratch registers emitted with vector indexing).
    set(TH_PREPARED_SOURCE "${TH_PREPARED_DIR}/${TH_NAME}")
    add_custom_command(
        OUTPUT "${TH_PREPARED_SOURCE}"
        COMMAND "${CMAKE_COMMAND}" -E make_directory "${TH_PREPARED_DIR}"
        COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/fix_generated_cpp.py"
            "${TH_SOURCE}" --output "${TH_PREPARED_SOURCE}"
        DEPENDS "${TH_SOURCE}" "${CMAKE_SOURCE_DIR}/tools/fix_generated_cpp.py"
        COMMENT "Normalizing XenonRecomp output: ${TH_NAME}"
        VERBATIM
    )
    set_source_files_properties("${TH_PREPARED_SOURCE}" PROPERTIES GENERATED TRUE)
    list(APPEND TH_PPC_SOURCES "${TH_PREPARED_SOURCE}")
endforeach()

list(APPEND TH_PPC_SOURCES "${TH_MAPPING_FILE}")
add_library(TooHumanRecompLib STATIC ${TH_PPC_SOURCES})
add_library(TooHumanRecomp::GameCode ALIAS TooHumanRecompLib)

target_include_directories(TooHumanRecompLib PUBLIC
    "${TH_PPC_DIR}"
    "${TH_SIMDE_DIR}"
)
target_compile_features(TooHumanRecompLib PUBLIC cxx_std_20)
set_target_properties(TooHumanRecompLib PROPERTIES
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED ON
    POSITION_INDEPENDENT_CODE ON
)

if(MSVC)
    target_compile_options(TooHumanRecompLib PRIVATE /w /EHs-c- /GR- -fno-strict-aliasing)
else()
    target_compile_options(TooHumanRecompLib PRIVATE -w -fno-exceptions -fno-rtti -fno-strict-aliasing)
endif()
