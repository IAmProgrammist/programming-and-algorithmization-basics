#include <stdio.h>

long long log2(long long a) {
    int power = 0;

    while (a > 1) {
        a /= 2;
        power++;
    }

    return power;
}

long long twoInPow(long long pow) {
    return 1 << pow;
}

int main() {
    int taskAmount;
    scanf("%d", &taskAmount);

    for (int currentTask = 0; currentTask < taskAmount; currentTask++) {
        long long number;
        scanf("%lld", &number);

        long long powerOfMaxNumberThatTwoInPower = log2(number);
        long long sumOfNumbersTwoInPower = twoInPow(powerOfMaxNumberThatTwoInPower + 1) - 1;
        long long sumOfNumbers = ((1 + number) * number) / 2;
        long long sumOfNumbersSubtractSumOfTwoInPower = sumOfNumbers - 2 * sumOfNumbersTwoInPower;

        printf("%lld\n", sumOfNumbersSubtractSumOfTwoInPower);
    }

    return 0;
}