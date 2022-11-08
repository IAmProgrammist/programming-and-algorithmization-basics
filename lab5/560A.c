#include <stdio.h>
#include <stdbool.h>

int main() {
    int valueAmount;
    scanf("%d", &valueAmount);

    bool isOnePresented = false;

    for (int currentValue = 0; currentValue < valueAmount && !isOnePresented; currentValue++) {
        int value;
        scanf("%d", &value);

        isOnePresented = value == 1;
    }

    if (isOnePresented)
        printf("-1");
    else
        printf("1");

    return 0;
}