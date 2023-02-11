#include "9func.h"
#include <corecrt.h>

/* возвращает количество элементов массива array размера arraySize
 * удовлетворяющих условию выраженному функцией-предикатом predicate
 */
int countByPredicate(const int *array, const size_t arraySize, bool (*predicate)(int)) {
    int count = 0;
    for (size_t i = 0; i < arraySize; i++)
        if (predicate(array[i]))
            count++;

    return count;
}