#include "../alg.h"

int sumDigits(int n) {
    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

bool isTicketHappy(int ticket) {
    int leftPair = ticket / 1000;
    int rightPair = ticket % 1000;

    return sumDigits(leftPair) == sumDigits(rightPair);
}
