#include <stdio.h>

int main()
{

    char nomes[3][20];

    printf("-----Infome os nomes-----");

    for (int i = 0; i < 3; i++)
    {
        printf("\ndigite um nome:  ");
        fgets(nomes[i], 20, stdin);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\nNome: %d %s", i, nomes[i]);
    }

    return 0;
}
