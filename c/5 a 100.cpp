#include<stdio.h>

int main(){
    float n;
    printf("digite um numero:\n");
    scanf("%f",&n);
    if(n>=5 && n<=100){
        printf("numero contido no intervalo\n");
    } else {
        printf("o numero esta fora do intervalo\n");
    }
    return 0;
}
