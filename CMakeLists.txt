cmake_minimum_required(VERSION 3.16)
project(programming_and_algorithmization_basics C CXX)

set(CMAKE_C_STANDARD 11)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

enable_testing()

include_directories(include)

add_subdirectory(src)
add_subdirectory(test)