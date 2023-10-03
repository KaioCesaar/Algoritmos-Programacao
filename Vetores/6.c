#include<stdio.h>
#include<math.h>

main(){

int valor [10], Vmaior = 0, Vmenor = 11;

for(int i = 0; i < 10; i++){

    printf("Digite um valor:");
    scanf("%d", &valor[i]);

} for(int i = 0; i < 10; i++){

    if(valor[i] > Vmaior){
        Vmaior = valor[i];
    }

    if(valor[i] < Vmenor){
        Vmenor = valor[i];
    }
}

printf("O maior valor: %d, e o menor valor: %d", Vmaior, Vmenor);

}