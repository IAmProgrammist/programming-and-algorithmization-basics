#include <stdio.h>

int main() {
  int s, v1, v2, t1, t2;
  scanf("%d %d %d %d %d", &s, &v1, &v2, &t1, &t2);

  int timeOfFirstPlayer = 2 * t1 + s * v1;
  int timeOfSecondPlayer = 2 * t2 + s * v2;

  if (timeOfFirstPlayer < timeOfSecondPlayer)
    printf("First");
  else if (timeOfFirstPlayer > timeOfSecondPlayer)
    printf("Second");
  else
    printf("Friendship");

  return 0;
}