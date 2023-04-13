cmake_minimum_required(VERSION 3.16)
project(programming_and_algorithmization_basics C)

set(CMAKE_C_STANDARD 11)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(libs/data_structures)

add_executable(lab14 main.c)
target_link_libraries(lab14 data_structures)