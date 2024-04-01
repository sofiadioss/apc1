/*
Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.
*/
#include <stdio.h> 
int main () {
 float raio;
 const float PI= 3.1416f;
 
raio = 2.0f; 

printf("Entre com o valor do raio: "); 
int deu_certo = scanf("%f", &raio);
  
float perimetro = 2 * PI * raio; 
printf ("O perimetro da pizza eh %f\n", perimetro);

return 0; 
  }