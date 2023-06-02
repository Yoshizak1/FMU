#include<stdio.h>

int main(){
    int n1, n2, maior;
    printf("digite o primeiro numero\n");
    scanf("%d", &n1);
    printf("digite o segundo numero\n");
    scanf("%d", &n2);
    if(n1 != n2){
    	if(n1>n2){
    		printf("o numero um e maior que o numero dois");
		}else {
			printf("o numero dois e maior que o numero um");
		}
	printf("o numero maior e %d",maior);
    } else {
    	printf("nao e possivel concluir com numeros iguais");
	}
	
    return 0;
}
