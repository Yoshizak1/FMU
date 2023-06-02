#include<stdio.h>

int main() {
    int f;
    float c;
    for(f = 50; f < 65; f++) {
        c = 0.56*(f-32);
        printf("%d F -- %.2f C\n",f,c);
    }
    return 0;
}