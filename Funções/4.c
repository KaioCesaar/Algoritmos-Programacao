#include<stdio.h>
#include<math.h>


float volume(float raio, float altura){

    float pi = 3.14;
    float volume = pi * (raio * raio) * altura;

    return volume;
}

int main(){

void imprimir(void);

imprimir();

float numero, numero2;

printf("\nDigite um Raio:");
scanf("%f", &numero);

printf("\nDigite uma Altura:");
scanf("%f", &numero2);


float volume1 = volume(numero, numero2);

printf("\nVolume do Cilindro: %.2f", volume1);

return 0;

}

void imprimir(){

printf("Calculo volume de um cilindro\n");

}