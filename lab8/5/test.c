#include <stdio.h>
#include <assert.h>
#include "./../sharedfuncs/inc/5func.h"

bool isEven(int a) {
    return a < 0;
}

void test() {
    int a[5] = {1, -3, -3, 3, 5};
    size_t ind = findByPredicateFromBegin(a, 5, isEven);
    printf("%llu", ind);
}

int somefunca(int n) {
    printf("%d", n);
}

int somefuncb(int (n)) {
    printf("%d", n);
}

int somefuncc(int (((n)))) {
    printf("%d", n);
}

int main() {
    somefunca(1);
    somefuncb(1);
    somefuncc(1);
    //test();

    return 0;
}