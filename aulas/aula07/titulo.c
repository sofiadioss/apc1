#include <stdio.h>
int main() {
  int idade;

  printf("Entre com a sua idade: ");
  int leu_certo = scanf("%i", &idade);
  
  int (leu_certo) {
    if (idade < 16) {
      printf("Ainda nao pode votar!\n");
    } else if (idade >= 18 && idade <= 70) {
      printf("O voto é obrigatorio!\n");
    } else if (idade >=16 && < 18) {
      printf("O voto é opicional. \n");
    }
    } else {
      printf("Idade invalida. Tente novamente!\n");
    }
      return 0;
    }
