#include "19func.h"
#include <corecrt.h>

// применяет r каждому элементу массива a размером size функцию f
void forEach(int *a, const size_t size, void (*f)(int *)) {
    for(int i = 0; i < size; i++) {
        f(a + i);
    }
}
