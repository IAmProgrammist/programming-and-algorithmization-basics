#include <stdio.h>
#include <assert.h>
#include "./../sharedfuncs/inc/6func.h"

void test() {
    assert(getEvenOddCombination(12, 18) == 420);
    assert(getEvenOddCombination(32512, 0) == 715784192);
    assert(getEvenOddCombination(0, 0) == 0);
    assert(getEvenOddCombination(0xffff, 0xffff) == 0xffffffff);
    assert(getEvenOddCombination(1, 1) == 3);
}

int main() {
    test();

    return 0;
}