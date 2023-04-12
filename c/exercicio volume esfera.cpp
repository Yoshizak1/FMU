#include <stdio.h>
#include <math.h>

int main() {
    int R;
    float volume; 
    scanf("%d", &R);
    volume = (4.0 * 3.14159 * (R * R * R)) / 3; 
    printf("VOLUME=%.3f\n", volume); 
    return 0;
}

