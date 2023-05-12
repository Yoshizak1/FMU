#include<stdio.h>

int main(){
    int n1;
    printf("digite um numero\n");
    scanf("%d",&n1);

    switch(n1){
        case -10 ... 0:
        printf("o numero esta contido no intervalo -10 a 0\n");
        break;
        case 1 ... 11:
        printf("o numero esta contido no intervalo 1 a 11\n");
        break;
        case 12 ... 24:
        printf("o numero esta contido no intervalo 12 a 24\n");
        break;
        case 25:
        printf("numero igual a 25\n");
        break;
        default:
        printf("numero de fora do intervalo");
    }
    return 0;
}