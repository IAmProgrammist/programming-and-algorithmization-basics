#include <assert.h>
#include "./../sharedfuncs/inc/8func.h"

void test() {
    float a = 5, b = 10;
    swap(&a, &b);
    assert(a == 10 && b == 5);

    a = 0, b = 0;
    swap(&a, &b);
    assert(a == 0 && b == 0);

    a = -123.11111f, b = 42.13f;
    swap(&a, &b);
    assert(a == 42.13f && b == -123.11111f);

    a = 0.0000001f, b = 0.0000002f;
    swap(&a, &b);
    assert(a == 0.0000002f && b == 0.0000001f);
}

int main() {
    test();

    return 0;
}