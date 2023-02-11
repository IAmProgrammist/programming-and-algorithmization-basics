#include <assert.h>

#include "../../libs/alg/alg.h"

void test(bool (*isPrime) (int)) {
    assert(!isPrime(1));
    assert(isPrime(2));
    assert(isPrime(3));
    assert(!isPrime(4));
    assert(isPrime(5));
    assert(!isPrime(24));
    assert(isPrime(157));
    assert(!isPrime(24649));
}

int main() {
    test(isPrimeHard);
    test(isPrimeSqrt);
    test(isPrimeSqrtHalf);

    return 0;
}