#include <stdio.h>
#include "./../sharedfuncs/inc/18func.h"

bool isEven(int a) {
    return a % 2 == 0;
}

void test() {
    int a[5] = {1, 2, 3, 4, 5};
    leftShift(a, 5, 212);

    for(int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
}

int main() {
    test();

    return 0;
}