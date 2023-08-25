#include <stdio.h>

#define MAX 8

typedef struct {
    int idCartela;
    int qtdLinhaColuna; // 1 a 7
    int mapaCartela[MAX][MAX];
} tCartela;

typedef struct {
    tCartela cart[101];
    int qtdCartelas;
} tPartida;


tCartela LeCartela();
tPartida LeCartelasPartida();
void ImprimeInvCartelasPartida(tPartida partida);
void ImprimeCartela(tCartela cartela);

int main(){
    tPartida partida;
    partida = LeCartelasPartida();
    ImprimeInvCartelasPartida(partida);
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

tPartida LeCartelasPartida() {
    tPartida partida;
    int nPartidas, i = 0;

    scanf("%d", &partida.qtdCartelas);
    for (i = 0; i < partida.qtdCartelas; i++) {
        partida.cart[i] = LeCartela();
    }

    return partida;
}

void ImprimeInvCartelasPartida(tPartida partida) {
    int i;
    for (i = partida.qtdCartelas-1; i >= 0; i--) {
        ImprimeCartela(partida.cart[i]);
        printf("\n");
    }
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