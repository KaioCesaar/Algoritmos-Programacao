#include <stdio.h>
#include <math.h>

main()
{

    int n1 = 0, n2 = 0, res = 0, sair = 0, soma = 0, opcao = 0;

    do
    {
        printf("\ndigite o valor do numero:  ");
        scanf("%d", &n1);
        printf("\ndigite o valor do numero:  ");
        scanf("%d", &n2);
        soma = n1 + n2;

        printf("\nsoma: %d", soma);
        printf("\ndeseja fazer uma nova soma? 1- sim, 0- nao\n");
        scanf("%d", &sair);
    } while (opcao != 10);
}
