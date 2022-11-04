#include <stdio.h>

#define SERVER_TYPE_A 1

int main() {
    int commandAmount;
    scanf("%d", &commandAmount);

    int serverAPackagesTotal = 0;
    int serverAPackagesSuccessTotal = 0;
    int serverBPackagesTotal = 0;
    int serverBPackagesSuccessTotal = 0;

    for (int currentCommand = 0; currentCommand < commandAmount; currentCommand++) {
        int serverType, successPackages, failedPackages;
        scanf("%d %d %d", &serverType, &successPackages, &failedPackages);

        int totalPackages = successPackages + failedPackages;

        if (serverType == SERVER_TYPE_A) {
            serverAPackagesTotal += totalPackages;
            serverAPackagesSuccessTotal += successPackages;
        } else {
            serverBPackagesTotal += totalPackages;
            serverBPackagesSuccessTotal += successPackages;
        }
    }

    if (serverAPackagesSuccessTotal >= serverAPackagesTotal / 2)
        printf("LIVE\n");
    else
        printf("DEAD\n");

    if (serverBPackagesSuccessTotal >= serverBPackagesTotal / 2)
        printf("LIVE\n");
    else
        printf("DEAD\n");

    return 0;
}