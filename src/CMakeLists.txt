project(practice)

add_library(practice STATIC task1.c task2.c task3.c task5.c)

target_link_libraries(practice m)