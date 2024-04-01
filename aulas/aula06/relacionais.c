#include <stdio.h>

int main(){ 
 int numero1;
 int numero2;

  printf("Entre com o primeiro numero: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com o segundo numero: ");
  deu_certo = scanf("%i", &numero2);

  int sao_iguais = numero1 == numero2;
  printf ("Os numeros são iguais? %i\n", sao_iguais);

  int sao_diferentes = numero1 != numero2;
  printf ("Os numeros são diferentes? %i\n", sao_diferentes);

  int eh_maior = numero1 > numero2; //0<x<10 
  printf ("O primeiro é maior que o segundo? %i\n", eh_maior);
  
  int eh_menor = numero1 < numero2;
  printf ("O primeiro é menor que o segundo? %i\n", eh_menor);

  int eh_maior_ou_igual = numero1 >= numero2;
  printf ( "O primeiro é maior ou igual ao segundo? %i\n");
  int eh_menor_ou_igual = numero1 <= numero2;
  printf ("O primeiro é menor ou igual ao segundo? %i\n"); 

  

return 0;
}