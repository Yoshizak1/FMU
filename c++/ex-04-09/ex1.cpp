#include <stdio.h>

int main() {
    int vetor[5];
    int i;

    printf("Digite 5 numeros inteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("Os elementos do vetor sao:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}


