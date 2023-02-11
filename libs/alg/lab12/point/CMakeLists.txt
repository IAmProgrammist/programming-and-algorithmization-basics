add_library(point ./point.c ./point.h)

target_link_libraries(point m)
target_link_libraries(point alg)