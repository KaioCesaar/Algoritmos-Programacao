#include<stdio.h>
#include<math.h>

int main()
{


int num1, num2, soma, multi, sub;
float div;
printf("digite dois numeros = \n");
scanf("\n %d %d", &num1,&num2);

soma = num1 + num2;
sub = num1 - num2;
multi = num1 * num2;
div = (float)num1 / (float)num2;


printf("soma: %d, \nSubtracao: %d, \nDivisao: %.2f, \nMultiplicacao: %d,", soma, sub, div, multi);

int pot = pow(9,2);
printf("\nPotencia: %d", pot);

int mod =  num1 % num2;

printf("\nResto da divisao:%d", mod);

 return 0;
}