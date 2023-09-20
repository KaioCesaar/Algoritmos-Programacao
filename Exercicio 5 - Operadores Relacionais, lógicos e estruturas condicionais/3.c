#include <stdio.h>
#include <math.h>

main()
{

   int idade, temp ;
    printf("insira aqui sua idade: ");
    scanf("%d",&idade);
    printf("insira o tempo de servico em anos: ");
    scanf("%d",&temp);
    if(idade>=65 || temp>=30){
        printf("pode se aposentar");
    }else if(idade>=60 && temp>=25){
        printf("pode se aposentar! ");
    }else{printf("nao pode se aposentar ");}
    return 0;
}