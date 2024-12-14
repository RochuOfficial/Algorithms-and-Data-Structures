cmake_minimum_required(VERSION 3.31)

add_executable(example-10-1 example-1.cpp)
add_executable(example-10-2 example-2.cpp)

if(CMAKE_BUILD_TYPE MATCHES "Debug")
    set(EXECUTABLE_OUTPUT_PATH "${PROJECT_BINARY_DIR}/debug_bin")
elseif (CMAKE_BUILD_TYPE MATCHES "Release")
    set(EXECUTABLE_OUTPUT_PATH  "${PROJECT_BINARY_DIR}/release_bin")
else ()
    set(EXECUTABLE_OUTPUT_PATH "${PROJECT_BINARY_DIR}/bin")
endif ()

set_target_properties(example-10-1 PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${EXECUTABLE_OUTPUT_PATH})
set_target_properties(example-10-2 PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${EXECUTABLE_OUTPUT_PATH})
