#include <string.h>
#include <math.h>
#include <stdio.h>

#include "CuTest.h"
#include "Tasks.h"

#define EPS 0.000001
#define MESSAGE_SIZE 1000

int isEqual(float a, float b) {
    return fabs(b - a) < EPS;
}

#define ROOTS_ASSERT(tc, a, b, c, expectedX1, expectedX2, actualX1, actualX2) {\
    printf("%f %f %f %.6f&%.6f\n", a, b, c, isEqual(actualX1, expectedX1) ? actualX1 : actualX2, isEqual(actualX2, expectedX2) ? actualX2 : actualX1);                                                                           \
    char buf[MESSAGE_SIZE];\
    snprintf(buf, MESSAGE_SIZE * sizeof(buf[0]),\
             "For a = %.4G, b = %.4G, c = %.4G decision should be x1 = %.4G and x2 = %.4G. Actual are x1 = %.4G and x2 = %.4G",\
             a, b, c, expectedX1, expectedX2, actualX1, actualX2);\
    CuAssert(tc, buf, isEqual(actualX1, expectedX1) && isEqual(actualX2, expectedX2) ||\
                      isEqual(actualX2, expectedX1) && isEqual(actualX1, expectedX2));\
}

void testTask1APositivePositiveIntRoots(CuTest *tc) {
    float a = 2;
    float b = -12;
    float c = 16;
    float expectedX1 = 2;
    float expectedX2 = 4;

    float actualX1, actualX2;
    solveSquareEquation(a, b, c, &actualX1, &actualX2);

    ROOTS_ASSERT(tc, a, b, c, expectedX1, expectedX2, actualX1, actualX2);
}

void testTask1APositivePositiveRealRoots(CuTest *tc) {
    float a = 2;
    float b = -6 * sqrtf(2);
    float c = 8;
    float expectedX1 = sqrtf(2);
    float expectedX2 = 2 * sqrtf(2);

    float actualX1, actualX2;
    solveSquareEquation(a, b, c, &actualX1, &actualX2);

    ROOTS_ASSERT(tc, a, b, c, expectedX1, expectedX2, actualX1, actualX2);
}

void testTask1APositivePositiveAndNegativeIntRoots(CuTest *tc) {
    float a = 2;
    float b = 4;
    float c = -16;
    float expectedX1 = 2;
    float expectedX2 = -4;

    float actualX1, actualX2;
    solveSquareEquation(a, b, c, &actualX1, &actualX2);

    ROOTS_ASSERT(tc, a, b, c, expectedX1, expectedX2, actualX1, actualX2);
}

void testTask1APositivePositiveAndNegativeRealRoots(CuTest *tc) {
    float a = 1.5f;
    float b = -6;
    float c = -14.0f / 3;
    float expectedX1 = 14.0f / 3;
    float expectedX2 = -2.0f / 3;

    float actualX1, actualX2;
    solveSquareEquation(a, b, c, &actualX1, &actualX2);

    ROOTS_ASSERT(tc, a, b, c, expectedX1, expectedX2, actualX1, actualX2);
}

void testTask1APositiveZeroAndNegativeIntRoots(CuTest *tc) {
    float a = 2;
    float b = 6;
    float c = 0;
    float expectedX1 = -3;
    float expectedX2 = 0;

    float actualX1, actualX2;
    solveSquareEquation(a, b, c, &actualX1, &actualX2);

    ROOTS_ASSERT(tc, a, b, c, expectedX1, expectedX2, actualX1, actualX2);
}

void testTask1APositiveZeroAndNegativeRealRoots(CuTest *tc) {
    float a = 3;
    float b = 1;
    float c = 0;
    float expectedX1 = -1.0f / 3;
    float expectedX2 = 0;

    float actualX1, actualX2;
    solveSquareEquation(a, b, c, &actualX1, &actualX2);

    ROOTS_ASSERT(tc, a, b, c, expectedX1, expectedX2, actualX1, actualX2);
}

