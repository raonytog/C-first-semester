#include <stdio.h>
// entrada:
// 1 <= LINHA <= 100
// 1 <= COLUNA <= 100
// -32767 <= VALORES <= 32767

// saída:
// maior valor e coordenada xy

int main () {
    int linha = 0, coluna = 0, valor = 0;
    int maior = -50000, x = 0, y = 0;
    

    scanf("%d %d", &linha, &coluna);

    int i, j;
    for(i = 1; i <= linha; i++) {
        if ((linha > 100 || linha < 1) || (coluna > 100 || coluna < 1))
            break;
        for(j = 1; j <= coluna; j++) {
            scanf("%d", &valor);

            if (valor > 32767 || valor < -32767) {
                break;
            }

            if (valor > maior) {
            maior = valor;
            x = i;
            y = j;
            }
        }
    }
    printf("%d (%d, %d)", maior, x, y);
    return 0;
}