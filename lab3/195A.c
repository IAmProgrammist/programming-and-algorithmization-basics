#include <stdio.h>

long long ceilFrac(long long a, long long b) {
    return a % b ? a / b + 1 : a / b;
}

int main() {
    int videoDataPerSecond, internetTrafficSpeed, videoTime;
    scanf("%d %d %d", &videoDataPerSecond, &internetTrafficSpeed, &videoTime);

    int waitTime = ceilFrac(videoTime * (videoDataPerSecond - internetTrafficSpeed), internetTrafficSpeed);

    printf("%d", waitTime);

    return 0;
}