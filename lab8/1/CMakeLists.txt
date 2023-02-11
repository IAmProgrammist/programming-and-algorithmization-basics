cmake_minimum_required(VERSION 3.16)

add_subdirectory(./../sharedfuncs sharedfuncslab8)

include_directories(${SHARED_LIB_INCLUDE_DIR})

set(SRCS test.c)
add_executable(81 ${SRCS})
target_link_libraries(81 sharedfuncslab8)