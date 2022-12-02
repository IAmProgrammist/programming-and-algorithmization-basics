#include <stdio.h>
#include "./../sharedfuncs/inc/7func.h"

bool isEven(int a) {
    return a % 2 == 0;
}

void test() {
    int a[5] = {1, 3, 3, 4, 5};
    int ind = findByPredicateFromEnd(a, 5, isEven);
    printf("%d", ind);
}

int main() {
    test();

    return 0;
}