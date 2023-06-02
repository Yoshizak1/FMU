#include<stdio.h>
int main() {
    int num, par = 0, imp = 0;
    printf("digite 10 numeros inteiro\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &num);
        if(num % 2 == 0){
           par++;
        } else {
            imp++;
        }
    }
    printf("%d sao numeros pares e %d sao numeros impares", par, imp);
    return 0;
} 