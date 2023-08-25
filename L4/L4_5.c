#include <stdio.h>
#include <math.h>

typedef struct {
   double x;
   double y;
} tReta;


tReta LeCoordenadas () {
    tReta xy;

    int flag = 0;
    scanf("%lf %lf", &xy.x, &xy.y);
    return xy;
}

double ComparaCoordenadas(tReta xy1, tReta xy2) {
    double dx = xy2.x - xy1.x;
    double dy = xy2.y - xy1.y;
    return sqrt(dx*dx + dy*dy);
}

void ImprimeCoordenadasDistanciadas(double dist) {
    printf("%.2lf\n", dist);
}

int main () {
    int n = 0;
    scanf("%d", &n);

    tReta anterior;
    anterior = LeCoordenadas();
    printf("-\n");

    tReta atual;
    int i = 0;
    double distancia;
    for (i = 1; i < n; i++) {
        atual = LeCoordenadas();
        distancia = ComparaCoordenadas(anterior, atual);
        ImprimeCoordenadasDistanciadas(distancia);
        anterior = atual;
    }

    return 0;
}