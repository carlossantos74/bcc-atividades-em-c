#include <stdio.h>

int main()
{
  int a, b, c, aq, bq, cq, s;

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);

  aq = a * a;
  bq = b * b;
  cq = c * c;
  s = aq + bq + cq;

  printf("%d", s);

  return 0;
}