#include <stdio.h>

typedef struct {
    int x;
    int y;
} tPonto;

tPonto LerXY() {
    tPonto ponto;
    scanf("%d %d", &ponto.x, &ponto.y);
    return ponto;
}

void ImprimePonto(tPonto coordenadas) {
    printf("(%d,%d) ", coordenadas.x, coordenadas.y);
}

void ImprimeQuadrante(tPonto xy) {
  if (xy.x == 0 || xy.y == 0) {
        printf("0 ");
    } else if (xy.x > 0 && xy.y > 0) {
        printf("1 "); 
    } else if (xy.x < 0 && xy.y > 0) {
        printf("2 ");
    } else if (xy.x < 0 && xy.y < 0) {
        printf("3 ");
    } else if (xy.x > 0 && xy.y < 0) {
        printf("4 ");
    }
}

void ImprimePontoSimetrico(tPonto coordxy) {
    coordxy.x *= -1;
    coordxy.y *= -1;
    printf("(%d,%d) ", coordxy.x, coordxy.y);
}

void ImprimeQuadranteSimetrico(tPonto xy) {
    xy.x *= -1;
    xy.y *= -1;
    
    if (xy.x == 0 || xy.y == 0) {
        printf("0\n");
    } else if (xy.x > 0 && xy.y > 0) {
        printf("1\n"); 
    } else if (xy.x < 0 && xy.y > 0) {
        printf("2\n");
    } else if (xy.x < 0 && xy.y < 0) {
        printf("3\n");
    } else if (xy.x > 0 && xy.y < 0) {
        printf("4\n");
    }
}

void ImprimeQuadranteAndSimetrico(tPonto xy) {
    ImprimePonto(xy);
    ImprimeQuadrante(xy);
    ImprimePontoSimetrico(xy);
    ImprimeQuadranteSimetrico(xy);
}

int main () {
    int nLeituras = 0;
    scanf("%d", &nLeituras);

    int i = 0;
    tPonto xy;
    for (i = 0; i < nLeituras; i++) {
        xy = LerXY();
        ImprimeQuadranteAndSimetrico(xy);
    }
    return 0;
}