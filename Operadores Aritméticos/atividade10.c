#include<stdio.h>
#include<math.h>

int main()
{
    float base, vcomiss, total, comissao, sal;
    int carros;

    printf("Informe o salario base do vendedor, por favor: ");
    scanf("%f", &base);

    printf("Informe o valor da comissao por carro vendido, por favor: ");
    scanf("%f", &vcomiss);

    printf("Informe o total de carros vendidos, por favor: ");
    scanf("%d", &carros);

    printf("Informe o total de vendas, por favor: ");
    scanf("%f", &total);

    comissao = carros * vcomiss;
    comissao = comissao + (total * 5/100);

    sal = comissao + base;

    printf("O salario final do vendedor: %.2f", sal);

    return 0;
}