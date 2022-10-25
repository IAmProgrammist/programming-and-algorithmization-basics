#include <stdio.h>
#include <stdbool.h>

#define END_OF_INPUT '.'

bool isDigit(int character) {
    return character >= '0' && character <= '9';
}

int convertCharToDigit(int character) {
    return character - '0';
}

int main() {
    int numbersSum = 0;
    int tempNum = 0;

    int input;
    do {
        input = getchar();

        if (isDigit(input))
            tempNum = tempNum * 10 + convertCharToDigit(input);
        else {
            numbersSum += tempNum;
            tempNum = 0;
        }
    } while (input != END_OF_INPUT);

    printf("%d", numbersSum);

    return 0;
}