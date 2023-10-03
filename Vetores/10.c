#include<stdio.h>
#include<math.h>

main(){

float nota [15], media;


for(int i = 0; i < 15; i++){

    printf("Digite a nota do aluno:");
    scanf("%f", &nota[i]);

} for(int i = 0; i < 15; i++){

    media += nota[i];
}

media = media/15;

printf("A media das notas: %.2f", media);

}