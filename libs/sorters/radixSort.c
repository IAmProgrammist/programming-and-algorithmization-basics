#include "radixSort.h"

static int blockRawMask = (1 << BLOCK_SIZE) - 1;

#if COUNT_COMPARES == 0
static void sort(int *a, size_t n) {
    if (n == 0) return;

    int totalBlocks = (sizeof(a[0]) * 8) / BLOCK_SIZE + ((sizeof(a[0]) * 8) % BLOCK_SIZE != 0);

    for (int i = 0; i < totalBlocks; i++) {
        int *totalVariants = calloc(1 << BLOCK_SIZE, sizeof(size_t));
        int *buffer = malloc(sizeof(a[0]) * n);

        for (int j = 0; j < n; j++)
            totalVariants[(a[j] >> (i * BLOCK_SIZE)) & blockRawMask]++;

        size_t* indexes = malloc(sizeof(size_t) * ((1 << BLOCK_SIZE) + 1));

        indexes[0] = 0;
        for (int j = 1; j <= (1 << BLOCK_SIZE); j++) {
            indexes[j] = indexes[j - 1] + totalVariants[j - 1];
        }

        for (size_t j = 0; j < n; j++)
            buffer[indexes[(a[j] >> (i * BLOCK_SIZE)) & blockRawMask]++] = a[j];

        memcpy(a, buffer, sizeof(a[0]) * n);

        free(totalVariants);
        free(indexes);
        free(buffer);
    }
}
#else
static unsigned long long sort(int *a, size_t n) {
    if (n == 0) return 0;

    unsigned long long compares = 0;

    int totalBlocks = (sizeof(a[0]) * 8) / BLOCK_SIZE + ((sizeof(a[0]) * 8) % BLOCK_SIZE != 0);

    for (int i = 0; ++compares && i < totalBlocks; i++) {
        int *totalVariants = calloc(1 << BLOCK_SIZE, sizeof(size_t));
        int *buffer = malloc(sizeof(a[0]) * n);

        for (int j = 0; ++compares && j < n; j++)
            totalVariants[(a[j] >> (i * BLOCK_SIZE)) & blockRawMask]++;

        size_t* indexes = malloc(sizeof(size_t) * ((1 << BLOCK_SIZE) + 1));

        indexes[0] = 0;
        for (int j = 1; ++compares && j <= (1 << BLOCK_SIZE); j++) {
            indexes[j] = indexes[j - 1] + totalVariants[j - 1];
        }

        for (size_t j = 0; ++compares && j < n; j++)
            buffer[indexes[(a[j] >> (i * BLOCK_SIZE)) & blockRawMask]++] = a[j];

        memcpy(a, buffer, sizeof(a[0]) * n);

        free(totalVariants);
        free(indexes);
        free(buffer);
    }

    return compares;
}
#endif

SortFunc getRadixSFunc() {
    return (SortFunc) {sort, "radixSort"};
}