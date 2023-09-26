#include <stdio.h>
#include <math.h>

int main()
{
    int num[5], soma = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        soma += num[i];
        printf("\n%d %d", i, num[1]);
    }
    printf("%d", soma);

    return 0;
}
