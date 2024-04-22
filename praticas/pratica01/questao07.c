/*
  7. Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.
*/
#include <stdio.h> 
#include <math.h>
int main() {
float distancia = 0.0;
float angulo = 0.0; 

//converter o angulo de graus para radianos 
float angulo_radianos = angulo * M_PI / 180.0; 

printf("Insira o valor da distancia percorrida pelo aviao: ");
float deu_certo = scanf("%f", &distancia);
printf("Insira o valor do angulo de inclinacao do aviao: ");
deu_certo = scanf("%f", &angulo);

float altura = distancia * sin(angulo);
printf("O valor da altura eh %f\n", altura);
  
return 0;
}

