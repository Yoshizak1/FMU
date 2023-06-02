#include<stdio.h>

int main(){
    float valor, total;
    int tipo;
    printf("qual o tipo de investimento\n");
    scanf("%d", &tipo);
    if(tipo == 1 || tipo == 2){
    	printf("digite o valor do investimento\n");
    	scanf("%f", &valor);
        if(tipo == 1){
            total = valor*1.03;
        } else {
            total = valor*1.04;
        }
        printf("o total e %f", total);
    } else {
        printf("tipo invalido");
    }
    return 0;
}
