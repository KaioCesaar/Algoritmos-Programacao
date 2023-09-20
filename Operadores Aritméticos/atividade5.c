#include<stdio.h>
#include<math.h>

int main()
{
    
 float custo, frete, despesa, venda, valor, final, lucro, porcentagem;



    printf("\nDigite o valor do custo do produto =");
    scanf("%f", &custo);

    printf("\nDigite o valor do frete do produto =");
    scanf("%f", &frete);

    printf("\nDigite o valor da despesa = ");
    scanf("%f", &despesa);


    valor = custo + frete + despesa;

    printf("\n custo do produto: %.2f . \nvalor de venda:", valor);
    scanf("%f", &venda);
    setbuf(stdin, NULL);


    lucro = venda - valor;
    final = lucro / valor;
    porcentagem = final * 100;
    


    printf("\nO valor do lucro e : %.2f", lucro);
    printf("\nA porcetagem do lucro e : %.2f", porcentagem);










    return 0;
}

