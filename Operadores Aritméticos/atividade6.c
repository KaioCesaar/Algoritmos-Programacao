#include<stdio.h> 
#include<math.h>

int main()
{

float pi = 3.14;
float raio;

printf("Escolha um numero que represente o tamanho do raio de uma circunferencia:");
scanf("%f", &raio);

setbuf(stdin,NULL);

float area = pi * pow(raio,2); 

printf("Valor da area: %.2f", area); 





return 0;
}

