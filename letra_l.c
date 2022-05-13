#include <stdio.h>

int main()
{
  int realUsuario, dolarContacao, conversao;

  scanf("%d", &realUsuario);
  scanf("%d", &dolarContacao);

  conversao = realUsuario / dolarContacao;

  printf("%d", conversao);

  return 0;
}