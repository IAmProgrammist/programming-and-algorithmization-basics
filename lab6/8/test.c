#include <assert.h>

#include "../../libs/alg/alg.h"

void test() {
    float a = 5, b = 10;
    swapFloat(&a, &b);
    assert(a == 10 && b == 5);

    a = 0, b = 0;
    swapFloat(&a, &b);
    assert(a == 0 && b == 0);

    a = -123.11111f, b = 42.13f;
    swapFloat(&a, &b);
    assert(a == 42.13f && b == -123.11111f);

    a = 0.0000001f, b = 0.0000002f;
    swapFloat(&a, &b);
    assert(a == 0.0000002f && b == 0.0000001f);
}

int main() {
    test();

    return 0;
}