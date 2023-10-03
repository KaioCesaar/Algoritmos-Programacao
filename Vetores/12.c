#include<stdio.h>
#include<math.h>

main(){

int valor [5], Vmaior = 0, Vmenor = 6, media = 0;



for(int i = 0; i < 5; i++){

    printf("Digite um valor:");
    scanf("%d", &valor[i]);

} for(int i = 0; i < 5; i++){
    if(valor[i] > Vmaior){
        Vmaior = valor[i];
    }

    if(valor[i] < Vmenor){
        Vmenor = valor[i];
    }
    
    media += valor[i];
}
media = media / 5 ;

printf("O maior valor: %d. \nO menor valor: %d. \nA media dos 5 valores = %d", Vmaior, Vmenor, media);
}
