#include<stdio.h>
#include<math.h>

void mes(int n1){

if (n1 >= 1 && n1 <= 12){

switch(n1){

case 1: printf("Janeiro - 31 dias");
break;

case 2: printf("Fervereiro - 28 dias");
break;

case 3: printf("Março - 31 dias");
break;

case 4: printf("Abril - 30 dias");
break;

case 5: printf("Maio - 31 dias");
break;

case 6: printf("Junho - 30 dias");
break;

case 7: printf("Julho - 31 dias");
break;

case 8: printf("Agosto - 31 dias");
break;

case 9: printf("Setembro - 30 dias");
break;

case 10: printf("Outubro - 31 dias");
break;

case 11: printf("Novembro - 30 dias");
break;

case 12: printf("Dezembro - 31 dias");
break;

default: printf("Tu é serpentário??");

}

}

}

int main(){

void imprimir(void);

imprimir();

int numero;

printf("\nDigite um numero referente ao mes:");
scanf("%d", &numero);

mes(numero);

return 0;

}

void imprimir(){

printf("Meses do Ano\n");

}