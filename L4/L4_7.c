#include <stdio.h>

typedef struct {
    int x1;
    int y1;
    int x2;
    int y2;
} tReta;

tReta LerRetaXY() {
    tReta reta;
    scanf("%d %d %d %d", &reta.x1, &reta.y1, &reta.x2, &reta.y2);
    return reta;
}

int EhMesmoQuadrante(tReta xy) {
    if ( (xy.x1 < 0 && xy.x2 < 0) && (xy.y1 > 0 && xy.y2 > 0)   ||  //q1
         (xy.x1 > 0 && xy.x2 > 0) && (xy.y1 > 0 && xy.y2 > 0)   ||  //q2
         (xy.x1 > 0 && xy.x2 > 0) && (xy.y1 < 0 && xy.y2 < 0)   ||  //q3
         (xy.x1 < 0 && xy.x2 < 0) && (xy.y1 < 0 && xy.y2 < 0) ) {   //q4
            return 1;
    } else {
        return 0;
    }
    
}

int main() {
    int qtdReta = 0;
    scanf("%d", &qtdReta);

    int i = 0;
    tReta xy;
    for (i = 0; i < qtdReta; i++) {
        xy = LerRetaXY();
        if (EhMesmoQuadrante(xy) == 1) {
            printf("MESMO\n");
        } else {
            printf("DIFERENTE\n");
        }
    }
    return 0;
}