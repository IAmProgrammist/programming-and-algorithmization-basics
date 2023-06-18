#include <stdbool.h>

#include "CuTest.h"
#include "Tasks.h"

// Выполняем все возможные перестановки
#define MULTI_ASSERT(ct, a, b, p, q, r, s, res) {\
    CuAssertTrue(ct, canPlaceTwoHousesInSquare(a, b, p, q, r, s) == res);\
    CuAssertTrue(ct, canPlaceTwoHousesInSquare(a, b, p, q, s, r) == res);\
    CuAssertTrue(ct, canPlaceTwoHousesInSquare(a, b, q, p, r, s) == res);\
    CuAssertTrue(ct, canPlaceTwoHousesInSquare(a, b, q, p, s, r) == res);\
    CuAssertTrue(ct, canPlaceTwoHousesInSquare(b, a, p, q, r, s) == res);\
    CuAssertTrue(ct, canPlaceTwoHousesInSquare(b, a, p, q, s, r) == res);\
    CuAssertTrue(ct, canPlaceTwoHousesInSquare(b, a, q, p, r, s) == res);\
    CuAssertTrue(ct, canPlaceTwoHousesInSquare(b, a, q, p, s, r) == res);\
    CuAssertTrue(ct, canPlaceTwoHousesInSquare(a, b, r, s, p, q) == res);\
    CuAssertTrue(ct, canPlaceTwoHousesInSquare(a, b, s, r, p, q) == res);\
    CuAssertTrue(ct, canPlaceTwoHousesInSquare(a, b, r, s, q, p) == res);\
    CuAssertTrue(ct, canPlaceTwoHousesInSquare(a, b, s, r, q, p) == res);\
    CuAssertTrue(ct, canPlaceTwoHousesInSquare(b, a, r, s, p, q) == res);\
    CuAssertTrue(ct, canPlaceTwoHousesInSquare(b, a, s, r, p, q) == res);\
    CuAssertTrue(ct, canPlaceTwoHousesInSquare(b, a, r, s, q, p) == res);\
    CuAssertTrue(ct, canPlaceTwoHousesInSquare(b, a, s, r, q, p) == res);\
}

void testTask2EmptySpace(CuTest *ct) {
    int a = 0, b = 0;
    int p = 2, q = 3;
    int r = 1, s = 5;

    MULTI_ASSERT(ct, a, b, p, q, r, s, false);
}

void testTask2NotEnoughSpace(CuTest *ct) {
    int a = 2, b = 5;
    int p = 2, q = 3;
    int r = 1, s = 5;

    MULTI_ASSERT(ct, a, b, p, q, r, s, false);
}

void testTask2EnoughSpaceCannotPlace(CuTest *ct) {
    int a = 1, b = 500;
    int p = 2, q = 3;
    int r = 1, s = 5;

    MULTI_ASSERT(ct, a, b, p, q, r, s, false);
}

void testTask2ShouldFitPerfectly(CuTest *ct) {
    int a = 4, b = 6;
    int p = 4, q = 2;
    int r = 4, s = 4;

    MULTI_ASSERT(ct, a, b, p, q, r, s, true);
}

void testTask2ShouldFitExtraSpaceLeft(CuTest *ct) {
    int a = 4, b = 8;
    int p = 2, q = 5;
    int r = 3, s = 3;

    MULTI_ASSERT(ct, a, b, p, q, r, s, true);
}

CuSuite *Task2GetSuite() {
    CuSuite *suite = CuSuiteNew();

    SUITE_ADD_TEST(suite, testTask2EmptySpace);
    SUITE_ADD_TEST(suite, testTask2NotEnoughSpace);
    SUITE_ADD_TEST(suite, testTask2EnoughSpaceCannotPlace);
    SUITE_ADD_TEST(suite, testTask2ShouldFitPerfectly);
    SUITE_ADD_TEST(suite, testTask2ShouldFitExtraSpaceLeft);

    return suite;
}