#ifndef PROGRAMMING_AND_ALGORITHMIZATION_BASICS_TASK5_H
#define PROGRAMMING_AND_ALGORITHMIZATION_BASICS_TASK5_H
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <assert.h>

#include "Tasks.h"

void assertTrue(bool val,
                char const *fileName, char const *funcName,
                int line) {
    if (!val) {
        fprintf(stderr, "File %s\n", fileName);
        fprintf(stderr, "%s - failed on line %d\n", funcName, line);

        assert(0);
    }
}

void assertInt(int ex, int ac,
                char const *fileName, char const *funcName,
                int line) {
    if (ex != ac) {
        fprintf(stderr, "File %s\n", fileName);
        fprintf(stderr, "%s - failed on line %d\n", funcName, line);
        fprintf(stderr, "Expected: \"%d\"\n", ex);
        fprintf(stderr, "Got: \"%d\"\n\n", ac);

        assert(0);
    }
}

#define ASSERT_TRUE(val) assertTrue(val, \
                 __FILE__, __FUNCTION__, __LINE__)

#define ASSERT_INT(ex, ac) assertInt(ex, ac, \
                 __FILE__, __FUNCTION__, __LINE__)

#endif
