#include <stdio.h>
#include <stdlib.h>

int main()
{
    int precoF = 0, c = 0, validador = 10;

    do
    {
        printf("1 => ABACAXI R$5,00 a unidade \n2 => MACA R$1,00 a unidade \n3 => PERA R$4,00 a unidade \n0 => Finalizar a operacao\n");
        scanf("%d", &validador);

        if (validador == 1)
        {
            precoF += 5;
            c += 1;
        }
        else if (validador == 2)
        {
            precoF += 1;
            c += 1;
        }
        else if (validador == 3)
        {
            precoF += 4;
            c += 1;
        }

    } while (validador != 0);

    printf("O custo de todas as %d frutas e R$%d,00", c, precoF);

   
}