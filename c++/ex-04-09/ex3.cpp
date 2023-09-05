#include <stdio.h>

int main() {
    int vetor[6];
    int i;
    printf("Digite 6 numeros inteiros:\n");
    for (i = 0; i < 6; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("Os elementos em ordem reversa sao:\n");
    for (i = 5; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    return 0;
}