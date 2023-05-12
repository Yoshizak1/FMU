#include<stdio.h>

int main(){
    float n1,n2;
    char op;

    printf("*****CALCULADORA*****");
    printf("\nn1: ");
    scanf("%f",&n1);
    printf("Operacao + - * /");
    scanf(" %c",&op);
    printf("n2: ");
    scanf("%f",&n2);
    switch(op){
       case '+':
       printf("soma e: %.2f\n",n1+n2);
       break; 
       case '-':
       printf("soma e: %.2f\n",n1-n2);
       break; 
       case '*':
       printf("soma e: %.2f\n",n1*n2);
       break; 
       case '/':
       if(n2!=0){
        printf("soma e: %.2f\n",n1/n2);
       } else {
        printf("divisao impossivel");
       }
       break; 
       default:
       printf("error\n");
    }
    return 0;
}