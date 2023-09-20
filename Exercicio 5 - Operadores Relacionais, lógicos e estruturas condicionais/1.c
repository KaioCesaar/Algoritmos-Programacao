#include <stdio.h>
main()
{

  int num;
  printf("insira aqui um numero inteiro: ");
  scanf("%d", &num);

  if (num % 2 == 0)
  {
    printf("numero par");
  }
  else
  {
    printf("numero impar");
  }
  return 0;
}