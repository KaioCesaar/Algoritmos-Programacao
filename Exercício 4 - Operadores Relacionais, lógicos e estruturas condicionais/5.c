#include <stdio.h>
#include <math.h>

main()
{

    int numero;
    printf("Insira um numero inteiro: ");
    scanf("%d", &numero);

    if (numero == 5)
    {
        printf("numero igual a 5");
    }
    else if (numero == 200)
    {
        printf("numero igual a 200");
    }
    else if (numero == 400)
    {
        printf("numero igual a 400");
    }
    else if (numero >= 500 && numero <= 1000)
    {
        printf("intervalo entre 500 e 1000, ou se ela está fora dos escopos anteriores.");
    }
    else
    {
        printf("Nao se encaixa nas alternativas");
    }
    return 0;
}
