#include <stdio.h>
#include <stdlib.h>

#define MAX 8

typedef struct {
    int idCartela;
    int venceu;
    int qtdLinhaColuna; // 1 a 7
    int mapaCartela[MAX][MAX];
    int marcado[MAX][MAX];
} tCartela;

typedef struct {
    tCartela cart[101];
    int qtdCartelas;
} tPartida;

int VenceuCartela(tCartela cartela);

tCartela LeCartela();
tCartela ResetaCartela();
tCartela MarcaCartela(tCartela cartela, int num);

tPartida LeCartelasPartida();
tPartida ResetaPartida(tPartida partida);

void JogaPartida(tPartida partida);
void ImprimeInvCartelasPartida(tPartida partida);
void ImprimeCartela(tCartela cartela);

int main(){
    tPartida partida;
    int qtdPartidas, i;

    partida = LeCartelasPartida();

    scanf ("%d", &qtdPartidas);
    for (i = 0; i < qtdPartidas; i++){
        if ( i!=0 ) printf("\n");
        printf("PARTIDA %d\n", i+1);
        partida = ResetaPartida(partida);
        JogaPartida(partida);
    }
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

void JogaPartida(tPartida partida) {
    int i, teveVencedor = 0, flagBreak = 0, num = 1000;
    int n = partida.qtdCartelas;
    while (num != -1) { // loop da leitura dos numeros
        scanf("%d%*c", &num);   if (num == -1) break;
        if (flagBreak) continue;
        else {
            for (i = 0; i < n; i++) { // marca o numero em cada cartela
                partida.cart[i] = MarcaCartela(partida.cart[i], num);
            }

            for (i = 0; i < n; i++) {
                if (VenceuCartela(partida.cart[i])) {
                    if (!teveVencedor) printf("COM VENCEDOR\n"); teveVencedor = 1;
                    ImprimeCartela(partida.cart[i]);
                    flagBreak = 1;
                }
            }
        }
    }

    if (!teveVencedor) printf("SEM VENCEDOR\n");
}

int VenceuCartela(tCartela cartela) {
    if (cartela.venceu) return 0;

    int i, j, lim = cartela.qtdLinhaColuna;
    for (i = 0; i < lim; i++) {
        for (j = 0; j < lim; j++) {
            if (cartela.marcado[i][j] != 1) return 0;
        }
    }

    return 1;
}

tCartela MarcaCartela(tCartela cartela, int num) {
    int i, j, lim = cartela.qtdLinhaColuna;
    for (i = 0; i < lim; i++) {
        for (j = 0; j < lim; j++) {
            if (cartela.mapaCartela[i][j] == num) {
                cartela.marcado[i][j] = 1;
            }
        }
    }

    return cartela;
}

tCartela ResetaCartela (tCartela cartela) {
    int i, j, lim = cartela.qtdLinhaColuna;
        for (i = 0; i < lim; i++) {
            for (j = 0; j < lim; j++) {
                cartela.marcado[i][j] = 0;
            }
        }

    cartela.venceu = 0;
    return cartela;
}

tPartida ResetaPartida(tPartida partida) {
    int i;
    for (i = 0; i < partida.qtdCartelas; i++) {
        partida.cart[i] = ResetaCartela(partida.cart[i]);
    }
    return partida;
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
    printf("\n");
}