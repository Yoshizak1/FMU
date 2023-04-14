#include <stdio.h>

int main() {
    int int1, int2;
    float real1, res1, res2, res3;
    printf("informe o primeiro numero inteiro:");
    scanf("%d", &int1);
    printf("informe o segundo numero inteiro:");
    scanf("%d", &int2);
    printf("informe um numero real:");
    scanf("%f", &real1);
    res1 = (2*int1) * (int2/2); 
    res2 = (3*int1) + real1; 
    res3 = real1*real1*real1; 
    printf("\n o produto do dobro do primeiro com metade do segundo e: %.2f",res1);
    printf("\n a soma do triplo do primeiro com o terceiro e: %.2f",res2);
    printf("\n o terceiro elevado ao cubo e: %.2f",res3);
    return 0;
}

