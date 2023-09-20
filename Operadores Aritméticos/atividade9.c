#include <stdio.h>
#include <math.h>

int main() {
    float custo, pordist = 0.28, imposto = 0.45, cfinal;

    printf("Informe o valor de fabrica: ");
    scanf("%f", &custo);
    fflush(stdin);

    cfinal = custo + (custo * pordist) + (custo * imposto);

    printf("\nO valor do custo final do carro equivale a: %.2f", cfinal);

   
   
    return 0;

}