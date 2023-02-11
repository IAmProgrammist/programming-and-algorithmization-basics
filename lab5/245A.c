#include <stdio.h>

#define SERVER_TYPE_A 1

int main() {
    int commandAmount;
    scanf("%d", &commandAmount);

    int serverAPackagesFailedTotal = 0;
    int serverAPackagesSuccessTotal = 0;
    int serverBPackagesFailedTotal = 0;
    int serverBPackagesSuccessTotal = 0;

    for (int currentCommand = 0; currentCommand < commandAmount; currentCommand++) {
        int serverType, successPackages, failedPackages;
        scanf("%d %d %d", &serverType, &successPackages, &failedPackages);

        if (serverType == SERVER_TYPE_A) {
            serverAPackagesFailedTotal += failedPackages;
            serverAPackagesSuccessTotal += successPackages;
        } else {
            serverBPackagesFailedTotal += failedPackages;
            serverBPackagesSuccessTotal += successPackages;
        }
    }

    if (serverAPackagesSuccessTotal >= serverAPackagesFailedTotal)
        printf("LIVE\n");
    else
        printf("DEAD\n");

    if (serverBPackagesSuccessTotal >= serverBPackagesFailedTotal)
        printf("LIVE\n");
    else
        printf("DEAD\n");

    return 0;
}