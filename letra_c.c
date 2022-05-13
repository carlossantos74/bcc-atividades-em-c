#include <stdio.h>
#include <math.h>

int main()
{
  float R, h, V;

  scanf("%d", &R);
  scanf("%d", &h);

  V = M_PI * R * R * h;

  printf("VOLUME = %.3f\n", V);

  return 0;
}