#include<stdio.h>
#include<math.h>

int main(){

float valor, reajuste, total, final;


printf("\nValor do salario: ");
scanf("%f", &valor);
setbuf(stdin, NULL);

printf("\nValor de Reajuste (Porcentagem):");
scanf("%f", &reajuste);
setbuf(stdin, NULL);

total = valor * reajuste / 100;

printf("\nReajuste do Salario: %.2f", total);

final = valor + total;

printf("\nNovo Salario: %.2f", final);


return 0;
}