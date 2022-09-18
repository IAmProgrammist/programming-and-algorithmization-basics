#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  int ratioA = a;
  int ratioB = b / 2;
  int ratioC = c / 4;
  int rationMin;

  if (ratioA < ratioB && ratioA < ratioC)
    rationMin = ratioA;
  else if (ratioB < ratioC)
    rationMin = ratioB;
  else
    rationMin = ratioC;

  const int RATIO_COUNT_MIN = 7;

  printf("%d", rationMin * RATIO_COUNT_MIN);

  return 0;
}