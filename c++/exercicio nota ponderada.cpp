#include <stdio.h>

int main() {
    int n1, n2, n3;
    float mp; 
    printf("digite a primeira nota:");
    scanf("%d", &n1);
    printf("digite a segunda nota:");
    scanf("%d", &n2);
    printf("digite a terceira nota:");
    scanf("%d", &n3);
    mp = (n1 * 0.2) + (n2 * 0.3) + (n3 * 0.5);
    printf("a media ponderada e: %f", mp); 
    return 0;
}

