SET(lab6funcs ./lab6/1func.c lab6/2func.c ./lab6/3func.c lab6/4func.c lab6/5func.c ./lab6/8func.c ./lab6/9func.c
        ./lab6/10func.c ./lab6/11func.c lab6/6func.c lab6/7func.c lab6/12func.c
        lab6/13func.c lab6/14func.c lab6/15func.c lab6/16func.c)

SET(lab9funcs ./lab9/1func.c ./lab9/3func.c ./lab9/9func.c)

add_library(alg alg.h ${lab6funcs} ${lab9funcs})

target_link_libraries(alg m)