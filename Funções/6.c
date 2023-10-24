#include<stdio.h>
#include<math.h>


float imc(float peso, float altura){

    float imc = peso / (altura * altura);

    return imc;
}

int main(){

void imprimir(void);

imprimir();

float numero, numero2;

printf("\nDigite seu peso:");
scanf("%f", &numero);

printf("\nDigite sua Altura:");
scanf("%f", &numero2);


float imc1 = imc(numero, numero2);

printf("\nPorcentagem: %.2f", imc1);

return 0;

}

void imprimir(){

printf("Calculo de IMC\n");

}