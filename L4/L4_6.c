#include <stdio.h>
#include <math.h>

typedef struct {
   double x;
   double y;
} tPonto;

typedef struct {
   tPonto pi;
   tPonto pf;
} tReta;

tPonto LePonto() {
    tPonto ponto;
    scanf("%lf %lf", &ponto.x, &ponto.y);
    return ponto;
}

tReta LeReta() {
    tReta reta;
    reta.pi = LePonto();
    reta.pf = LePonto();
    return reta;
}

double Distancia(tPonto xy1, tPonto xy2) {
    double dx = xy2.x - xy1.x;
    double dy = xy2.y - xy1.y;
    return sqrt(dx*dx + dy*dy);
}

void VerificaPosicaoDoPonto (tPonto p, tReta r) {
    double distInicio = Distancia(p, r.pi);
    double distFim = Distancia(p, r.pf);
    
    if (distInicio < distFim) {
        printf("INICIO\n");
    } else if (distInicio > distFim) {
        printf("FIM\n");
    } else {
        printf("EQUIDISTANTE\n");
    }
}

int main () {
    int n = 0;
    scanf("%d", &n);

    tPonto ponto;
    tReta reta;

    int i = 0;
    for (i = 0; i < n; i++) {
        ponto = LePonto();
        reta = LeReta();
        VerificaPosicaoDoPonto(ponto, reta);
    }


    return 0;
}