/*
 Faça um programa em C que calcule o fatorial de um número inteiro.*/
   
#include <stdio.h>
int main() {
  long int numero;
  long int fatorial = 1;
  printf("Entre com um numero >= 0: ");
  int leu_certo = scanf("%li", &numero);
  
  if (leu_certo && numero >= 0) {
    printf("%li! = ", numero);
    for (int i = numero; i > 1; i--) {
      printf(" %i *", i);
      fatorial = fatorial * 1;
    }
    printf("1 = %li\n", fatorial);
}
else {
  printf("Numero invalido. Tente novamente!\n");
}
return 0;
}