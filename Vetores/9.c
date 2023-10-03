#include<stdio.h>
#include<math.h>

main(){

int valor [6];


for(int i = 0; i < 6; i++){

    printf("Digite um valor par:");
    scanf("%d", &valor[i]);

    if (valor[i]%2 != 0){
    printf("\nValor invalido!\n");
        i -= 1;
    }

}

printf("\nA ordem inversa:");

for(int i = 5; i > -1; i = i - 1){

    printf("\n%d", valor[i]);

}

}