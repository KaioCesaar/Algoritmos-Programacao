#include<stdio.h>
#include<math.h>

main(){

int num[6];

for(int i = 0; i < 6; i++){

    printf("Digite 6 valores: ");
    scanf("%d", &num[i]);
}
for(int i = 0; i < 6; i++){
    printf("\n%d %d", i, num[i]);
}

}