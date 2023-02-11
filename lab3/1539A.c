#include <stdio.h>

long long min(long long a, long long b) {
    return a < b ? a : b;
}

long long max(long long a, long long b) {
    return a < b ? b : a;
}

int main() {
    int taskAmount;
    scanf("%d", &taskAmount);

    for (int i = 0; i < taskAmount; i++) {
        long long totalParticipants, contestInterval, contestWorkingTime;
        scanf("%lld %lld %lld", &totalParticipants, &contestInterval, &contestWorkingTime);

        long long maxUnsatisfiedLevel = contestWorkingTime / contestInterval;
        long long annoyingParticipants = min(totalParticipants, maxUnsatisfiedLevel);
        long long totalUnsatisfiedLevel = ((annoyingParticipants - 1) *
                                          annoyingParticipants) / 2 + maxUnsatisfiedLevel *
                                          max(totalParticipants - maxUnsatisfiedLevel, 0);

        printf("%lld\n", totalUnsatisfiedLevel);
    }

    return 0;
}