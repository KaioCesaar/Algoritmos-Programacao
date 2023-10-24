#include<stdio.h>
#include<math.h>


float volume(float raio){

    float pi = 3.14;
    float volume = 4 / 3 * pi * (raio * raio * raio);

    return volume;
}

int main(){

void imprimir(void);

imprimir();

float numero2;


printf("\nDigite um raio:");
scanf("%f", &numero2);

float volume1 = volume(numero2);

printf("\nVolume da Esfera: %.2f", volume1);

return 0;

}

void imprimir(){

printf("Calculo volume de um esfera\n");

}