#include <stdio.h>

#define MINUTES_IN_HOUR 60
#define HOURS_IN_DAY 24
#define FULL_DAY_IN_MINUTES HOURS_IN_DAY * MINUTES_IN_HOUR

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int h, m;
        scanf("%d %d", &h, &m);

        int minutesTillNewYear = FULL_DAY_IN_MINUTES - (h * MINUTES_IN_HOUR + m);

        printf("%d\n", minutesTillNewYear);
    }

    return 0;
}