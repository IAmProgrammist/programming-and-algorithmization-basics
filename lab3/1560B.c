#include <stdio.h>
#include <math.h>

int main() {
    int taskAmount;
    scanf("%d", &taskAmount);

    for (int i = 0; i < taskAmount; i++) {
        int watcherA, watcherB, watcherC;
        scanf("%d %d %d", &watcherA, &watcherB, &watcherC);

        int expectedHalfTotalWatchers = abs(watcherA - watcherB);
        int variantWatcherD1 = watcherC - expectedHalfTotalWatchers;
        int variantWatcherD2 = watcherC + expectedHalfTotalWatchers;

        int watcherD;
        if (watcherA > 2 * expectedHalfTotalWatchers || watcherB > 2 * expectedHalfTotalWatchers ||
            watcherC > 2 * expectedHalfTotalWatchers)
            watcherD = -1;
        else if (variantWatcherD1 >= 1 && variantWatcherD1 <= 2 * expectedHalfTotalWatchers)
            watcherD = variantWatcherD1;
        else if (variantWatcherD2 >= 1 && variantWatcherD2 <= 2 * expectedHalfTotalWatchers)
            watcherD = variantWatcherD2;
        else
            watcherD = -1;

        printf("%d\n", watcherD);
    }

    return 0;
}