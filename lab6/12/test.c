#include <assert.h>

#include "../../libs/alg/alg.h"

void test() {
    assert(getTriangleTypeLength(1, 1, 13123) == -1);
    assert(getTriangleTypeLength(4, 4, 4) == 0);
    assert(getTriangleTypeLength(3, 4, 5) == 1);
    assert(getTriangleTypeLength(21, 11, 11) == 2);
}

int main() {
    test();

    return 0;
}