#include "1func.h"

void inputArray(int *array, const size_t size) {
    for (size_t i = 0; i < size; i++) {
        scanf("%d", array + i);
    }
}