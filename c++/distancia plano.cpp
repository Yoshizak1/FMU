#include <stdio.h>
#include <math.h>

int main() {
float x1, y1;
float x2, y2;
scanf("%f %f", &x1, &y1);
scanf("%f %f", &x2, &y2);
float distancia = sqrtf(powf(x2 - x1, 2) + powf(y2 - y1, 2));
printf("%.4f\n", distancia);
return 0;
}



