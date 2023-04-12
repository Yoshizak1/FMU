#include <stdio.h>

int main() {
    int quantidade;
    float preco_unitario, preco_total;
    
    printf("Informe a quantidade de macas: ");
    scanf("%d", &quantidade);
    
    if (quantidade >= 12) {
        preco_unitario = 1.0;
    } else {
        preco_unitario = 1.30;
    }
    
    preco_total = quantidade * preco_unitario;
    
    printf("O custo total das macas e de R$%.2f\n", preco_total);
    
    return 0;
}
