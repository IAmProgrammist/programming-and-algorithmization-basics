cmake_minimum_required(VERSION 3.16)
project(programming_and_algorithmization_basics C CXX)

set(CMAKE_C_STANDARD 11)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(./libs/alg)
add_subdirectory(./libs/data_structures/matrix)

# First lab executables
add_executable(4A
        lab1/4A.c)
add_executable(104A
        lab1/104A.c)
add_executable(486A
        lab1/486A.c)
add_executable(513A
        lab1/513A.c)
add_executable(546A
        lab1/546A.c)
add_executable(581A
        lab1/581A.c)
add_executable(617A
        lab1/617A.c)
add_executable(630A
        lab1/630A.c)
add_executable(746A
        lab1/746A.c)
add_executable(835A
        lab1/835A.c)
add_executable(1064A
        lab1/1064A.c)
add_executable(1118A
        lab1/1118A.c)
add_executable(1244A
        lab1/1244A.c)
add_executable(1269A
        lab1/1269A.c)
add_executable(1283A
        lab1/1283A.c)
add_executable(1358A
        lab1/1358A.c)

# Second lab executables
add_executable(624A
        lab2/624A.c)
add_executable(1551A
        lab2/1551A.c)
add_executable(1426A
        lab2/1426A.c)
add_executable(1304A
        lab2/1304A.c)
add_executable(1519B
        lab2/1519B.c)
add_executable(1102A
        lab2/1102A.c)
add_executable(805A
        lab2/805A.c)
add_executable(1054A
        lab2/1054A.c)
add_executable(610A
        lab2/610A.c)
add_executable(1325A
        lab2/1325A.c)
add_executable(1196A
        lab2/1196A.c)
add_executable(1A
        lab2/1A.c)
add_executable(804A
        lab2/804A.c)
add_executable(979A
        lab2/979A.c)
add_executable(1101A
        lab2/1101A.c)
add_executable(1256A
        lab2/1256A.c)
add_executable(1373A
        lab2/1373A.c)
add_executable(1327A
        lab2/1327A.c)
add_executable(336A
        lab2/336A.c)

# Third lab executables
add_executable(1199B
        lab3/1199B.c)
add_executable(761A
        lab3/761A.c)
add_executable(1133A
        lab3/1133A.c)
add_executable(1181A
        lab3/1181A.c)
add_executable(1260A
        lab3/1260A.c)
add_executable(990A
        lab3/990A.c)
add_executable(991A
        lab3/991A.c)
add_executable(1036A
        lab3/1036A.c)
add_executable(1023A
        lab3/1023A.c)
add_executable(195A
        lab3/195A.c)
add_executable(1560B
        lab3/1560B.c)
add_executable(1539A
        lab3/1539A.c)
add_executable(1506A
        lab3/1506A.c)
add_executable(1136B
        lab3/1136B.c)

# Fourth lab executables
add_executable(41
        lab4/1.c)
add_executable(42
        lab4/2.c)
add_executable(43
        lab4/3.c)
add_executable(44
        lab4/4.c)
add_executable(45
        lab4/5.c)
add_executable(46
        lab4/6.c)
add_executable(47
        lab4/7.c)
add_executable(48
        lab4/8.c)
add_executable(49
        lab4/9.c)
add_executable(410
        lab4/10.c)
add_executable(411
        lab4/11.c)
add_executable(412
        lab4/12.c)
add_executable(413
        lab4/13.c)
add_executable(414
        lab4/14.c)
add_executable(415
        lab4/15.c)
add_executable(416
        lab4/16.c)
add_executable(417
        lab4/17.c)
add_executable(418
        lab4/18.c)
add_executable(419
        lab4/19.c)

# Fifth lab executables
add_executable(231A
        lab5/231A.c)
add_executable(977A
        lab5/977A.c)
add_executable(116A
        lab5/116A.c)
add_executable(677A
        lab5/677A.c)
add_executable(467A
        lab5/467A.c)
add_executable(432A
        lab5/432A.c)
add_executable(155A
        lab5/155A.c)
add_executable(1542A
        lab5/1542A.c)
add_executable(427A
        lab5/427A.c)
add_executable(749A
        lab5/749A.c)
add_executable(791A
        lab5/791A.c)
add_executable(1472A
        lab5/1472A.c)
add_executable(492A
        lab5/492A.c)
add_executable(1511A
        lab5/1511A.c)
add_executable(245A
        lab5/245A.c)
add_executable(1296B
        lab5/1296B.c)
add_executable(276A
        lab5/276A.c)
add_executable(598A
        lab5/598A.c)
add_executable(839A
        lab5/839A.c)
add_executable(560A
        lab5/560A.c)
add_executable(385A
        lab5/385A.c)
add_executable(11A
        lab5/11A.c)
add_executable(586A
        lab5/586A.c)
add_executable(797B_1
        lab5/797B_1.c)
add_executable(797B_2
        lab5/797B_2.c)

