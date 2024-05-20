#include <stdio.h>
int main () {
  char nome [20];
  printf ("Entre com seu nome: ");
  int deu_certo = scanf ("%[^\n]", nome);	
  printf("Ola %s!\n", nome);
  char mensagem [30];
  strcpy(mensagem, "Ola");
  printf("%S\n", mensagem);
  strcat(mensagem, "mundo!");
  printf("%s\n", mensagem);
  int tamanho = strlen(mensagem);
  printf("O tamanho da string eh %i\n", tamanho);
  printf("As strings nome e mensagem sao iguais? %i\n", strcmp(nome, mensagem));
}