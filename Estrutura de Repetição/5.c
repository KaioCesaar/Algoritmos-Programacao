#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c = 0, soma = 0, final = 100;

    for (c = 0; c <= final; c += 2)
    {
        printf("\n%d", c);
        soma += c;
    }

    printf("%d", soma);
}