#include <stdio.h>
#include "consoleoutput.h"

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int input;
    scanf("%d", &input);

    if (input == 0)
        printf("Последовательность пуста");
    else {
        int max = input;
        int previousElement = input;

        scanf("%d", &input);

        if (input == 0)
            printf("Последовательность содержит только один элемент");
        else {
            int beforeMax = 0;

            while (input != 0) {
                if (input > max) {
                    max = input;
                    beforeMax = previousElement;
                }

                previousElement = input;

                scanf("%d", &input);
            }

            if (beforeMax == 0)
                printf("Первый элемент последовательности максимальный");
            else
                printf("%d", beforeMax);
        }
    }

    return 0;
}