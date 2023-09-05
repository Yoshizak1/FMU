#include <stdio.h>

int main() {
    int vetor_original[6]; 
    int vetor_reverso[6];  
    int i, j;
    printf("Digite 6 numeros inteiros:\n");
    for (i = 0; i < 6; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor_original[i]);
    }
    for (i = 0, j = 5; i < 6; i++, j--) {
        vetor_reverso[i] = vetor_original[j];
    }
    printf("O vetor original e:\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", vetor_original[i]);
    }
    printf("\nO vetor reverso e:\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", vetor_reverso[i]);
    }
    return 0;
}
