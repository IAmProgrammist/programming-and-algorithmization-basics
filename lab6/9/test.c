#include <assert.h>

#include "../../libs/alg/alg.h"

void test() {
    float a = 10, b = 5;
    sort2(&a, &b);
    assert(a == 5 && b == 10);

    a = 0, b = 0;
    sort2(&a, &b);
    assert(a == 0 && b == 0);

    a = -123.11111f, b = 42.13f;
    sort2(&a, &b);
    assert(a == -123.11111f && b == 42.13f);

    a = 0.0000002f, b = 0.0000001f;
    sort2(&a, &b);
    assert(a == 0.0000001f && b == 0.0000002f);

    a = 5, b = 10;
    sort2(&a, &b);
    assert(a == 5 && b == 10);
}

int main() {
    test();

    return 0;
}