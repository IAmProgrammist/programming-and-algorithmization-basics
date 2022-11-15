#include "./../sharedfuncs/inc/7func.h"
#include <assert.h>

void test() {
    assert(!isDigit('a'));
    assert(isDigit('0'));
    assert(isDigit('4'));
    assert(isDigit('9'));
    assert(!isDigit(';'));
}

int main() {
    test();

    return 0;
}