#include<stdio.h>
#include<math.h>

main(){

int valor [6] = {0 , 1, 5, -2, -5, -7};
int soma;

soma = valor [0] + valor [1] + valor [5];
valor [4] = 100,

printf("\nValor da soma das posicoes 0, 1 e 5 : %d", soma);
printf("\nOrdem dos numeros:");
printf("\n%d \n%d \n%d \n%d \n%d \n%d", valor [0], valor [1], valor [2], valor [3], valor [4], valor [5]);
}