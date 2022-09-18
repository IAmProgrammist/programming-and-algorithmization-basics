#include <stdio.h>

int main() {
  int x;
  scanf("%d", &x);

  int steps = x / 5 + (x % 5 != 0);

  printf("%d", steps);

  return 0;
}