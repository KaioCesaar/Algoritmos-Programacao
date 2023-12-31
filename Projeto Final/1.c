#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct veiculo
{
    char prop[50];
    char combustivel[30];
    char modelo[50];
    char cor[50];
    int chassi;
    int ano;
    char placa[10];
    struct veiculo *prox;
} veiculo;

veiculo *novoVeiculo()
{
    veiculo *novoVeic = (veiculo *)malloc(sizeof(veiculo));

    if (novoVeic == NULL)
    {
        printf("Não há memória suficiente...");
        exit(EXIT_FAILURE);
    }

    novoVeic->prox = NULL;

    return novoVeic;
}

veiculo *cadastrarVeiculo(veiculo *aux)
{
    veiculo *novoVeic = (veiculo *)malloc(sizeof(veiculo));

    printf("\nDigite o nome do proprietário do veiculo: ");
    scanf("%s", &novoVeic->prop);

    printf("Qual o tipo de combustível? Álcool/Diesel/Gasolina ");
    scanf("%s", &novoVeic->combustivel);

    printf("Digite o modelo do veículo: ");
    scanf("%s", &novoVeic->modelo);

    printf("Digite a cor do veículo: ");
    scanf("%s", &novoVeic->cor);

    printf("Digite o número do chassi: ");
    scanf("%d", &novoVeic->chassi);

    printf("Digite o ano de fabricação: ");
    scanf("%d", &novoVeic->ano);

    printf("Digite a placa do veículo: [abc1234] ");
    scanf("%s", &novoVeic->placa);
    while (getchar() != '\n')
        ;

    if (aux == NULL)
    {
        aux = novoVeic;
    }
    else
    {
        veiculo *atual = aux;

        while (atual->prox != NULL)
        {
            atual = atual->prox;
        }

        atual->prox = novoVeic;
    }

    return aux;
}

void listarPropData(veiculo *aux)
{
    veiculo *atual = aux;
    int tes = 0;

    if (atual == NULL)
    {
        printf("Nenhum veículo registrado...");
        return;
    }
    else
    {
        while (atual != NULL)
        {

            if (atual->ano >= 2010 && strcmp(atual->combustivel, "diesel") == 0)
            {

                printf("\n");
                printf("Proprietário: %s", atual->prop);
                printf("\n");
                tes++;
            }
            atual = atual->prox;
        }

        if (tes == 0)
        {

            printf("\n");
            printf("Não foi encontrado nenhum veículo com os filtros em questão...");
            printf("\n");
        }
    }
}

void listarPlacas(veiculo *aux)
{
    veiculo *atual = aux;
    int tes = 0;

    while (atual != NULL)
    {
        char primeiraLetra = atual->placa[0];
        int ultimoNum = atual->placa[6];

        if (primeiraLetra == 'J' || primeiraLetra == 'j')
        {
            if (ultimoNum == '0' || ultimoNum == '2' || ultimoNum == '4' || ultimoNum == '7')
            {

                printf("\n");
                printf("Proprietário: %s", atual->prop);
                printf("\n");
                printf("Placa: %s", atual->placa);
                printf("\n");

                tes++;
            }
        }

        atual = atual->prox;
    }

    if (tes == 0)
    {

        printf("\n");
        printf("Não foi encontrado nenhum veículo com os filtros em questão...");
        printf("\n");
    }
}

void listarModelos(veiculo *aux)
{
    veiculo *atual = aux;
    int tes = 0;

    while (atual != NULL)
    {
        char segundaLetra = atual->placa[1];
        int somaNum = atual->placa[3] + atual->placa[4] + atual->placa[5] + atual->placa[6];

        if (
            (segundaLetra == 'A' || segundaLetra == 'a') || (segundaLetra == 'E' || segundaLetra == 'e') || (segundaLetra == 'I' || segundaLetra == 'i') || (segundaLetra == 'O' || segundaLetra == 'o') || (segundaLetra == 'U' || segundaLetra == 'u'))
        {
            if (somaNum % 2 == 0)
            {

                printf("\n");
                printf("Modelo: %s", atual->modelo);
                printf("\n");
                printf("Cor: %s", atual->cor);
                printf("\n");

                tes++;
            }
        }

        atual = atual->prox;
    }

    if (tes == 0)
    {

        printf("\n");
        printf("Não foi encontrado nenhum veículo com os filtros em questão...");
        printf("\n");
    }
}

void realizarTroca(veiculo *aux, int chassi)
{
    veiculo *atual = aux;
    int tes = 0;

    while (atual != NULL)
    {
        if (atual->chassi == chassi)
        {
            char n1 = atual->placa[3];
            char n2 = atual->placa[4];
            char n3 = atual->placa[5];
            char n4 = atual->placa[6];

            if (n1 != '0' && n2 != '0' & n3 != '0' & n4 != '0')
            {
                printf("Digite o nome do novo proprietário: ");
                scanf("%s", &atual->prop);
            }
            else
            {

                printf("\n");
                printf("Veículo em questão possui dígito 0...");
                printf("\n");
            }

            tes++;
        }

        atual = atual->prox;
    }

    if (tes == 0)
    {

        printf("\n");
        printf("Não foi encontrado nenhum veículo com os filtros em questão...");
        printf("\n");
    }
}

veiculo *listarVeiculos(veiculo *aux)
{
    veiculo *atual = aux;

    if (atual == NULL)
    {
        printf("Não há veículos na lista");
        return;
    }
    else
    {
        while (atual != NULL)
        {

            printf("\n");
            printf("Proprietário: %s", atual->prop);
            printf("\n");
            printf("Combustível: %s", atual->combustivel);
            printf("\n");
            printf("Modelo: %s", atual->modelo);
            printf("\n");
            printf("Cor: %s", atual->cor);
            printf("\n");
            printf("Chassi: %d", atual->chassi);
            printf("\n");
            printf("Ano: %d", atual->ano);
            printf("\n");
            printf("Placa: %s", atual->placa);
            printf("\n");

            atual = atual->prox;
        }
    }
}

int main()
{

    int opcao, chassi;
    veiculo *aux = NULL;

    do
    {

        printf("\n1 - Registrar novo veículo");
        printf("\n2 - Enumerar donos de automóveis fabricados a partir de 2010, os quais sejam impulsionados por motores a diesel");
        printf("\n3 - Relacionar placas  iniciadas pela letra J e finalizadas com 0, 2, 4 ou 7, juntamente com os respectivos donos");
        printf("\n4 - Enumerar o tipo e a tonalidade dos carros cujas matrículas apresentam uma vogal como segunda letra, e cuja soma dos valores numéricos resulta em um número par");
        printf("\n5 - Efetuar a transferência de posse com base no número de chassi, destinada aos veículos cujas placas não contenham qualquer dígito zero");
        printf("\n6 - Listar todos os veículos registrados");
        printf("\n0 - Sair");
        printf("\n");

        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            aux = cadastrarVeiculo(aux);
            break;

        case 2:
            listarPropData(aux);
            break;

        case 3:
            listarPlacas(aux);
            break;

        case 4:
            listarModelos(aux);
            break;

        case 5:
            printf("Digite o número do chassi: ");
            scanf("%d", &chassi);

            realizarTroca(aux, chassi);
            break;

        case 6:
            listarVeiculos(aux);
            break;
        }

    } while (opcao != 0);

    return 0;
}