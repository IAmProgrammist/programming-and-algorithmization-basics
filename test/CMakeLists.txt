project(tests)

add_library(CuTest CuTest.c)

add_executable(tests RunAllTests.c TestTask1.c TestTask2.c TestTask3.c TestTask4.c)

target_link_libraries(tests practice CuTest)

add_test(NAME Test COMMAND tests)