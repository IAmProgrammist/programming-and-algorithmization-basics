add_library(circle ./circle.c ./circle.h)

target_link_libraries(circle m)
target_link_libraries(circle alg)
target_link_libraries(circle point)