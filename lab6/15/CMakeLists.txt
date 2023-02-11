cmake_minimum_required(VERSION 3.16)

include_directories(${SHARED_LIB_INCLUDE_DIR})

set(SRCS test.c)
add_executable(615 ${SRCS})
target_link_libraries(615 alg)