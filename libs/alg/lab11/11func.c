#include "../alg.h"

bool any(int *array, size_t arraySize, bool (*predicate)(int)) {
    if (arraySize == 0)
        return false;
    else
        return predicate(array[0]) || any(array + 1, arraySize - 1, predicate);
}

bool all(int *array, size_t arraySize, bool (*predicate)(int)) {
    if (arraySize == 0)
        return true;
    else
        return predicate(array[0]) && any(array + 1, arraySize - 1, predicate);
}