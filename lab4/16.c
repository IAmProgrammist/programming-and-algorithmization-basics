#include <stdio.h>
#include "consoleoutput.h"
#include <stdbool.h>

#define DECREASING_SEQUENCE (-1)
#define INCREASING_SEQUENCE 1
#define EQUAL_SEQUENCE 0

int defineSequenceType(int numberA, int numberB) {
    if (numberA > numberB) return INCREASING_SEQUENCE;
    if (numberA < numberB) return DECREASING_SEQUENCE;
    return EQUAL_SEQUENCE;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int input;
    scanf("%d", &input);

    if (input == 0)
        printf("Последовательность пуста");
    else {
        int previousNumber = input;

        scanf("%d", &input);

        if (input == 0)
            printf("Тип последовательности определить невозможно");
        else {
            int requiredSequenceType = defineSequenceType(input, previousNumber);
            bool isSequenceTypeComplined = true;
            previousNumber = input;

            scanf("%d", &input);

            while (input != 0 && isSequenceTypeComplined) {
                int currentSequenceType = defineSequenceType(input, previousNumber);

                if (currentSequenceType != requiredSequenceType)
                    isSequenceTypeComplined = false;

                previousNumber = input;

                scanf("%d", &input);
            }

            if (isSequenceTypeComplined)
                switch (requiredSequenceType) {
                    case DECREASING_SEQUENCE:
                        printf("Убывающая последовательность");
                        break;
                    case EQUAL_SEQUENCE:
                        printf("Последовательность из одинаковых элементов");
                        break;
                    case INCREASING_SEQUENCE:
                        printf("Возрастающая последовательность");
                        break;
                }
            else
                printf("Тип последовательности определить невозможно");
        }
    }

    return 0;
}