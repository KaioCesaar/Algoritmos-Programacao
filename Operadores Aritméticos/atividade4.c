#include <stdio.h>
#include <math.h>

int main() {
    int real;
    float dolar;

    printf("Informe o valor em real = ");
    scanf("%d", &real); 

    dolar = real * 4.87;

    printf("O valor convertido foi = %.2f", dolar); 

    return 0;
}