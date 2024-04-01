// Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes). 

# include <stdio.h> 
int main() {
long int gigabytes; 
long int bytes;

gigabytes = 1.0f;

printf("Entre com o valor em gigabytes: ");
int deu_certo = scanf("%li", &gigabytes);

bytes = 1024 * 1024 * 1024 * gigabytes;
printf ("O valor em gigabytes eh %li\n", bytes);


return 0;
}
