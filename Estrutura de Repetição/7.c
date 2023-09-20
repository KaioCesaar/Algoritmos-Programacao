#include <stdio.h>
#include <math.h>

int main()
{
    char cordocabelo, cordoolhos, sexo;
    int contadorGeral = 0, contadorEspecifico = 0, idade;
    float salario;

    do
    {
        contadorGeral++;
        fflush(stdin);
        printf("\n Informe seu sexo:  ");
        printf("\n m=Masculino e f=feminino ");
        printf("\n -----> ");
        scanf("%c", &sexo);
        if (sexo != 'm' && sexo != 'f')
        {
            printf("opcao invalida. Digite novamente");
        }

        fflush(stdin);

    } while (sexo != 'm' && sexo != 'f');

    do
    {
        contadorGeral++;
        fflush(stdin);
        printf("\n informe a cor do seu olho:  ");
        printf("\n a (azul), v(verde), c(castanho), p(preto) ");
        printf("\n -----> ");
        scanf("%c", &cordoolhos);

        fflush(stdin);

    } while (cordoolhos != 'a' && cordoolhos != 'v' && cordoolhos != 'c' && cordoolhos != 'p');
    do
    {
        contadorGeral++;
        fflush(stdin);
        printf("\n Informe a cor do seu cabelo:  ");
        printf("\n l (loiro), c(castanho), p(preto), r(ruivo) ");
        printf("\n -----> ");
        scanf("%c", &cordocabelo);
        if (cordocabelo != 'l' && cordocabelo != 'c' && cordocabelo != 'p' && cordocabelo != 'r')
        {
            printf("opcao invalida. Digite novamente");
        }
        fflush(stdin);

    } while (cordocabelo != 'l' && cordocabelo != 'c' && cordocabelo != 'p' && cordocabelo != 'r');
    do
    {
        contadorGeral++;
        fflush(stdin);
        printf("Informe sua idade:  ");
        printf("\n (10 e 100)");
        printf("\n -----> ");
        scanf("%d", &idade);

        if (idade != -1 && idade < 10 && idade > 100)
        {
            printf("opcao invalida. Digite novamente");
        }
        fflush(stdin);
    } while (idade != -1 && idade < 10 && idade > 100);
    do
    {
        printf("\n Informe seu salario:  ");
        printf("\n nao pode conter virgula");
        printf("\n -----> ");
        scanf("%f", &salario);
    } while (salario != 0 && salario < 0 && salario > 10000000000000000000000);

    printf("----- encerrado ----");
}
