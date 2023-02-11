#include "22func.h"
#include <corecrt.h>

/* распределяет элементы массива a размера size таким образом, что элементы,
 * удовлетворяющие условию выраженному функцией-предикатом f, добавляются в массив b,
 * иначе - в массив c
 */
void arraySplit(const int *a, const size_t size, bool (*f)(int), int *b, int *c) {
    for (size_t i = 0, bInd = 0, cInd = 0; i < size; i++)
        if (f(a[i]))
            b[bInd++] = a[i];
        else
            c[cInd++] = a[i];
}