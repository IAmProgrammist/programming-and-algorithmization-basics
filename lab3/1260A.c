#include <stdio.h>

long long pow2(long long num) {
    return num * num;
}

int main() {
    int taskAmount;
    scanf("%d", &taskAmount);

    for (int i = 0; i < taskAmount; i++) {
        int allowedRadiators, requiredRadiatorSections;
        scanf("%d %d", &allowedRadiators, &requiredRadiatorSections);

        int minRadiatorLen = requiredRadiatorSections / allowedRadiators;
        int maxRadiatorLen = minRadiatorLen + 1;
        int maxRadiatorLenAmount = requiredRadiatorSections % allowedRadiators;
        int gurgles = pow2(minRadiatorLen) * (allowedRadiators - maxRadiatorLenAmount) +
                      pow2(maxRadiatorLen) * maxRadiatorLenAmount;

        printf("%d\n", gurgles);
    }

    return 0;
}