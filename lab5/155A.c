#include <stdio.h>

int main() {
    int contestAmount;
    scanf("%d", &contestAmount);

    int maxContestResult;
    scanf("%d", &maxContestResult);

    int minContestResult = maxContestResult;
    int amazedTimes = 0;

    for (int currentContest = 1; currentContest < contestAmount; currentContest++) {
        int contestResult;
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
