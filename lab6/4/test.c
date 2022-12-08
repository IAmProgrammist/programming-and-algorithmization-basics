#include <assert.h>
#include "../../libs/alg/alg.h"

void test() {
    assert(max3(12, 23, 42) == 42);
    assert(max3(0, -124, 122) == 122);
    assert(max3(0, -124, 122) == 122);
    assert(max3(-12, -124, -122) == -12);
}

int main() {
    test();

    return 0;
}