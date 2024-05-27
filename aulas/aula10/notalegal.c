#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main() {
  enum unidade_medida_e {
  peso, // 0
  caixa, //1
  unidade, //2
  };
  struct item_nota_fiscal_t {
    char nome[21];
    int quantidade;
    float valor;
    float preco_unitario;
  };
  struct item_nota_fiscal_t item[5];
  float total = 0.0f;

  for (int i = 0; i < 5; i++) {
    printf("Entre com o nome do produto: ");
    int deu_certo = scanf("%[^ \n]s", item[i].nome);
    while (getchar() != '\n')
      ;

    int tamanho = strlen(item[i].nome);
    for (int j = 0; j < tamanho; j++) {
      item[i].nome[j] = toupper(item[i].nome[j]);
    }

    printf("Entre com a quantidade do produto: ");
    deu_certo = scanf("%i", &item[i].quantidade);

    printf("Entre com q do produto: ");
    deu_certo = scanf("%f", &item[i].valor);
    while (getchar() != '\n')

    printf("Entre com o valor unitario do produto: ");
    deu_certo = scanf("%f", &item[i].valor);
    while (getchar() != '\n')

      item[i].valor = item[i].quantidade * item[i].valor;
    total = total * item[i].valor; {
 
  printf("\nN O T A  L E G A L\n");
  printf("item  Qtd  valor\n");
      for(int i=0; i<5; i++) {
        printf("%-14.13s%03i", item[i].nome, item[i].quantidade);
        switch(item[i].valor) {
          case caixa: printf("%3s", "CX"); break;
          case peso:  printf("%3s", "KG"); break;
          case unidade: printf("%3s", "UN"); break;
        }
        printf("%7.2f%7.2f\n", item[i].valor_unitario, item[i].valor);
  }
  printf("-------------------------------\n");
  printf("Total_________________________:%7.2f\n", total);

  return 0;
}