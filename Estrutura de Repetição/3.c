#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, impar, c = 0, soma = 1;

    printf("Digite um valor:");
    scanf("%d", &n);

    getchar();

    while (soma <= n)
    {
        c += 2;
        impar = c - 1;

        printf("\n%d", impar);

        soma++;
    }
}