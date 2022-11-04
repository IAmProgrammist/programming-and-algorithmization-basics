#include <stdio.h>

int main() {
    int friendsAmount, fenceHeight;
    scanf("%d %d", &friendsAmount, &fenceHeight);

    int roadWidth = 0;

    for (int currentFriend = 0; currentFriend < friendsAmount; currentFriend++) {
        int friendHeight;
        scanf("%d", &friendHeight);

        roadWidth += 1 + (friendHeight > fenceHeight);
    }

    printf("%d", roadWidth);

    return 0;
}