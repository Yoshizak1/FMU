#include<stdio.h>

int main() {
    float n1,n2,med;
    int i,conta,contr;
    
    for(i = 0; i < 5; i++) {
        printf("digite a nota 1\n");
        scanf("%f",&n1);
        printf("digite a nota 2\n");
        scanf("%f",&n2);
        med=(n1+n2)/2;
        printf("media e:%.2f\n",med);
        if(med>=6) {
            conta++; // conta o numero de alunos aprovados
        } else {
            contr++; // conta o numero de alunos reprovados
        }
    }
    printf("ha %d alunos aprovados",conta);
    printf("ha %d alunos reprovados",contr);
    return 0;
}