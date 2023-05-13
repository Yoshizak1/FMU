#include<stdio.h>
#include<ctype.h>

int main(){
    char letra;
    printf("digite uma letra\n");
    scanf("%c",&letra);
    letra=tolower(letra);
    if(isalpha(letra)){
        switch(letra){
            case'a':
            case'e':
            case'i':
            case'o':
            case'u':
            printf("a letra %c e uma vogal\n",letra);
            break;
            default:
            printf("A letra %c e uma consoante\n",letra);
        }
    } else {
        printf("nao e uma letra");
    }
    return 0;
}