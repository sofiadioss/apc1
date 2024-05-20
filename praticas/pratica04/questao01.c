#include <stdio.h>
#define LIMITE 10 
int main () {
  int numeros [LIMITE];
  for (int i=0; i < LIMITE; i++) {
    printf("Entre com o %io numero: ", i + 1);
    int deu_certo = scanf("%i", &numeros[i]);

  } 
  int numero;
  printf("Entre com o numero a ser procurado: ");
  int deu_certo = scanf("%i", &numero);
  int achei = -1;
  


  for (int i=0; i< LIMITE; i ++) {
    if (numeros[i] == numero){
      achei = i;
      break; 
    }
  }
  if (achei<0) {
    printf("O numero %I não foi encontrado! \n", numero)
  } else {
      printf("O numero %i esta na posicao %i\n", numero, i);
    }
  
  return 0;
}