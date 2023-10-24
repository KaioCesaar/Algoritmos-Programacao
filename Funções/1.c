#include<stdio.h>
#include<math.h>


int maior(int n1, int n2){

if(n1 > n2) return n1;
else return n2;

}

main(){

void imprimir(void);

imprimir();

int numero1, numero2;

printf("\nDigite dois numeros:");
scanf("%d %d", &numero1, &numero2);

printf("O maior valor: %d", maior(numero1, numero2));

return 0;

}

void imprimir(){

printf("Escolha 2 numeros, para dizermos o maior\n");

}
