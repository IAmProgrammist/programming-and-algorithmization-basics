#include <assert.h>
#include "./../sharedfuncs/inc/10func.h"

void test() {
    float a = 12.12f, b = 45.01f, c = 79.9999f;
    sort3(&a, &b, &c);
    assert(a == 12.12f && b == 45.01f && c == 79.9999f);

    a = -146.9f, b = 45.01f, c = -799.8f;
    sort3(&a, &b, &c);
    assert(a == -799.8f && b == -146.9f && c == 45.01f);

    a = 3, b = 2, c = 1;
    sort3(&a, &b, &c);
    assert(a == 1 && b == 2 && c == 3);
}

int main() {
    test();

    return 0;
}