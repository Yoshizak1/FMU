#include <stdio.h>

int main() {
    float valores[6];
    int i, qtdPositivos = 0;
    float soma = 0, media;
    printf("Digite 6 valores: \n");
    for (i = 0; i < 6; i++) {
        scanf("%f", &valores[i]);

        if (valores[i] > 0) {
            qtdPositivos++;
            soma += valores[i];
        }
    }
    if (qtdPositivos > 0) {
        media = soma / qtdPositivos;
        printf("Quantidade de valores positivos: %d\n", qtdPositivos);
        printf("Media dos valores positivos: %.1f\n", media);
    } else {
        printf("Nenhum valor positivo foi digitado.\n");
    }
    return 0;
}
