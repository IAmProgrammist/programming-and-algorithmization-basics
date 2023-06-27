#ifndef PROGRAMMING_AND_ALGORITHMIZATION_BASICS_TASK8_H
#define PROGRAMMING_AND_ALGORITHMIZATION_BASICS_TASK8_H

#include <string.h>
#include <math.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#include "Tasks.h"

#define EPS 0.000001

int isEqual(float a, float b) {
    return fabs(b - a) < EPS;
}

void assertDouble(float expected, float actual,
                 char const *fileName, char const *funcName,
                 int line) {
    if (!(isEqual(expected, actual))) {
        fprintf(stderr, "File %s\n", fileName);
        fprintf(stderr, "%s - failed on line %d\n", funcName, line);

        assert(0);
    }
}

#define ASSERT_DOUBLE(expected, actual) assertDouble(expected, actual, \
                 __FILE__, __FUNCTION__, __LINE__)


#endif
