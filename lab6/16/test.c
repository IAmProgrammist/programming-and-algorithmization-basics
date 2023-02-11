#include <assert.h>

#include "../../libs/alg/alg.h"

void test() {
    assert(sumDigits(0) == 0);
    assert(sumDigits(1111111) == 7);
    assert(sumDigits(9023) == 14);
    assert(sumDigits(1) == 1);

    assert(isTicketHappy(123123));
    assert(isTicketHappy(906519));
    assert(isTicketHappy(987996));
    assert(!isTicketHappy(100999));
}

int main() {
    test();

    return 0;
}