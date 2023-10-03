#include<stdio.h>
#include<math.h>

main(){

int valor [10], soma = 0, neg = 0;



for(int i = 0; i < 10; i++){

    printf("Digite um valor:");
    scanf("%d", &valor[i]);

} for(int i = 0; i < 10; i++){

    if(valor[i] < 0){
        neg++;
    }

    if(valor[i] > 0){

        soma += valor[i];

    }
}

printf("A soma dos valores positivos: %d. \nQuantidade de valores negativo: %d.", soma, neg);

}