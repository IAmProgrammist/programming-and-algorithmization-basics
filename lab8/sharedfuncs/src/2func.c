#include "2func.h"

void outputArray(const int *const array, size_t size) {
    for (size_t i = 0; i < size; i++) {
        printf("%d ", *(array + i));
    }

    printf("\n");
}