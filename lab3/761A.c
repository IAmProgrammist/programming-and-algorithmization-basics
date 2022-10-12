#include <stdio.h>
#include <math.h>

int main() {
    int evenStairs, oddStairs;
    scanf("%d %d", &evenStairs, &oddStairs);

    if (abs(oddStairs - evenStairs) <= 1 && evenStairs + oddStairs)
        printf("YES");
    else
        printf("NO");

    return 0;
}