#include <assert.h>

#include "../../libs/alg/alg.h"

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