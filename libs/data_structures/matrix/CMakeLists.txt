add_library(matrix matrix.h matrix.c)

target_link_libraries(matrix m)
target_link_libraries(matrix alg)