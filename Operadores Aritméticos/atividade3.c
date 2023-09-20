#include<stdio.h>
#include<math.h>
int main()
{
   
float mult;
float base, altura;

printf("digite o valor da medida(base e altura) - ");
scanf("\n %f %f", &base, &altura);

mult = base * altura;

printf("Area em metros quadrados - %2.f",mult);


return 0;
}
