#include<stdio.h>

int main(){
	float kmRodado, valor;
	printf("digite o km rodado:");
	scanf("%f", &kmRodado);
	valor=(kmRodado*3) + 4.9;
	printf("A quantidade de km rodados foi de: %.2f\n", kmRodado);
	printf("O valor da corrida e de:%.2f\n", valor);
	return 0;
	
}
