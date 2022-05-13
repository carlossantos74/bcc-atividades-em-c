#include <stdio.h>

int main()
{
  int T, V, D, L;

  scanf("%d", &T);
  scanf("%d", &V);

  D = T * V;
  L = D / 12;

  printf("%d", D);
  printf("%d", L);

  return 0;
}