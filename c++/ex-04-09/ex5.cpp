#include <stdio.h>

int main() {
    int x;
    printf("Qual o tamanho do vetor?"); 
    scanf("%d", &x);

    int valor[x], pares = 0, impares = 0;
    int i, par[x], impar[x];

    for (i = 0; i < x; i++) {
        printf("insira o %do valor:\n", i + 1);
        scanf("%d", &valor[i]);

        if (valor[i] % 2 == 0) {
            par[pares] = valor[i];
            pares++;
        } else {
            impar[impares] = valor[i];
            impares++;
        }
    }

    printf("\n Pares: ");
    for (i = 0; i < pares; i++) {
        printf("%d ", par[i]);
    }

    printf("\n Impares: ");
    for (i = 0; i < impares; i++) {
        printf("%d ", impar[i]);
    }

    return 0;
}
