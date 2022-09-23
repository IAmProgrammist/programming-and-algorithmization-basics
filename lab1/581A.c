#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int differentSocks = a > b ? b : a;
    // Нечётный носок был отправлен при делении в далёкую носковую Вальхаллу в стиральной машине
    int sameSocks = (a + b) / 2 - differentSocks;

    printf("%d %d", differentSocks, sameSocks);

    return 0;
}