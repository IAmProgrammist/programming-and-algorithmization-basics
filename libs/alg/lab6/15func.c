#include "../alg.h"

int reverseNum(int n) {
    int reversedNum = 0;

    while (n > 0) {
        reversedNum = 10 * reversedNum + n % 10;
        n /= 10;
    }

    return reversedNum;
}

bool isNumberPalindrome(int n) {
    return n == reverseNum(n);
}

int countPalindromeNumbers(int n) {
    int palindromeCounter = 0;

    for (int i = 1; i <= n; i++)
        if (isNumberPalindrome(i))
            palindromeCounter++;

    return palindromeCounter;
}