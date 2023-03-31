#include<stdio.h>

int idade;
float peso;
char genero,nome[40];

int main(){
	printf("Digite sua idade\n");
	scanf("%d",&idade);
	printf("\nDigite seu peso\n");
	scanf("%f",&peso);
	printf("\nDigite seu genero\n");
	scanf(" %c", &genero);
	printf("\nDigite seu nome\n");
	scanf(" %[^\n]", &nome);
	
	printf("\nIdade:%d,Peso:%2.2f,Genero:%c,Nome:%s\n",idade,peso,genero,nome);
	return 0;
}
