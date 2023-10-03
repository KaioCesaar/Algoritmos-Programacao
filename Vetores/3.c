#include<stdio.h>
#include<math.h>

main(){


int reais[10], reais2[10];

for(int i = 0; i < 10; i++){

    printf("Digite um numero: ");
    scanf("%d", &reais[i]);
}

for(int i = 0; i < 10; i++){
    reais2[i] = reais[i] * reais[i];

    printf("\nOs valor digitado - (primero conjunto): %d - A potencia: %d", reais[i], reais2[i]);
}

}