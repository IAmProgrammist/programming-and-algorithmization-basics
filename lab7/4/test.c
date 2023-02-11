#include <assert.h>
#include "./../sharedfuncs/inc/4func.h"

void test() {
    unsigned long long j = 0ull;
    invertHex(&j);
    assert(j == 0ull);

    j = 62ull;
    invertHex(&j);
    assert(j == 227ull);

    j = 51172ull;
    invertHex(&j);
    assert(j == 20092ull);

    j = 1311768467463790320ull;
    invertHex(&j);
    assert(j == 1147797409030816545ull);

    j = 18446744073709551615ull;
    invertHex(&j);
    assert(j == 18446744073709551615ull);
}

int main() {
    test();

    return 0;
}