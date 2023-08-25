#include <stdio.h>

#define MAX 8

typedef struct {
    int idCartela;
    int qtdLinhaColuna; // 1 a 7
    int mapaCartela[MAX][MAX];
} tCartela;

tCartela LeCartela();
void ImprimeCartela(tCartela cartela);

int main() {
    tCartela cartela;
    cartela = LeCartela();
    ImprimeCartela(cartela);
    return 0;
}

tCartela LeCartela() {
    tCartela cartela;
    scanf("%d %d\n", &cartela.idCartela, &cartela.qtdLinhaColuna);
    int i, j, lim = cartela.qtdLinhaColuna;
    for (i = 0; i < lim; i++) {
        for (j = 0; j < lim; j++) {
            scanf("%d ", &cartela.mapaCartela[j][i]);
        }
    }

    return cartela;
}

void ImprimeCartela(tCartela cartela) {
    printf("ID:%d", cartela.idCartela);

    int i, j, lim = cartela.qtdLinhaColuna;
    for (i = 0; i < lim; i++) {
        printf("\n");
        for (j = 0; j < lim; j++) {
            printf("%03d", cartela.mapaCartela[i][j]);
            if (j != lim-1) printf("|");
        }
    }
}