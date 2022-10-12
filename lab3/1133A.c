#include <stdio.h>

#define MINUTES_IN_HOUR 60

int main() {
    int contestBeginHours, contestBeginMinutes, contestEndHours, contestEndMinutes;
    scanf("%d:%d %d:%d", &contestBeginHours, &contestBeginMinutes, &contestEndHours, &contestEndMinutes);

    int contestBeginInMinutes = contestBeginHours * MINUTES_IN_HOUR + contestBeginMinutes;
    int contestEndInMinutes = contestEndHours * MINUTES_IN_HOUR + contestEndMinutes;
    int contestMiddleInMinutes = (contestBeginInMinutes + contestEndInMinutes) / 2;
    int contestMiddleHours = contestMiddleInMinutes / MINUTES_IN_HOUR;
    int contestMiddleMinutes = contestMiddleInMinutes % MINUTES_IN_HOUR;

    printf("%02d:%02d", contestMiddleHours, contestMiddleMinutes);

    return 0;
}