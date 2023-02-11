SET(lab6funcs ./lab6/1func.c lab6/2func.c ./lab6/3func.c lab6/4func.c lab6/5func.c ./lab6/8func.c ./lab6/9func.c
        ./lab6/10func.c ./lab6/11func.c lab6/6func.c lab6/7func.c lab6/12func.c
        lab6/13func.c lab6/14func.c lab6/15func.c lab6/16func.c)

SET(lab9funcs ./lab9/1func.c ./lab9/3func.c ./lab9/9func.c)

SET(lab11funcs ./lab11/1func.c ./lab11/2func.c ./lab11/3func.c ./lab11/4func.c ./lab11/5func.c ./lab11/6func.c
        ./lab11/6func.c ./lab11/7func.c ./lab11/8func.c ./lab11/10func.c ./lab11/11func.c ./lab11/12func.c ./lab11/13func.c)

add_library(alg alg.h ${lab6funcs} ${lab9funcs} ${lab11funcs})

target_link_libraries(alg m)

add_subdirectory(./lab12/point)
add_subdirectory(./lab12/circle)