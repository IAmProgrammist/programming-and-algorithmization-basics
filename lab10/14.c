#include <stdio.h>

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
            int middle = (left + right) / 2;

            if (i + middle * fanZones < order)
                left = middle;
            else
                right = middle;
        }

        int time = i + right * fanZones;

        if (time < minimalTime || gate == 0) {
            minimalTime = time;
            gate = i + 1;
        }
    }

    printf("%d", gate);
}