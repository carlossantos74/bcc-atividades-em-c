#include <stdio.h>

int main()
{
  int a, b, c, d, a1, a2, a3, a4, a5, a6;

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);

  a1 = a + b;
  a2 = a + c;
  a3 = a + d;
  a4 = b + c;
  a5 = b + d;
  a6 = c + d;

  printf("%d", a1);
  printf("%d", a2);
  printf("%d", a3);
  printf("%d", a4);
  printf("%d", a5);
  printf("%d", a6);

  return 0;
}