project(practice)

add_library(practice STATIC task1.c)

target_link_libraries(practice m)