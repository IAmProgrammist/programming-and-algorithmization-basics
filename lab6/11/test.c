#include <assert.h>

#include "../../libs/alg/alg.h"

void test() {
    assert(isTrianglePossible(3, 4, 5));
    assert(!isTrianglePossible(12, 1, 1));
    assert(!isTrianglePossible(2, 7, 1));
    assert(!isTrianglePossible(3, 3, 19));
    assert(!isTrianglePossible(3, 3, 6));
}

int main() {
    test();

    return 0;
}