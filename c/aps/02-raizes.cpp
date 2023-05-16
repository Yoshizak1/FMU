#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c;
    float delta, x1, x2;
    printf("Digite o coeficiente a: ");
    scanf("%f", &a);
    printf("Digite o coeficiente b: ");
    scanf("%f", &b);
    printf("Digite o coeficiente c: ");
    scanf("%f", &c);
    if (a == 0) {
        printf("Coeficiente 'a' deve ser diferente de zero.\n");
        return 0;
    }
    delta = (b * b) - (4 * a * c);
    if (delta < 0) {
        x1 = 0;
        x2 = 0;
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        x2 = x1;
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
    }
    printf("Raiz 1 (x1): %.2f\n", x1);
    printf("Raiz 2 (x2): %.2f\n", x2);
    return 0;
}
