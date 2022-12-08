#include <assert.h>
#include "../../libs/alg/alg.h"

void test() {
    assert(sign(-123123.0123) == -1);
    assert(sign(0) == 0);
    assert(sign(42.12) == 1);
    assert(sign(0.0000000001) == 1);
    assert(sign(-0.0000000001) == -1);
}

int main() {
    test();

    return 0;
}