# Sixth lab executables
add_subdirectory(./lab6/1)
add_subdirectory(./lab6/2)
add_subdirectory(./lab6/3)
add_subdirectory(./lab6/4)
add_subdirectory(./lab6/5)
add_subdirectory(./lab6/6)
add_subdirectory(./lab6/7)
add_subdirectory(./lab6/8)
add_subdirectory(./lab6/9)
add_subdirectory(./lab6/10)
add_subdirectory(./lab6/11)
add_subdirectory(./lab6/12)
add_subdirectory(./lab6/13)
add_subdirectory(./lab6/14)
add_subdirectory(./lab6/15)
add_subdirectory(./lab6/16)

# Seventh lab executables
add_subdirectory(./lab7/1)
add_subdirectory(./lab7/2)
add_subdirectory(./lab7/3)
add_subdirectory(./lab7/4)
add_subdirectory(./lab7/5)
add_subdirectory(./lab7/6)
add_subdirectory(./lab7/7)
add_subdirectory(./lab7/8)
add_subdirectory(./lab7/9)
add_subdirectory(./lab7/10)
add_executable(1037A
        ./lab7/1037A.c)

# Seventh lab executables
add_subdirectory(./lab8/1)
add_subdirectory(./lab8/2)
add_subdirectory(./lab8/5)
add_subdirectory(./lab8/7)
add_subdirectory(./lab8/9)
add_subdirectory(./lab8/10)
add_subdirectory(./lab8/11)
add_subdirectory(./lab8/12)
add_subdirectory(./lab8/18)
add_subdirectory(./lab8/19)
add_subdirectory(./lab8/20)
add_subdirectory(./lab8/21)
add_subdirectory(./lab8/22)

# Ninth lab
add_executable(91 ./lab9/1/main.c)
target_link_libraries(91 alg)
add_executable(93 ./lab9/3/main.c)
target_link_libraries(93 alg)
add_executable(99 ./lab9/9/main.c)
target_link_libraries(99 alg)

# Tenth lab
add_executable(101 ./lab10/1.c)
add_executable(104 ./lab10/4.c)
add_executable(106 ./lab10/6.c)
add_executable(1012 ./lab10/12.c)
add_executable(1014 ./lab10/14.c)
add_executable(1015 ./lab10/15.c)
add_executable(1016 ./lab10/16.c)
add_executable(1017 ./lab10/17.c)
add_executable(1018 ./lab10/18.c)
add_executable(1019 ./lab10/19.c)
add_executable(1020 ./lab10/20.c)

# Eleventh library
add_executable(112 lab11/2.c)
target_link_libraries(112 alg)
add_executable(114 lab11/4.c)
target_link_libraries(114 alg)
add_executable(1110 lab11/10.c)
target_link_libraries(1110 alg)
add_executable(1112 lab11/12.c)
target_link_libraries(1112 alg)

# Twelfth library
add_executable(12point lab12/point.c)
target_link_libraries(12point point)
add_executable(12circle lab12/circle.c)
target_link_libraries(12circle circle)

# Fifteenth library
add_executable(15matrix lab15/main.c)
target_link_libraries(15matrix matrix)

# Sixteenth library
add_executable(16matrix lab16/main.c)
target_link_libraries(16matrix matrix)

add_executable(17 ./lab17/main.c)

add_library(str string/string_.h string/string_.c
        # string/tasks/digitToStartTransform.h
        # string/tasks/reverseWords.h
        # string/tasks/replaceDigitsBySpaces.h
        # ...
        # < файл с решением задачи для следующей лабораторной >
        # ...
        # string/tasks/hasPairOfWordsWithEqualLetterSet.h
        # string/tasks/printWordsNonEqualLastWord.h
        )

target_link_libraries(17 str)

# Twelfth lab
add_executable(lab20_experiment_1 ./lab20/task1/main.cpp)
add_executable(1635A ./lab20/task1/1635A.cpp)
add_executable(lab20_experiment_2 ./lab20/task2/main.cpp)
add_executable(lab20_experiment_3 ./lab20/task3/main.cpp)
add_executable(lab20_experiment_4 ./lab20/task4/main.cpp)
add_executable(lab20_experiment_7 ./lab20/task7/main.cpp)

# Twenty first lab
add_executable(lab20_taska ./lab21/taska.cpp)
add_executable(lab20_taskb ./lab21/taskb.cpp)
add_executable(lab20_taskc ./lab21/taskc.cpp)
add_executable(lab20_taskd ./lab21/taskd.cpp)
add_executable(lab20_taske ./lab21/taske.cpp)
add_executable(lab20_taskf ./lab21/taskf.cpp)
add_executable(lab20_taskg ./lab21/taskg.cpp)
add_executable(lab20_taskh ./lab21/taskh.cpp)
add_executable(lab20_taski ./lab21/taski.cpp)
add_executable(lab20_taskj ./lab21/taskj.cpp)
add_executable(lab20_taskk ./lab21/taskk.cpp)
add_executable(lab20_taskl ./lab21/taskl.cpp)