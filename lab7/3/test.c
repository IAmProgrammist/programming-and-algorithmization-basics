#include <assert.h>
#include "limits.h"
#include "./../sharedfuncs/inc/3func.h"

void test() {
    unsigned long long j = 0ull;
    swapPairBytes(&j);
    assert(j == 0ull);

    j = 1ull;
    swapPairBytes(&j);
    assert(j == 1ull);

    j = 2ull;
    swapPairBytes(&j);
    assert(j == 1ull);

    j = 3ull;
    swapPairBytes(&j);
    assert(j == 3ull);

    j = 832820ull;
    swapPairBytes(&j);
    assert(j == 817720ull);

    j = 9223372036854775807ull;
    swapPairBytes(&j);
    assert(j == 9223372036854775807ull);

    j = 18446744073709551615ull;
    swapPairBytes(&j);
    assert(j == 18446744073709551615ull);
}

int main() {
    test();

    return 0;
}