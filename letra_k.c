#include <stdio.h>

int main()
{
  int dolarUsuario, dolarContacao, conversao;

  scanf("%d", &dolarUsuario);
  scanf("%d", &dolarContacao);

  conversao = dolarUsuario * dolarContacao;

  printf("%d", conversao);

  return 0;
}