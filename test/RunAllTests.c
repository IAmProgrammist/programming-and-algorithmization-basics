#include <stdio.h>
#include <stdlib.h>

#include "CuTest.h"
#include "Tasks.h"

CuSuite *Task1GetSuite();

CuSuite *Task2GetSuite();

CuSuite *Task3GetSuite();

CuSuite *Task4GetSuite();

CuSuite *Task5GetSuite();

CuSuite *Task6GetSuite();

CuSuite *Task7GetSuite();

CuSuite *Task8GetSuite();

CuSuite *Task9GetSuite();

CuSuite *Task10GetSuite();

CuSuite *Task11GetSuite();

CuSuite *Task12GetSuite();

CuSuite *Task13GetSuite();

CuSuite *Task14GetSuite();

CuSuite *Task15GetSuite();

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
    CuSuite *suite = CuSuiteNew();

    CuSuiteAddSuite(suite, Task1GetSuite());
    CuSuiteAddSuite(suite, Task2GetSuite());
    CuSuiteAddSuite(suite, Task3GetSuite());
    CuSuiteAddSuite(suite, Task4GetSuite());
    CuSuiteAddSuite(suite, Task5GetSuite());

    CuSuiteRun(suite);
    CuSuiteSummary(suite, output);
    CuSuiteDetails(suite, output);
    printf("%s\n", output->buffer);
}

/*
double nums[4][4] = {
            {100, 41, 126, 26},
            {-29, -148, -27, -259},
            {48, 147, 54, 234},
            {110, 121, 132, 176}
    };

    double **numsn = malloc(sizeof(double*) * 4);

    for (int i = 0; i < 4; i++) {
        numsn[i] = malloc(sizeof(double) * 4);

        for (int j = 0; j < 4; j++)
            numsn[i][j] = nums[i][j];
    }

    double **numsn2 = malloc(sizeof(double*) * 4);

    for (int i = 0; i < 4; i++) {
        numsn2[i] = malloc(sizeof(double) * 4);
    }

    double ans[10] = {1, -2, 3, 7, -4, 5, -8, -6, 9, 11};

    findX(ans, 4, numsn, numsn2);
 */


int main(void) {
    double nums[3][3] = {
            {6, -876, 6},
            {204, 1878, -2074},
            {12, 6, -122},
    };

    double **numsn = malloc(sizeof(double*) * 3);

    for (int i = 0; i < 3; i++) {
        numsn[i] = malloc(sizeof(double) * 3);

        for (int j = 0; j < 3; j++)
            numsn[i][j] = nums[i][j];
    }

    double **numsn2 = malloc(sizeof(double*) * 3);

    for (int i = 0; i < 3; i++) {
        numsn2[i] = malloc(sizeof(double) * 3);
    }

    double ans[6] = {1, -2, 0, 4, 17, 1};

    findX(ans, 3, numsn, numsn2);

    RunAllTests();
}