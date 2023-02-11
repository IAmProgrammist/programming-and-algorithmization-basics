#include <stdio.h>
#include "consoleoutput.h"

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int input;
    scanf("%d", &input);

    if (input == 0)
        printf("Последовательность пуста");
    else {
        int maxNumber = input;

        scanf("%d", &input);

        while (input != 0) {
            maxNumber = input > maxNumber ? input : maxNumber;

            scanf("%d", &input);
        }

        printf("%d", maxNumber);
    }

    return 0;
}
