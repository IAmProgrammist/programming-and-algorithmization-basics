#include <stdio.h>

int main() {
	int w, k, n;
	scanf("%d %d %d", &k, &n, &w);
 
	int S = ((k + w * k) * w) / 2;
    int totalPayment;

    if (S - n > 0)
        totalPayment = S - n;
    else
        totalPayment = 0;

    printf("%d", totalPayment);
 
	return 0;
}