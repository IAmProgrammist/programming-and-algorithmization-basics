cmake_minimum_required(VERSION 3.16)
project(programming_and_algorithmization_basics C)

set(CMAKE_C_STANDARD 11)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(18 main.c)

add_library(str string/string_.h string/string_.c
         string/tasks/removeNonLetters.h
         string/tasks/removeNonLetters.c

        string/tasks/removeExtraSpaces.c
        string/tasks/removeExtraSpaces.h)

target_link_libraries(18 str)