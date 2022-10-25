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
    int digitsSum = 0;

    int input;
    while ((input = getchar()) != END_OF_INPUT)
        if (isDigit(input))
            digitsSum += convertCharToDigit(input);

    printf("%d", digitsSum);

    return 0;
}