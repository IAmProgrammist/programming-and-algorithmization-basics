#include <stdio.h>
#include "consoleoutput.h"

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int input;
    scanf("%d", &input);

    if (input == 0) {
        printf("Последовательность пуста");
    } else {
        int min = input;

        scanf("%d", &input);

        if (input == 0) {
            printf("Последовательность содержит только один элемент");
        } else {
            int nextAfterMin = input;

            int previousElement;
            while (input != 0) {
                previousElement = input;

                scanf("%d", &input);

                if (previousElement <= min) {
                    min = previousElement;
                    nextAfterMin = input;
                }
            }

            if(nextAfterMin == 0) {
                printf("Последний элемент последовательности минимальный");
            } else {
                printf("%d", nextAfterMin);
            }
        }
    }
}