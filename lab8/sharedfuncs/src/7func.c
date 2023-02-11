#include "7func.h"
#include <stdbool.h>

/* возвращает позицию первого с конца элемента массива array размера arraySize
 * удовлетворяющему условию выраженному функцией-предикатом predicate
 */
int findByPredicateFromEnd(const int *array, const int arraySize, bool (*predicate)(int)) {
    int index = arraySize - 1;
    while (index >= 0 && !predicate(array[index]))
        index--;

    return index;
}