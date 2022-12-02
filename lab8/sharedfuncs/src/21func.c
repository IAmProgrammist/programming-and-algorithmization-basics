#include "21func.h"
#include <corecrt.h>

/* возвращает "истину" если все элементы массива a размера size
 * удовлетворяют условию выраженному функцией предикатом f, иначе - "ложь"
 */
bool all(const int *a, const size_t size, bool (*f)(int)) {
    for (size_t i = 0; i < size; i++) {
        if (!f(a[i]))
            return false;
    }

    return true;
}
