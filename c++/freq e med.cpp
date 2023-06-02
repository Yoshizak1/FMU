#include<stdio.h>

int main(){
    float media, freq;
    printf("qual a sua media?\n");
    scanf("%f",&media);
    printf("qual a sua frequencia?\n");
    scanf("%f",&freq);
    if(media>=6 && freq>=75){
        printf("voce foi aprovado");
    } else {
        printf("voce foi reprovado");
    }
    return 0;
}
