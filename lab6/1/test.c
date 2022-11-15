#include <assert.h>
#include "./../sharedfuncs/inc/1func.h"

void test() {
    assert(abs(0) == 0);
    assert(abs(1234.6745) == 1234.6745);
    assert(abs(-12.45) == 12.45);
}

int main() {
    test();

    return 0;
}