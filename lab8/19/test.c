#include <stdio.h>
#include "./../sharedfuncs/inc/19func.h"

void abs(int *a) {
    *a = *a * (*a);
}

void test() {
    int a[5] = {1, -2, -3, 4, -5};
    forEach(a, 5, abs);
    for(int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
}

int main() {
    test();

    return 0;
}