void testTask1APositivePositiveAndZeroIntRoots(CuTest *tc) {
    float a = 2;
    float b = -6;
    float c = 0;
    float expectedX1 = 3;
    float expectedX2 = 0;

    float actualX1, actualX2;
    solveSquareEquation(a, b, c, &actualX1, &actualX2);

    ROOTS_ASSERT(tc, a, b, c, expectedX1, expectedX2, actualX1, actualX2);
}

void testTask1APositivePositiveAndZeroRealRoots(CuTest *tc) {
    float a = 3;
    float b = -1;
    float c = 0;
    float expectedX1 = 1.0f / 3;
    float expectedX2 = 0;

    float actualX1, actualX2;
    solveSquareEquation(a, b, c, &actualX1, &actualX2);

    ROOTS_ASSERT(tc, a, b, c, expectedX1, expectedX2, actualX1, actualX2);
}

void testTask1APositiveNegativeIntRoots(CuTest *tc) {
    float a = 2;
    float b = 12;
    float c = 16;
    float expectedX1 = -2;
    float expectedX2 = -4;

    float actualX1, actualX2;
    solveSquareEquation(a, b, c, &actualX1, &actualX2);

    ROOTS_ASSERT(tc, a, b, c, expectedX1, expectedX2, actualX1, actualX2);
}

void testTask1APositiveNegativeRealRoots(CuTest *tc) {
    float a = 2;
    float b = 6 * sqrtf(2);
    float c = 8;
    float expectedX1 = -sqrtf(2);
    float expectedX2 = -2 * sqrtf(2);

    float actualX1, actualX2;
    solveSquareEquation(a, b, c, &actualX1, &actualX2);

    ROOTS_ASSERT(tc, a, b, c, expectedX1, expectedX2, actualX1, actualX2);
}

void testTask1ANegativeNegativeIntRoots(CuTest *tc) {
    float a = -2;
    float b = -12;
    float c = -16;
    float expectedX1 = -2;
    float expectedX2 = -4;

    float actualX1, actualX2;
    solveSquareEquation(a, b, c, &actualX1, &actualX2);

    ROOTS_ASSERT(tc, a, b, c, expectedX1, expectedX2, actualX1, actualX2);
}

void testTask1ANegativeNegativeRealRoots(CuTest *tc) {
    float a = -2;
    float b = -6 * sqrtf(2);
    float c = -8;
    float expectedX1 = -sqrtf(2);
    float expectedX2 = -2 * sqrtf(2);

    float actualX1, actualX2;
    solveSquareEquation(a, b, c, &actualX1, &actualX2);

    ROOTS_ASSERT(tc, a, b, c, expectedX1, expectedX2, actualX1, actualX2);
}

void testTask1ANegativePositiveAndNegativeIntRoots(CuTest *tc) {
    float a = -2;
    float b = 4;
    float c = 16;
    float expectedX1 = -2;
    float expectedX2 = 4;

    float actualX1, actualX2;
    solveSquareEquation(a, b, c, &actualX1, &actualX2);

    ROOTS_ASSERT(tc, a, b, c, expectedX1, expectedX2, actualX1, actualX2);
}

void testTask1ANegativePositiveAndNegativeRealRoots(CuTest *tc) {
    float a = -1.5f;
    float b = -6;
    float c = 14.0f / 3;
    float expectedX1 = -14.0f / 3;
    float expectedX2 = 2.0f / 3;

    float actualX1, actualX2;
    solveSquareEquation(a, b, c, &actualX1, &actualX2);

    ROOTS_ASSERT(tc, a, b, c, expectedX1, expectedX2, actualX1, actualX2);
}

void testTask1ANegativeZeroAndNegativeIntRoots(CuTest *tc) {
    float a = -2;
    float b = -6;
    float c = 0;
    float expectedX1 = -3;
    float expectedX2 = 0;

    float actualX1, actualX2;
    solveSquareEquation(a, b, c, &actualX1, &actualX2);

    ROOTS_ASSERT(tc, a, b, c, expectedX1, expectedX2, actualX1, actualX2);
}

