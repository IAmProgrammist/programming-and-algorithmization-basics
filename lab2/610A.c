#include <stdio.h>

int main() {
    int stickLen;
    scanf("%d", &stickLen);

    int possibleWays;
    if (stickLen % 2 == 0)
        possibleWays = stickLen / 4 + (stickLen % 4 != 0) - 1;
    else
        possibleWays = 0;

    printf("%d", possibleWays);

    return 0;
}