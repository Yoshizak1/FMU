#include<stdio.h>

int main(){
    int idade;
    float tempo;
    printf("qual a sua idade?\n");
    scanf("%d", &idade);
    printf("qual o seu tempo de trabalho?\n");
    scanf("%f", &tempo);
    if(idade>=65 || tempo>=30 || idade>=60 && tempo>=25){
        printf("voce esta qualificado para se aposentar");	
    } else {
        printf("voce nao esta qualificado para se aposentar");
    }
    return 0;
}
