#include <stdio.h>
#include "./../sharedfuncs/inc/22func.h"

bool isPrimeSqrtHalf(int n) {
    if (n % 2 == 0 || n == 1)
        return n == 2 || false;

    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0)
            return false;

    return true;
}

void test() {
    int a[5] = {1,2,3,4,5};
    int b[5] = {};
    int c[5] = {};

    arraySplit(a, 5, isPrimeSqrtHalf, b, c);

    for(size_t i = 0; i < 5; i++) {
        printf("%d ", b[i]);
    }

    printf("\n");

    for(size_t i = 0; i < 5; i++) {
        printf("%d ", c[i]);
    }
}

int main() {
    test();

    return 0;
}