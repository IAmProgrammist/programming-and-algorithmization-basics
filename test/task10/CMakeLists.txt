add_executable(task10_test1 test1.c)
target_link_libraries(task10_test1 practice)

add_test(NAME testTask10SortTest COMMAND task10_test1)