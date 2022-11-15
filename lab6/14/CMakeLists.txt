cmake_minimum_required(VERSION 3.16)

add_subdirectory(./../sharedfuncs sharedfuncslab6)

include_directories(${SHARED_LIB_INCLUDE_DIR})

add_executable(614a testmock.c)
target_link_libraries(614a sharedfuncslab6)

add_executable(614b testunit.c)
target_link_libraries(614b sharedfuncslab6)