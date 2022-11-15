#include <assert.h>
#include "./../sharedfuncs/inc/15func.h"

void test() {
    assert(reverseNum(123) == 321);
    assert(reverseNum(6) == 6);
    assert(reverseNum(1234) == 4321);

    assert(isNumberPalindrome(5));
    assert(isNumberPalindrome(121));
    assert(isNumberPalindrome(0));
    assert(isNumberPalindrome(1234321));
    assert(isNumberPalindrome(9898989));
    assert(isNumberPalindrome(476674));
    assert(!isNumberPalindrome(123));
    assert(!isNumberPalindrome(909099099));

    assert(countPalindromeNumbers(10) == 9);
    assert(countPalindromeNumbers(100) == 18);
    assert(countPalindromeNumbers(1000) == 108);
    assert(countPalindromeNumbers(10000) == 198);
    assert(countPalindromeNumbers(100000) == 1098);
}

int main() {
    test();

    return 0;
}