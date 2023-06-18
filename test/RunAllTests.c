#include <stdio.h>

#include "CuTest.h"

CuSuite* Task1GetSuite();
CuSuite* Task2GetSuite();
CuSuite* Task3GetSuite();
CuSuite* Task4GetSuite();
CuSuite* Task5GetSuite();
CuSuite* Task6GetSuite();
CuSuite* Task7GetSuite();
CuSuite* Task8GetSuite();
CuSuite* Task9GetSuite();
CuSuite* Task10GetSuite();
CuSuite* Task11GetSuite();
CuSuite* Task12GetSuite();
CuSuite* Task13GetSuite();
CuSuite* Task14GetSuite();
CuSuite* Task15GetSuite();

/*
Available asserts:
 void CuAssert(CuTest* tc, char* message, int condition);
void CuAssertTrue(CuTest* tc, int condition);
void CuAssertStrEquals(CuTest* tc, char* expected, char* actual);
void CuAssertIntEquals(CuTest* tc, int expected, int actual);
void CuAssertPtrEquals(CuTest* tc, void* expected, void* actual);
void CuAssertPtrNotNull(CuTest* tc, void* pointer);
 */

void RunAllTests(void) {
    CuString *output = CuStringNew();
    CuSuite* suite = CuSuiteNew();

    CuSuiteAddSuite(suite, Task1GetSuite());
    CuSuiteAddSuite(suite, Task2GetSuite());
    CuSuiteAddSuite(suite, Task3GetSuite());
    CuSuiteAddSuite(suite, Task5GetSuite());

    CuSuiteRun(suite);
    CuSuiteSummary(suite, output);
    CuSuiteDetails(suite, output);
    printf("%s\n", output->buffer);
}

int main(void) {
    RunAllTests();
}