#include <assert.h>
#include <stdio.h>
#include "limits.h"
#include "./../sharedfuncs/inc/2func.h"

void test() {
    assert(deleteOctNumber(3179, 1) == 427);
    assert(deleteOctNumber(9, 1) == 0);
    assert(deleteOctNumber(37, 1) == 37);
}

int main() {
    test();

    return 0;
}

