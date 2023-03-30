#include<stdio.h>
#include<math.h>
float c,fh;
int main(){
    printf("digite o numero do fahrenheit\n");
    scanf("%f",&fh);
    c=((fh-32)*5)/9;
    printf("a temperatura em celcius e %.2f",c);
    return 0;
}