void testTask1ANegativeZeroAndNegativeRealRoots(CuTest *tc) {
    float a = -3;
    float b = -1;
    float c = 0;
    float expectedX1 = -1.0f / 3;
    float expectedX2 = 0;

    float actualX1, actualX2;
    solveSquareEquation(a, b, c, &actualX1, &actualX2);

    ROOTS_ASSERT(tc, a, b, c, expectedX1, expectedX2, actualX1, actualX2);
}

void testTask1ANegativePositiveAndZeroIntRoots(CuTest *tc) {
    float a = -2;
    float b = 6;
    float c = 0;
    float expectedX1 = 3;
    float expectedX2 = 0;

    float actualX1, actualX2;
    solveSquareEquation(a, b, c, &actualX1, &actualX2);

    ROOTS_ASSERT(tc, a, b, c, expectedX1, expectedX2, actualX1, actualX2);
}

void testTask1ANegativePositiveAndZeroRealRoots(CuTest *tc) {
    float a = -3;
    float b = 1;
    float c = 0;
    float expectedX1 = 1.0f / 3;
    float expectedX2 = 0;

    float actualX1, actualX2;
    solveSquareEquation(a, b, c, &actualX1, &actualX2);

    ROOTS_ASSERT(tc, a, b, c, expectedX1, expectedX2, actualX1, actualX2);
}

void testTask1ANegativePositiveIntRoots(CuTest *tc) {
    float a = -2;
    float b = 12;
    float c = -16;
    float expectedX1 = 2;
    float expectedX2 = 4;

    float actualX1, actualX2;
    solveSquareEquation(a, b, c, &actualX1, &actualX2);

    ROOTS_ASSERT(tc, a, b, c, expectedX1, expectedX2, actualX1, actualX2);
}

void testTask1ANegativePositiveRealRoots(CuTest *tc) {
    float a = 2;
    float b = -6 * sqrtf(2);
    float c = 8;
    float expectedX1 = sqrtf(2);
    float expectedX2 = 2 * sqrtf(2);

    float actualX1, actualX2;
    solveSquareEquation(a, b, c, &actualX1, &actualX2);

    ROOTS_ASSERT(tc, a, b, c, expectedX1, expectedX2, actualX1, actualX2);
}

CuSuite *Task1GetSuite() {
    CuSuite *suite = CuSuiteNew();
    SUITE_ADD_TEST(suite, testTask1APositivePositiveIntRoots);
    SUITE_ADD_TEST(suite, testTask1APositivePositiveRealRoots);

    SUITE_ADD_TEST(suite, testTask1APositivePositiveAndNegativeIntRoots);
    SUITE_ADD_TEST(suite, testTask1APositivePositiveAndNegativeRealRoots);

    SUITE_ADD_TEST(suite, testTask1APositiveZeroAndNegativeIntRoots);
    SUITE_ADD_TEST(suite, testTask1APositiveZeroAndNegativeRealRoots);

    SUITE_ADD_TEST(suite, testTask1APositivePositiveAndZeroIntRoots);
    SUITE_ADD_TEST(suite, testTask1APositivePositiveAndZeroRealRoots);

    SUITE_ADD_TEST(suite, testTask1APositiveNegativeIntRoots);
    SUITE_ADD_TEST(suite, testTask1APositiveNegativeRealRoots);

    SUITE_ADD_TEST(suite, testTask1ANegativePositiveIntRoots);
    SUITE_ADD_TEST(suite, testTask1ANegativePositiveRealRoots);

    SUITE_ADD_TEST(suite, testTask1ANegativePositiveAndNegativeIntRoots);
    SUITE_ADD_TEST(suite, testTask1ANegativePositiveAndNegativeRealRoots);

    SUITE_ADD_TEST(suite, testTask1ANegativeZeroAndNegativeIntRoots);
    SUITE_ADD_TEST(suite, testTask1ANegativeZeroAndNegativeRealRoots);

    SUITE_ADD_TEST(suite, testTask1ANegativePositiveAndZeroIntRoots);
    SUITE_ADD_TEST(suite, testTask1ANegativePositiveAndZeroRealRoots);

    SUITE_ADD_TEST(suite, testTask1ANegativeNegativeIntRoots);
    SUITE_ADD_TEST(suite, testTask1ANegativeNegativeRealRoots);

    return suite;
}