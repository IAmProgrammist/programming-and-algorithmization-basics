#include <stdio.h>
#include <assert.h>
#include "./../sharedfuncs/inc/10func.h"

void test() {
    assert(getInvertedByte(61455) == 4080);
    assert(getInvertedByte(43605) == 21930);
    assert(getInvertedByte(0) == 0);
    assert(getInvertedByte(55681) == 33241);
    assert(getInvertedByte(14078646ull) == 11981526ull);
    assert(getInvertedByte(18446744073709551615ull) == 18446744073709551615ull);
}

int main() {
    test();

    return 0;
}