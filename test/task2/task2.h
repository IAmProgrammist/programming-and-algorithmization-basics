#ifndef PROGRAMMING_AND_ALGORITHMIZATION_BASICS_TASK2_H
#define PROGRAMMING_AND_ALGORITHMIZATION_BASICS_TASK2_H
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

#define MULTI_ASSERT(a, b, p, q, r, s, res) \
{\
    assertTrue(canPlaceTwoHousesInSquare(a, b, p, q, r, s) == res, \
                 __FILE__, __FUNCTION__, __LINE__);\
    assertTrue(canPlaceTwoHousesInSquare(a, b, p, q, s, r) == res, \
                 __FILE__, __FUNCTION__, __LINE__);\
    assertTrue(canPlaceTwoHousesInSquare(a, b, q, p, r, s) == res, \
                 __FILE__, __FUNCTION__, __LINE__);\
    assertTrue(canPlaceTwoHousesInSquare(a, b, q, p, s, r) == res, \
                 __FILE__, __FUNCTION__, __LINE__);\
    assertTrue(canPlaceTwoHousesInSquare(b, a, p, q, r, s) == res, \
                 __FILE__, __FUNCTION__, __LINE__);\
    assertTrue(canPlaceTwoHousesInSquare(b, a, p, q, s, r) == res, \
                 __FILE__, __FUNCTION__, __LINE__);\
    assertTrue(canPlaceTwoHousesInSquare(b, a, q, p, r, s) == res, \
                 __FILE__, __FUNCTION__, __LINE__);\
    assertTrue(canPlaceTwoHousesInSquare(b, a, q, p, s, r) == res, \
                 __FILE__, __FUNCTION__, __LINE__);\
    assertTrue(canPlaceTwoHousesInSquare(a, b, r, s, p, q) == res, \
                 __FILE__, __FUNCTION__, __LINE__);\
    assertTrue(canPlaceTwoHousesInSquare(a, b, s, r, p, q) == res, \
                 __FILE__, __FUNCTION__, __LINE__);\
    assertTrue(canPlaceTwoHousesInSquare(a, b, r, s, q, p) == res, \
                 __FILE__, __FUNCTION__, __LINE__);\
    assertTrue(canPlaceTwoHousesInSquare(a, b, s, r, q, p) == res, \
                 __FILE__, __FUNCTION__, __LINE__);\
    assertTrue(canPlaceTwoHousesInSquare(b, a, r, s, p, q) == res, \
                 __FILE__, __FUNCTION__, __LINE__);\
    assertTrue(canPlaceTwoHousesInSquare(b, a, s, r, p, q) == res, \
                 __FILE__, __FUNCTION__, __LINE__);\
    assertTrue(canPlaceTwoHousesInSquare(b, a, r, s, q, p) == res, \
                 __FILE__, __FUNCTION__, __LINE__);\
    assertTrue(canPlaceTwoHousesInSquare(b, a, s, r, q, p) == res, \
                 __FILE__, __FUNCTION__, __LINE__);\
}

#endif
