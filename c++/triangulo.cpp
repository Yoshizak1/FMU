#include<stdio.h>

int main(){
    float a, b, c;
    printf("digite o valor do lado a");
    scanf("%f", &a);
    printf("digite o valor do lado b");
    scanf("%f", &b);
    printf("digite o valor do lado c");
    scanf("%f", &c);
    if(a==b && a==c){
        printf("triangulo equilatero");
    } else if(a==b || c==a || b==c) {
        printf("triangulo isoceles");
    } else {
        printf("triangulo escaleno");
    }
    return 0;
}
