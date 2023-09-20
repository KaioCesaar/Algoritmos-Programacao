#include <stdio.h>

int main()
{

    int pedido;
    int cal;
    int calvegataria = 180, calabacaxi = 75, calcha = 20, calpeixe = 230, calsorvete = 110, calsucolaranja = 70,
        calfrango = 250, calmouse = 170, calsucomelao = 100, calcarne = 350, calmousechocolate = 200, calrefri = 65;

    printf("Informe o numero do pedido:  ");
    scanf("%d", &pedido);
    switch (pedido)
    {

    case 1:
        pedido = calvegataria + calabacaxi + calcha;
        printf("A quantidade total das calorias: %d", pedido);
        break;

    case 2:
        pedido = calpeixe + calsorvete + calsucolaranja;
        printf("A quantidade total das calorias: %d", pedido);
        break;

    case 3:
        pedido = calfrango + calmouse + calsucomelao;
        printf("A quantidade total das calorias: %d", pedido);
        break;

    case 4:
        pedido = calcarne + calmousechocolate + calrefri;
        printf("A quantidade total das calorias: %d", pedido);
        break;
    default:
    printf("valor do pedido fora do padrao");
    }
}
