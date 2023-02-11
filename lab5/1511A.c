#include <stdio.h>

#define USER_TYPE_DISLIKE 2

int main() {
    int taskAmount;
    scanf("%d", &taskAmount);

    for (int currentTask = 0; currentTask < taskAmount; currentTask++) {
        int usersAmount;
        scanf("%d", &usersAmount);

        int maxLikes = 0;

        for (int currentUser = 0; currentUser < usersAmount; currentUser++) {
            int userType;
            scanf("%d", &userType);

            maxLikes += userType != USER_TYPE_DISLIKE;
        }

        printf("%d\n", maxLikes);
    }

    return 0;
}