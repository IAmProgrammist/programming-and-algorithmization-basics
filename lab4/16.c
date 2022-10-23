#include <stdio.h>
#include "consoleoutput.h"
#include <stdbool.h>

#define DECREASING_SEQUENCE -1
#define INCREASING_SEQUENCE 1
#define EQUAL_SEQUENCE 0

int defineSequenceType(int numberA, int numberB) {
    int delta = numberA - numberB;
    if (delta > 0) return INCREASING_SEQUENCE;
    if (delta < 0) return DECREASING_SEQUENCE;
    return EQUAL_SEQUENCE;
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
            int requiredSequenceType = defineSequenceType(input, prevNumber);
            bool isSequenceTypeComplined = true;
            prevNumber = input;

            scanf("%d", &input);

            while (input != 0 && isSequenceTypeComplined) {
                int currentSequenceType = defineSequenceType(input, prevNumber);

                if (currentSequenceType != requiredSequenceType)
                    isSequenceTypeComplined = false;

                prevNumber = input;

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
            else {
                printf("Тип последовательности определить невозможно");
            }
        }
    }

    return 0;
}