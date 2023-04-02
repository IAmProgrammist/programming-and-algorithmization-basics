#ifndef PROGRAMMING_AND_ALGORITHMIZATION_BASICS_TESTER_H
#define PROGRAMMING_AND_ALGORITHMIZATION_BASICS_TESTER_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

#define START_ARRAY_SIZE 10000
#define END_ARRAY_SIZE 100000
#define STEP_ARRAY_SIZE 10000

#define COUNT_COMPARES 1

#if COUNT_COMPARES == 0
typedef struct SortFunc {
    void (*sort)(int *a, size_t n);

    char name[64];
} SortFunc;
#else
typedef struct SortFunc {
    unsigned long long (*sort)(int *a, size_t n);

    char name[64];
} SortFunc;
#endif

typedef struct GeneratingFunc {
    void (*generate)(int *a, size_t n);

    char name[64];
} GeneratingFunc;

#include "generators/generateRandom.h"
#include "generators/generateOrdered.h"
#include "generators/generateOrderedBackwards.h"

#include "sorters/bubbleSort.h"
#include "sorters/selectionSort.h"
#include "sorters/insertionSort.h"
#include "sorters/combSort.h"
#include "sorters/shellSort.h"
#include "sorters/radixSort.h"

#define ARRAY_SIZE(a) sizeof(a) / sizeof(a[0])

#define TIME_TEST(testCode, time) { \
    clock_t start_time = clock(); \
    testCode \
clock_t end_time = clock();\
clock_t sort_time = end_time - start_time; \
time = (double) sort_time / CLOCKS_PER_SEC; \
}

#define TIME_COMPARES_TEST(testCode, time, compares) { \
    clock_t start_time = clock(); \
    compares = testCode \
clock_t end_time = clock();\
clock_t sort_time = end_time - start_time; \
time = (double) sort_time / CLOCKS_PER_SEC; \
}

void timeExperiment();

void swap(int *a, int *b);

void countSwap(int *a, int *b, int *counter);

#endif //PROGRAMMING_AND_ALGORITHMIZATION_BASICS_TESTER_H
