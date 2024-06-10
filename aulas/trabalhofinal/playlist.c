#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SONGS 100

typedef struct {
  char titulo[50];
  char artista[50];
  int duracao;
} Musica;

int main() {
  Musica playlist[MAX_SONGS];
  int num_musicas = 0;
  int opcao = 0;

  do {
    printf("Playlist\n");
    printf("1 - Adicionar música\n");
    printf("2 - Listar músicas\n");
    printf("3 - Sair\n");
    printf("Escolha uma opção: ");
    int deu_certo = scanf("%d", &opcao);

    if (!deu_certo)
      opcao = 0;

    while (getchar() != '\n')
      ;

    switch (opcao) {
    case 1: { // opcao adicionar musica
      if (num_musicas < MAX_SONGS) {
        char titulo[50];
        char artista[50];
        int duracao;

        printf("Nome da música: ");
        deu_certo = scanf("%[^\n]", titulo);
        getchar();

        printf("Digite o nome do artista: ");
        deu_certo = scanf("%[^\n]", artista);
        getchar();

        printf("Digite a duração da música em segundos: ");
        deu_certo = scanf("%d", &duracao);

        // Copiar para a playlist
        strcpy(playlist[num_musicas].titulo, titulo);
        strcpy(playlist[num_musicas].artista, artista);
        playlist[num_musicas].duracao = duracao;

        num_musicas++;
        printf("Música adicionada com sucesso!\n");

      } else {
        printf(
            "A playlist está cheia. Não é possível adicionar mais músicas.\n");
      }
      break;
    }
    case 2: { // opcao listar musicas
      if (num_musicas == 0) {
        printf("A playlist está vazia.\n");
      } else {
        printf("\nPlaylist:\n");
        for (int i = 0; i < num_musicas; i++) {
          printf("%d. %s - %s (%d segundos)\n", i + 1, playlist[i].titulo,
                 playlist[i].artista, playlist[i].duracao);
        }
      }
      break;
    }
    case 3: { // opcao sair
      printf("Até logo!\n");
      break;
    }
    default: {
      printf("Opção inválida! Por favor, escolha uma opção válida.\n");
    }
    }
  } while (opcao != 3);

  return 0;
}