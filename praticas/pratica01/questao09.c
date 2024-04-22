/*9. Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.*/
#include <stdio.h>
#include <math.h>
int main(){
int anos;
int meses;
int dias_restantes;
int dias;
  


printf("Insira o valor em anos: ");
int deu_certo = scanf("%i", &anos);

printf("Insira o valor em meses: ");
deu_certo = scanf("%i", &meses);
  
printf("Insira o valor em dias: ");
deu_certo = scanf("%i", &dias);

dias = anos * 365 + meses * 30 + dias;
printf("O valor em dias eh %i\n", dias);

  
  return 0;
}

