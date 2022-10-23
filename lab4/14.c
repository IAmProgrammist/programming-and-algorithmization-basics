#include <stdio.h>
#include <stdbool.h>

#define END_OF_LINE '\n'

bool isLetter(int character) {
    return character >= 'a' && character <= 'z';
}

int main() {
    int count = 0;

    int input;
    while ((input = getchar()) != END_OF_LINE) {
        if (isLetter(input))
            count++;
    }

    printf("%d", count);

    return 0;
}