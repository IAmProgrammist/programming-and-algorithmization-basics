#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int requiredTime;
    if (a >= b + c)
        requiredTime = a - (b + c) + 1;
    else if (b >= a + c)
        requiredTime = b - (a + c) + 1;
    else if (c >= a + b)
        requiredTime = c - (a + b) + 1;
    else
        requiredTime = 0;

    printf("%d", requiredTime);

    return 0;
}