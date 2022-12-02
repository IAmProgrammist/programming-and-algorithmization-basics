cmake_minimum_required(VERSION 3.16)

set(SHARED_LIB_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/inc)

set(SHARED_LIB_INCLUDE_DIR ${SHARED_LIB_INCLUDE_DIR} PARENT_SCOPE)

if(TARGET sharedfuncslab8)

else()

    include_directories(${SHARED_LIB_INCLUDE_DIR})

    set(LIB_SRCS src/1func.c src/2func.c src/5func.c src/7func.c src/9func.c src/10func.c src/11func.c src/12func.c src/18func.c src/19func.c src/20func.c src/21func.c src/22func.c)

    add_library(sharedfuncslab8 STATIC ${LIB_SRCS})

    target_link_libraries(sharedfuncslab8 m)

endif()