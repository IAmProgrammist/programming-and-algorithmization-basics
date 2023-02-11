#include <stdio.h>
#include <assert.h>
#include "./../sharedfuncs/inc/1func.h"

void test() {
    assert(getOctDigit(0x8000000000000000ull, 0) == 1);
    assert(getOctDigit(3ull, 63) == 3);
    assert(getOctDigit(71263ull, 57) == 1);
}

int main() {
    test();
    // Используется для mock-тестирования
    unsigned long long input;
    scanf("%llu", &input);

    printOct(input);

    return 0;
}

