#include<stdio.h>
#include<math.h>


float grau(int n1){

float grauf = n1 - 32;
float grauD = (grauf * 5) / 9;

return grauD;
}

int main(){

void imprimir(void);

imprimir();

int numero;

printf("\nDigite uma temperatura em F:");
scanf("%d", &numero);

float grauC = grau(numero);

printf("\nEssa temperatura equivale: %.2f", grauC);

return 0;

}

void imprimir(){

printf("Fahrenheit para Celsius\n");

}