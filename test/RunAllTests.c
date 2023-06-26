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
    system("chcp 65001");

    int size;
    scanf("%d", &size);

    FullName *fNameArray = malloc(sizeof(FullName) * size);

    for (int i = 0; i < size; i++) {
        char *sName = malloc(100 * sizeof(char));
        char *name = malloc(100 * sizeof(char));
        char *pName = malloc(100 * sizeof(char));

        scanf("%s %s %s", sName, name, pName);

        fNameArray[i] = (FullName) {name, sName, pName};
    }

    sortBySurname(fNameArray, size);

    for (int i = 0; i < size; i++) {
        printf("%s %s %s\n", fNameArray[i].surname.name, fNameArray[i].name.name, fNameArray[i].patronymic.name);

        free(fNameArray[i].surname.name);
        free(fNameArray[i].name.name);
        free(fNameArray[i].patronymic.name);
    }

    free(fNameArray);

    RunAllTests();
}