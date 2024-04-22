/*10. Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).*/
#include <stdio.h>
int main(){
  int unidades;
  int dezenas;
  int centenas;
  int milhares;
  int numero;

printf("Insira o valor do numero inteiro: ");
int deu_certo = scanf("%i", &numero);

unidades = numero % 10;
dezenas = (numero/10) % 10;
centenas = numero/100 % 10;
milhares = numero/1000 % 10;

printf("O valor em unidades eh %i\n", unidades);
  printf("O valor das dezenas eh %i\n", dezenas);
  printf("O valor das centenas eh %i\n", centenas);
  printf("O valor dos milhares eh %i\n", milhares);
  
  
  return 0; 
}
