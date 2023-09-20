#include <stdio.h>
#include <math.h>

main()
{

    int not1, not2, not3, peso1 = 1, peso2 = 2;
    float media;
    printf("insira aqui sua primeira nota: ");
    scanf("%d", &not1);
    printf("insira aqui sua segunda nota: ");
    scanf("%d", &not2);
    printf("insira aqui sua terceira nota: ");
    scanf("%d", &not3);

    media = ((not1 * peso1) + (not2 * peso2) + (not3 * peso2)) / (peso1 + peso1 + peso2);

    printf("media ponderada: %2.f", media);
    return 0;
}

