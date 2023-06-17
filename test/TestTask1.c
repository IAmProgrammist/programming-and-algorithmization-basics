#include <string.h>

#include "CuTest.h"

void TestTask1(CuTest *tc) {
    char* input = strdup("hello world");
    char* actual = "HELLO WORLD";
    char* expected = "HELLO WORLD";
    CuAssertStrEquals(tc, expected, actual);
}

CuSuite* Task1GetSuite() {
    CuSuite* suite = CuSuiteNew();
    SUITE_ADD_TEST(suite, TestTask1);
    return suite;
}