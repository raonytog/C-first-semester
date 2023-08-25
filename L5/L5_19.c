#include <stdio.h>

void PrintaMatriz(int l, int c, int m[l][c]) {
    int i, j;
      for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            printf("%d", m[i][j]);
        }
        printf("\n");
    }
    
}

void LeMatriz(int l, int c, int m[l][c]) {
    int i, j;
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            scanf("%1d", &m[i][j]);
        }
    }
}

void CopiaImgParaImgTemp(int l, int c, int img[l][c], int imgTemp[l][c]) {
    int i, j;
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            imgTemp[i][j] = img[i][j];
        }
    }
}

int ContaQtdDeTerra(int l, int c, int img[l][c]) {
    int cont = 0;
    int i, j;
     for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            if (img[i][j] == 0) {
                cont++;
            }
        }
    }
    return cont;
}

void AvancaMareEmXHoras (int l, int c, int img[l][c], int imgTemp[l][c], int hora) {
    int horasDepois = 0;
    int i, j;

    while (horasDepois < hora) {
        for (i = 0; i < l; i++) {
            for (j = 0; j < c; j++) {
                if (img[i][j] == 0) {
                    if ( (i+1 <  l && img[i+1][j] == 1) ||
                         (i-1 >= 0 && img[i-1][j] == 1) ||
                         (j+1 <  c && img[i][j+1] == 1) ||
                         (j-1 >= 0 && img[i][j-1] == 1) ) {
                         imgTemp[i][j] = 2;
                    }
                }
            }

        }
        
        for (i = 0; i < l; i++) {
            for (j = 0; j < c; j++) {
                if (imgTemp[i][j] == 2) {
                        imgTemp[i][j] = 1;
                }
            }
        }

         for (i = 0; i < l; i++) {
            for (j = 0; j < c; j++) {
                img[i][j] = imgTemp[i][j];
            }
         }

        horasDepois++;
    }
    printf("\n");
    //só p eu ver oq ta saindo
    //PrintaMatriz(l, c, imgTemp);
}

void LeEInterpretaImg(int l, int c, int img[l][c], int hora) {
    int terraAntes, terraDepois;

    LeMatriz(l, c, img);

    int imgTemp[l][c];
    CopiaImgParaImgTemp(l, c, img, imgTemp);
    terraAntes = ContaQtdDeTerra(l, c, img);

    AvancaMareEmXHoras(l, c, img, imgTemp, hora);
    terraDepois = ContaQtdDeTerra(l, c, imgTemp);

    printf("%d %d", terraAntes, terraDepois);
}


int main () {
    int horas; // heI[0, 8];
    scanf("%d", &horas);
    
    int w, h; // largura e altura eI[0, 600];
    scanf("\n%d %d%*c", &h, &w);
    int imagem[w][h];

    LeEInterpretaImg(w, h, imagem, horas);

    return 0;
}