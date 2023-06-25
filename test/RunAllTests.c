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

int main(void) {
    /*unsigned int nums[4][2] = {
            {1, 4},
            {0, 3},
            {2, 4},
            {1, 1}
    };

    unsigned int **numsn = malloc(sizeof(unsigned int*) * 4);

    for (int i = 0; i < 4; i++) {
        numsn[i] = malloc(sizeof(unsigned int) * 2);

        for (int j = 0; j < 2; j++)
            numsn[i][j] = nums[i][j];
    }

    unsigned int* ans = malloc(2 * sizeof(unsigned int));

    sum(numsn, 4, 2, 5, ans);
*/
    Point pts[7] = {
            {2, 8},
            {3, 6},
            {5, 7},
            {6, 6},
            {5, 3},
            {2, 1},
            {1, 5}
    };

    double area = getArea(pts, 7);

    RunAllTests();
}