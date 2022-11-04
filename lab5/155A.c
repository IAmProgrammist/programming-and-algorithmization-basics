#include <stdio.h>

int main() {
    int contestAmount;
    scanf("%d", &contestAmount);

    int contestResult;
    scanf("%d", &contestResult);

    int maxContestResult = contestResult;
    int minContestResult = contestResult;
    int amazedTimes = 0;

    for (int currentContest = 1; currentContest < contestAmount; currentContest++) {
        scanf("%d", &contestResult);

        if (contestResult > maxContestResult) {
            maxContestResult = contestResult; // :D
            amazedTimes++;
        } else if (contestResult < minContestResult) {
            minContestResult = contestResult; // D:
            amazedTimes++;
        }
    }

    printf("%d", amazedTimes);

    return 0;
}
