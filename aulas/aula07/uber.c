#include <stdio.h>
int main() {
  int avaliacao;
 
  printf("Entre com a avaliacao do motorista entre 1 a 5: ");
  int leu_certo = scanf("%i", &avaliacao);
  /*
  if (avaliacao == 1) {
    printf("O motorista ganhou 1 *\n");
  } else if (avaliacao == 2) {
    printf("O motorista ganhou 2 **\n");
  } else if (avaliacao == 3) {
    printf("O motorista ganhou 3 ***\n");
  } else if (avaliacao == 4) {
    printf("O motorista ganhou 4 ****\n");
  } else if (avaliacao == 5) {
    printf("O motorista ganhou 5 *****\n");
  } else {
    printf("Avaliacao invalida. Tente novamente!\n");
  }
  */
switch (avaliacao) {
  case 1: printf("O motorista ganhou *\n"); break;
  case 2: printf("O motorista ganhou **\n"); break;
  case 3: printf("O motorista ganhou ***\n"); break;
  case 4: printf("O motorista ganhou ****\n"); break;
  case 5: printf("O motorista ganhou *****\n"); break;
}
  return 0;
}