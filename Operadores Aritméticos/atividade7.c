#include<stdio.h>
#include<math.h>

int main(){

int ano, mes, dia, total;

printf("Por favor, informe a sua idade em anos:");
scanf("%d", &ano);
setbuf(stdin, NULL);

printf("Por favor, informe o mes de nascimento:");
scanf("%d", &mes);
setbuf(stdin, NULL);

printf("Por favor, informe o dia do seu nascimento:");
scanf("%d", &dia);
setbuf(stdin, NULL);

total = ano * 365 + mes * 30 + dia;
	
printf("\nSua idade em dias: %d", total);

    

	
return 0;
}