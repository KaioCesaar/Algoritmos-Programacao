#include<stdio.h>
#include<math.h>

main(){

int valor [8];
int x, y, soma;

for(int i = 0; i < 8; i++){

printf("Escolha um valor: ");
scanf("%d", &valor[i]);

}

printf("\nAgora escolha 2 posicoes: ");
scanf("%d %d", &x, &y);

//soma tem apresentado um valor a mais, por isso coloquei -1 para regular o valor

soma = valor[x -1] + valor[y - 1];

printf("\nSoma dos valores: %d ", soma);

}