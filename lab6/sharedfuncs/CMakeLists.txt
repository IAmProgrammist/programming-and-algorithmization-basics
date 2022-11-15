cmake_minimum_required(VERSION 3.16)

set(SHARED_LIB_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/inc)

set(SHARED_LIB_INCLUDE_DIR ${SHARED_LIB_INCLUDE_DIR} PARENT_SCOPE)

if(TARGET sharedfuncslab6)

    message("sharedfuncslab6 is already defined")

else()

    include_directories(${SHARED_LIB_INCLUDE_DIR})

    set(LIB_SRCS ./src/1func.c src/2func.c ./src/3func.c src/4func.c src/5func.c ./src/8func.c ./src/9func.c ./src/10func.c ./src/11func.c
            ./src/utils.c ./inc/consoleoutput.h src/6func.c src/7func.c src/12func.c src/13func.c src/14func.c)

    add_library(sharedfuncslab6 STATIC ${LIB_SRCS})

endif()