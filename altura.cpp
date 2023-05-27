#include<stdio.h>

int main() {
    int i,cont;
    float alt;

    for(i = 0; i < 10; i++) {
        printf("digite sua altura\n");
        scanf("%f",&alt);
        if(alt >= 1.60) {
            cont++;
        }
    }
    printf("ha %d pessoa com 1.60 ou mais de altura\n",cont);
    return 0;
}