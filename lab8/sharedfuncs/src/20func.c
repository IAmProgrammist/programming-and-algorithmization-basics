#include "20func.h"
#include <corecrt.h>

/* возвращает "истину" если хотя бы один элемент массива a размера size
 * удовлетворяет условию выраженному функцией предикатом f, иначе - "ложь"
 */
bool any(const int *a, const size_t size, bool (*f)(int)) {
    for (size_t i = 0; i < size; i++) {
        if (f(a[i]))
            return true;
    }

    return false;
}
