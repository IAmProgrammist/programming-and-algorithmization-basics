#include <stdio.h>

#define RATIO_COUNT_MIN 7

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int ratioA = a;
    int ratioB = b / 2;
    int ratioC = c / 4;
    int ratioMin;

    if (ratioA < ratioB && ratioA < ratioC)
        ratioMin = ratioA;
    else if (ratioB < ratioC)
        ratioMin = ratioB;
    else
        ratioMin = ratioC;

    printf("%d", ratioMin * RATIO_COUNT_MIN);

    return 0;
}