#include <assert.h>
#include "../../libs/alg/alg.h"

void test() {
    assert(max2(42, 9) == 42);
    assert(max2(42, 0) == 42);
    assert(max2(42, -12) == 42);
    assert(max2(42, 42) == 42);
    assert(max2(0, 123) == 123);
    assert(max2(0, 0) == 0);
    assert(max2(0, -121) == 0);
    assert(max2(-140, 130) == 130);
    assert(max2(-140, 0) == 0);
    assert(max2(-140, -12) == -12);
    assert(max2(-140, -1209) == -140);
}

int main() {
    test();

    return 0;
}