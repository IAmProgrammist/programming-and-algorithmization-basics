#include <stdio.h>
#include <assert.h>
#include "./../sharedfuncs/inc/9func.h"

void test() {
    assert(removeEverySecondDigit(1ull) == 1ull);
    assert(removeEverySecondDigit(2ull) == 1ull);
    assert(removeEverySecondDigit(3ull) == 1ull);
    assert(removeEverySecondDigit(4ull) == 2ull);
    assert(removeEverySecondDigit(10ull) == 3ull);
    assert(removeEverySecondDigit(40ull) == 6ull);
    assert(removeEverySecondDigit(253ull) == 14ull);
    assert(removeEverySecondDigit(467ull) == 29ull);
}

int main() {
    test();

    return 0;
}