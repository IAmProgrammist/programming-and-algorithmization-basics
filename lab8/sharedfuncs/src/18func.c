#include "18func.h"
#include <corecrt.h>

// выполняет циклический сдвиг влево массива array размера arraySize на k
void leftShift(int *array, const size_t arraySize, const size_t k) {
    int tempArray[arraySize];
    for(int i = 0; i < arraySize; i++) {
        tempArray[i] = array[(i + k) % arraySize];
    }

    moveArray(array, tempArray, arraySize);
}

/* копирует данные из массива data размером arraySize в
 * массив dest размером arraySize
 */
void moveArray(int *dest, const int *data, const size_t arraySize) {
    for(int i = 0; i < arraySize; i++) {
        dest[i] = data[i];
    }
}