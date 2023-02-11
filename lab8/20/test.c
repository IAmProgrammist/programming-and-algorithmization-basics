#include <stdio.h>
#include "./../sharedfuncs/inc/20func.h"

bool abs(int a) {
    return  a > 0;
}

void test() {
    int a[5] = {-1, -2, -3, -4, -5};
    printf("%d", (int)any(a, 5, abs));
}

int main() {
    test();

    return 0;
}