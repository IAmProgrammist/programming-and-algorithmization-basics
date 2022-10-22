#include <stdio.h>
#include "consoleoutput.h"
#include <stdbool.h>

int sign(int number) {
    if (number > 0) return 1;
    if (number < 0) return -1;
    return 0;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int input;
    scanf("%d", &input);

    if (input == 0)
        printf("Последовательность пуста");
    else {
        int prevNumber = input;

        scanf("%d", &input);

        if (input == 0)
            printf("Тип последовательности определить невозможно");
        else {
            int requiredDeltaSign = sign(input - prevNumber);
            bool isDeltaSignComplied = true;
            prevNumber = input;
            scanf("%d", &input);

            while (input != 0 && isDeltaSignComplied) {
                int currentDeltaSign = sign(input - prevNumber);

                if (currentDeltaSign != requiredDeltaSign)
                    isDeltaSignComplied = false;

                prevNumber = input;
                scanf("%d", &input);
            }

            if (isDeltaSignComplied)
                switch (requiredDeltaSign) {
                    case -1:
                        printf("Убывающая последовательность");
                        break;
                    case 0:
                        printf("Последовательность из одинаковых элементов");
                        break;
                    case 1:
                        printf("Возрастающая последовательность");
                        break;
                }
            else {
                printf("Тип последовательности определить невозможно");
            }
        }
    }

    return 0;
}