#include <stdio.h>

int main() {
    int cash;
    scanf("%d", &cash);

    int cashBags = 0;

    while (cash != 0) {
        // Ну надо же хотя бы один побитовый оператор вставить
        // По побитовым операторам же лаба ¯\_(ツ)_/¯
        cash >>= 1;
        cashBags++;
    }

    printf("%d", cashBags);

    return 0;
}