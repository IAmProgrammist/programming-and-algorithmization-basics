project(practice)

add_library(practice STATIC task1.c task2.c task3.c task4.c)

target_link_libraries(practice m)