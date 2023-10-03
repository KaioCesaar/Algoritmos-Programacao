#include<stdio.h>
#include<math.h>

main(){

int valor [5], maior = 0, menor = 0 , posmaior = 0, posmenor = 0;

for(int i = 0; i < 5; i++){

    printf("Digite um valor:");
    scanf("%d", &valor[i]);
}

maior = valor[0];
menor = valor[0];

for(int i = 0; i < 5; i++){

    if(valor[i] > maior){
        maior = valor[i];
        posmaior = i;
    }

    if(valor[i] < maior){
        menor = valor[i];
        posmenor = i;
    }

}

printf("\nMaior: %d na posicao: %d.\nMenor: %d na posicao: %d", maior, posmaior, menor, posmenor);

}
