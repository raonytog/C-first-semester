#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, perimetro;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    perimetro = 2 * (fabs(x2 - x1) + fabs(y2 - y1));
    printf("%.2f", perimetro);
    return 0;
} // blanck line test
