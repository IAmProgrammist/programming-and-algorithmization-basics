#ifndef PROGRAMMING_AND_ALGORITHMIZATION_BASICS_TASK1_H
#define PROGRAMMING_AND_ALGORITHMIZATION_BASICS_TASK1_H

#include <string.h>
#include <math.h>
#include <stdio.h>
#include <assert.h>

#include "Tasks.h"

#define EPS 0.000001

int isEqual(float a, float b) {
    return fabs(b - a) < EPS;
}

void assertRoots(float a, float b, float c, float expectedX1, float expectedX2, float actualX1, float actualX2,
                 char const *fileName, char const *funcName,
                 int line) {
    if (!(isEqual(actualX1, expectedX1) && isEqual(actualX2, expectedX2) || \
                      isEqual(actualX2, expectedX1) && isEqual(actualX1, expectedX2))) {
        fprintf(stderr, "File %s\n", fileName);
        fprintf(stderr, "%s - failed on line %d\n", funcName, line);
        fprintf(stderr,
                "For a = %.4G, b = %.4G, c = %.4G decision should be x1 = %.4G and x2 = %.4G. Actual are x1 = %.4G and x2 = %.4G\n",
                a, b, c, expectedX1, expectedX2, actualX1, actualX2);

        assert(0);
    }
}

#define ASSERT_ROOTS(a, b, c, expectedX1, expectedX2, actualX1, actualX2) assertRoots(a, b, c, expectedX1, expectedX2, actualX1, actualX2, \
                 __FILE__, __FUNCTION__, __LINE__)

#endif //PROGRAMMING_AND_ALGORITHMIZATION_BASICS_TASK1_H
