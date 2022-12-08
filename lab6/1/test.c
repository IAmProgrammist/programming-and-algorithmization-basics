#include <assert.h>

#include "../../libs/alg/alg.h"

void test() {
    assert(myAbs(0) == 0);
    assert(myAbs(1234.6745) == 1234.6745);
    assert(myAbs(-12.45) == 12.45);
}

int main() {
    test();

    return 0;
}