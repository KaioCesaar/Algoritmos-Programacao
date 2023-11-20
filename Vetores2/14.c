#include<stdio.h>
#include<math.h>

main(){

int vetor[10], vetor2[10], iguais, valor;
    
    for(int i = 0; i < 10; i++){
        printf("Digite um valor:");
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 10; i++){
        vetor2[i] = vetor[1];
    }
    
    for(int i = 0; i < 10; i++){
        for(int j = i+1; j < 10; j++){
            if(vetor[i] == vetor[j]){
                int repetido = 0;
                for(int k = 0; k < i; k++){
                if(vetor[i] == vetor[k]){
                    repetido = 1;
                    break;
                }
                }
                if(!repetido){
                    printf("%d", vetor[i]);
                }
                break;
            }  
        }
    }

}







