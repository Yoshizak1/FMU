#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;
    printf("Digite os coeficientes a, b e c da equacao: ");
    scanf("%f %f %f", &a, &b, &c); 
    // Verificar se a é diferente de zero
    if (a == 0) {
        printf("Coeficiente 'a' nao pode ser zero.\n");
        return 0;
    }
    // Calcular o delta
    delta = (b * b) - (4 * a * c);
    // Verificar o valor do delta
    if (delta < 0) {
        printf("Nao existem raizes reais.\n");
        x1 = x2 = 0;
    } else if (delta == 0) {
        printf("Existe apenas uma raiz real.\n");
        x1 = x2 = -b / (2 * a);
    } else {
        printf("Existem duas raizes reais.\n");
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
    }
    // Imprimir as raizes
    printf("x1 = %.2f\n", x1);
    printf("x2 = %.2f\n", x2); 
    return 0;
}
