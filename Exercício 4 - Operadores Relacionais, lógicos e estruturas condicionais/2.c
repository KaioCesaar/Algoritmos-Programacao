#include<stdio.h>
#include<math.h>

main(){

int a,b,c,d,maior,menor;

printf("insira um numero inteiro A:");
scanf("%d",&a);

printf("insira um numero inteiro b:");
scanf("%d",&b);

printf("insira um numero inteiro c:");
scanf("%d",&c);

printf("insira um numero inteiro d:");
scanf("%d",&d);

if(a>b && a>c && a>d){
maior = a;

} 
if(b>a && b>c && b>d){
maior = b;

}
if(c>a && c>b && c>d){
maior = c;

}
 if (d>a && d>b && d>c){
maior = d;

} 
if(a<b && a<c && a<d){
menor = a;

} 
if(b<a && b<c && b<d){
menor = b;

}
if(c<a && c<b && c<d){
menor = c;

}
if(d<a && d<b && d<c){
menor = d;

}

printf("O maior valor:%d",maior);
printf("\nO menor valor:%d",menor);
return 0;
}