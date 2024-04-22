/*8. Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).
*/

#include <stdio.h>
int main(){
int segundos;
int horas;
int minutos;
int segundos_restantes;

printf("Entre com o valor em segundos: ");
int deu_certo = scanf( "%i", &segundos);

horas = segundos / 3600;
printf( "O valor em horas eh %i\n", horas);
minutos = (segundos % 3600) / 60;
printf("O valor em minutos eh %i\n", minutos);
segundos_restantes = (segundos % 3600) % 60;
printf("O valor em segundos eh %i\n", segundos_restantes);
  
  
  return 0;
}
