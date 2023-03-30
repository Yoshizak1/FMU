#include<stdio.h>
#include<math.h>
float n,qua,cub,ra,cb;
int main(){
    printf("Digite um numero\n");
    scanf("%f",&n);
    qua=pow(n,2);
    cub=pow(n,3);
    ra=sqrt(n);
    cb=cbrt(n);
    printf("número ao quadrado %.2f\n",qua);
    printf("número ao cubo %.2f\n",cub);
    printf("raiz quadrada do numero %.2f\n",ra);
    printf("raiz cubica do numero %.2f\n",cb);
    return 0;
}

