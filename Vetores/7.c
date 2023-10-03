#include<stdio.h>
#include<math.h>

main(){

int valor [10], Vmaior = 0, pos = 0;


for(int i = 0; i < 10; i++){

    printf("Digite um valor:");
    scanf("%d", &valor[i]);

} for(int i = 0; i < 10; i++){

    printf("\nOs valores do vetor: ", valor[i]);

    if(valor[i] > Vmaior){

        Vmaior = valor[i];
        pos = 1 + i;
    }
}
    printf("\nO maior valor: %d, e sua posicao: %d", Vmaior , pos);
}