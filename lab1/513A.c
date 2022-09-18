#include <stdio.h>
 
int main() {
	int n1, n2, k1, k2;
	scanf("%d %d %d %d", &n1, &n2, &k1, &k2);
	
	if (n2 >= n1)
		printf("Second");
	else
		printf("First");
 
	return 0;
}