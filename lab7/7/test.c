#include <assert.h>
#include "./../sharedfuncs/inc/7func.h"

void test() {
    assert(getMaximumLength(61454) == 4);
    assert(getMaximumLength(11) == 2);
}

int main() {
    test();

    return 0;
}