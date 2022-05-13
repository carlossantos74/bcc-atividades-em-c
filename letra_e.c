#include <stdio.h>

int main()
{
  int V, T, t, P;

  scanf("%d", &V);
  scanf("%d", &T);
  scanf("%d", &t);

  P = V + (V * (t / 100) * T);

  return 0;
}