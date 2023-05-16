#include <stdio.h>

int main() {
    int idade, anos, meses, dias, resto_dias;

    printf("Digite a idade\n");
    scanf("%d", &idade);

    anos = idade / 365;
    resto_dias = idade % 365;

    meses = resto_dias / 30;
    dias = resto_dias % 30;

    printf("A idade e %d anos, %d meses e %d dias.\n", anos, meses, dias);

    return 0;
}