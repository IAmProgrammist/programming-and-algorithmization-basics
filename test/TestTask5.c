#include <stddef.h>

#include "CuTest.h"
#include "Tasks.h"

void testTask4FindSurvivorRegularScenario(CuTest* tc) {
    int n = 5;

    CuAssertIntEquals(tc, josephProblemFindSurvivor(n, 1), 5);
    CuAssertIntEquals(tc, josephProblemFindSurvivor(n, 2), 3);
    CuAssertIntEquals(tc, josephProblemFindSurvivor(n, 3), 4);
    CuAssertIntEquals(tc, josephProblemFindSurvivor(n, 4), 1);
    CuAssertIntEquals(tc, josephProblemFindSurvivor(n, 5), 2);
}

void testTask4FindSurvivorMBiggerThanN(CuTest* tc) {
    int n = 5;

    CuAssertIntEquals(tc, josephProblemFindSurvivor(n, 6), 5);
    CuAssertIntEquals(tc, josephProblemFindSurvivor(n, 7), 3);
    CuAssertIntEquals(tc, josephProblemFindSurvivor(n, 8), 4);
    CuAssertIntEquals(tc, josephProblemFindSurvivor(n, 9), 1);
    CuAssertIntEquals(tc, josephProblemFindSurvivor(n, 10), 2);
}

void testTask4FindSurvivorNZero(CuTest* tc) {
    int n = 0;

    CuAssertIntEquals(tc, josephProblemFindSurvivor(n, 0), -1);
}

void testTask4FindSurvivorOneNoResultsFound(CuTest* tc) {
    int n = 7;

    CuAssertIntEquals(tc, josephProblemFindMForSurvivorOne(n), -1);
}

void testTask4FindSurvivorOneNZero(CuTest* tc) {
    int n = 0;

    CuAssertIntEquals(tc, josephProblemFindMForSurvivorOne(n), -1);
}

void testTask4FindSurvivorOneRegularScenario(CuTest* tc) {
    int n = 10;

    CuAssertIntEquals(tc, josephProblemFindMForSurvivorOne(n), 8);
}

CuSuite *Task5GetSuite() {
    CuSuite *suite = CuSuiteNew();

    SUITE_ADD_TEST(suite, testTask4FindSurvivorRegularScenario);
    SUITE_ADD_TEST(suite, testTask4FindSurvivorMBiggerThanN);
    SUITE_ADD_TEST(suite, testTask4FindSurvivorNZero);

    SUITE_ADD_TEST(suite, testTask4FindSurvivorOneNoResultsFound);
    SUITE_ADD_TEST(suite, testTask4FindSurvivorOneNZero);
    SUITE_ADD_TEST(suite, testTask4FindSurvivorOneRegularScenario);

    return suite;
}