#include "../alg.h"

void printAsOct_(unsigned long long num) {
    if (num == 0)
        return;
    else {
        int digit = num % 8;
        printAsOct(num / 8);
        printf("%d", digit);
    }
}

void printAsOct(unsigned long long num) {
    if (num == 0)
        printf("0");
    else
        printAsOct_(num);
}