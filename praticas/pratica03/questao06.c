/* 6. Faça um programa em C que liste todos os múltiplos de 3, entre 1 e 100.
*/
#include <stdio.h>
int main () {
  int numero;
  printf("Entre com um numero entre 1 e 100: ");
  int leu_certo = scanf("%i", &numero);
  if (leu_certo && numero > 0 && numero <101) {
    printf ("Os multiplos de %i entre 1 e 100\n", numero);
    for (int i = 1; i <= 100; i++){
      if (i % numero == 0) {
        printf("%i,", i);
      }
    }
    printf ("\n");
  } else {
    printf ("Numero invalido tente novamente!\n");
  }
   
  return 0;
  }