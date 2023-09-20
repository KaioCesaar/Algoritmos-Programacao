#include<stdio.h>
#include<math.h>

main(){

float num1;


printf("digite um valor:"); 
scanf("%f",&num1);

if(num1 < 0 ){
num1 *= num1;

 printf("%f",num1);

} else if (num1 >= num1)
{
    num1 = sqrt(num1);
    printf("%f",num1);
}





}