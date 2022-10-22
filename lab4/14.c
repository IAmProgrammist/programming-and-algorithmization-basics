#include <stdio.h>
#include <stdbool.h>

#define END_OF_LINE '\n'

bool isVowel(int character) {
    return character == 'a' ||
           character == 'e' ||
           character == 'i' ||
           character == 'o' ||
           character == 'u' ||
           character == 'y';
}

int main() {
    int count = 0;

    int input;
    while ((input = getchar()) != END_OF_LINE) {
        if (isVowel(input))
            count++;
    }

    printf("%d", count);
}