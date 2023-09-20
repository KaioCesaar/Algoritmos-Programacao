#include <stdio.h>

main()
{

    int lanche;
    float valor;
    int quant;

    printf("----------MACPOBRE----------\n");
    printf("Informe o codigo do lanche:  ");
    scanf("%d", &lanche);
    printf("-----------------------------\n");
    printf("informe a quantidade: ");
    scanf("%d", &quant);
    switch (lanche)
    {

    case 100:
        printf("Cachorro quente");
        valor = quant * 10.10;
        printf("O valor que voce gastou foi: %.2f", valor);
        break;

    case 101:
        printf("Bauro Simples");
        valor = quant * 8.30;
        printf("O valor que voce gastou foi: %.2f", valor);
        break;

    case 102:
        printf("bauro com ovo");
        valor = quant * 8.50;
        printf("O valor que voce gastou foi: %.2f", valor);
        break;

    case 103:
        printf("Hamburger");
        valor = quant * 12.50;
        printf("O valor que voce gastou foi: %.2f", valor);
        break;

    case 104:
        printf("XBurguer");
        valor = quant * 13.25;
        printf("O valor que voce gastou foi: %.2f", valor);
        break;
        default:
        printf("Nao escolheu nenhum longe");
    }
}
