#include <stdio.h>

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("O tamanho do vetor deve ser maior que zero.\n");
        return 1;
    }
    int vetor[n];
    int i;
    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < n; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("Os elementos do vetor sao:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}