#include <stdio.h>
int main(){
  float nota1;
  float nota2;

  printf("Entre com a nota 1: ");
  int deu_certo = scanf("%f", &nota1);


  //0.0f<=nota1<=10.0f//
  if (nota1 >= 0.0f && nota1 <= 10.0f&& deu_certo){
  printf("Entre com a segunda nota: ");
  deu_certo = scanf("%f", &nota2);

  if (nota2 >= 0.0f && nota2 <= 10.0f && deu_certo){
  float media = 0.4f * nota1 + 0.6f * nota2; 
    printf("A media eh % .1f\n", media);
    
    
    if (media>= 9.0 && media<= 10.0f) {
      printf("A mensao eh SS\n" );
    }else if (media >= 7.0 && media < 9.0f){
      printf ("A media eh MS\n" );
    } else if(media >= 5.0 && media < 7.0f){
      printf ("A media eh MM\n");
    } else if(media >= 3.0f && media < 5.0f){
      printf ("A media eh MI\n");
    } else if(media >= 0.1f && media < 3.0f){
      printf ("A media eh II\n");
    } else if(media == 0.0f){
      printf ("A media eh SR\n"); 
    }
  } else {
    printf("A segunda nota é invalida!\n");
  } 
  } else { 
   printf("A primeira nota é invalida!\n");
     }

  return 0;
}