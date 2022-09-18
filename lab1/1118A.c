#include <stdio.h>

int main() {
  int q;
  scanf("%d", &q);

  for (int i = 0; i < q; i++) {
    long long n;
    int a, b;
    scanf("%lld %d %d", &n, &a, &b);

    long long sum1 = n * a;
    long long sum2 = (n / 2) * b + (n % 2) * a;
    long long sum = sum2 < sum1 ? sum2 : sum1;

    printf("%lld\n", sum);
  }

  return 0;
}