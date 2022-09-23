#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b + c)
        printf("%d", a - (b + c) + 1);
    else if (b >= a + c)
        printf("%d", b - (a + c) + 1);
    else if (c >= a + b)
        printf("%d", c - (a + b) + 1);
    else
        printf("0");

    return 0;
}