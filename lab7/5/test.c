#include <stdio.h>
#include <assert.h>
#include "./../sharedfuncs/inc/5func.h"

void test() {
    assert(isBinPoly(0));
    assert(isBinPoly(23901));
    assert(isBinPoly(3435));
    assert(!isBinPoly(603));
}

int main() {
    test();

    return 0;
}