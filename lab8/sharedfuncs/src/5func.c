#include "5func.h"
#include <stdbool.h>
#include <corecrt.h>

/* возвращает позицию первого с начала элемента массива array размера arraySize
 * удовлетворяющему условию выраженному функцией-предикатом predicate
 */
size_t findByPredicateFromBegin(const int *array, const size_t arraySize, bool (*predicate)(int)) {
    size_t index = 0;
    while (index < arraySize && !predicate(array[index]))
        index++;

    return index;
}