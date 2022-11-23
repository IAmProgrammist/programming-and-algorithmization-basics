#include <assert.h>
#include "./../sharedfuncs/inc/8func.h"

void test() {
    unsigned long long x = 0;
    int k = 100;
    cycleShift(&x, k);
    assert(x == 0);

    x = 1, k = 100;
    cycleShift(&x, k);
    assert(x == 1);

    x = 34, k = 0;
    cycleShift(&x, k);
    assert(x == 34);

    x = 34, k = 1;
    cycleShift(&x, k);
    assert(x == 5);

    x = 253, k = 5;
    cycleShift(&x, k);
    assert(x == 191);

    x = 23, k = 3;
    cycleShift(&x, k);
    assert(x == 15);
}

int main() {
    test();

    return 0;
}