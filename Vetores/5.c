#include<stdio.h>
#include<math.h>

main(){

int valor [10], Vpar = 0;

for(int i = 0; i < 10; i++){

    printf("Digite um valor:");
    scanf("%d", &valor[i]);

} for(int i = 0; i < 10; i++){

    if(valor[i] % 2 == 0){
        Vpar++;
    }

}

printf("\nDos numeros citados, %d sao numeros pares", Vpar); 

}