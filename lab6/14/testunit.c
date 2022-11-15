#include "./../sharedfuncs/inc/14func.h"
#include <assert.h>

void test() {
    assert(isNumberPerfect(1));
    assert(isNumberPerfect(28));
    assert(!isNumberPerfect(27));
    assert(!isNumberPerfect(12412));
    assert(isNumberPerfect(33550336));
}

int main() {
    test();

    return 0;
}