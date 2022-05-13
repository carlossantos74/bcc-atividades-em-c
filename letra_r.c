#include <stdio.h>
#include <math.h>

int main()
{
  int A;
  int B;
  int C;
  int VN;
  int VB;
  int VV;
  int T;
  int ptVV;
  int ptA;
  int ptB;
  int ptC;
  int ptVN;
  int ptVB;

  scanf("%d", &A);
  scanf("%d", &B);
  scanf("%d", &C);
  scanf("%d", &VN);
  scanf("%d", &VB);

  VV = A + B + C;
  T = VV + VN + VB;
  ptA = (A * 100);
  ptB = (B * 100);
  ptC = (C * 100);
  ptVN = (VN * 100);
  ptVB = (VB * 100);

  printf("%d", &VV);
  printf("%d", &T);
  printf("%d", &ptVV);
  printf("%d", &ptA);
  printf("%d", &ptB);
  printf("%d", &ptC);
  printf("%d", &ptVN);
  printf("%d", &ptVB);

  return 0;
}