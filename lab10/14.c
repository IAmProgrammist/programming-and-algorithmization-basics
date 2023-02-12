#include <stdio.h>

int timePassed(int gate, int lapsDone, int fanZonesTotal) {
    return gate + lapsDone * fanZonesTotal;
}

int main() {
    int fanZones;
    scanf("%d", &fanZones);

    int minimalTime = -1;
    int gate = 0;
    for (int i = 0; i < fanZones; i++) {
        int order;
        scanf("%d", &order);

        int left = -1;
        int right = (order - i) / fanZones + 1;

        while (right - left > 1) {
            int middle = left + (right - left) / 2;

            if (timePassed(i, middle, fanZones) < order)
                left = middle;
            else
                right = middle;
        }

        int time = timePassed(i, right, fanZones);

        if (time < minimalTime || gate == 0) {
            minimalTime = time;
            gate = i + 1;
        }
    }

    printf("%d", gate);
}