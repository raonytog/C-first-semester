#include <stdio.h>

int DefineTamVetor() {
    int tam;
    scanf("%d[^\n]", &tam);
    return tam;
}

void PreencheVetor(int n[], int t) {
    int i = 0;
    for (i = 0; i < t; i++) {
        if (scanf("%d[^\n]", &n[i]) == 1);
    }
}


void AnaliseOrdemVetor(int n[], int t) {
    int i = 0, contCrescente = 0, contDecrescente = 0, tudoIgual = 0;

    for (i = 0; i < t - 1; i++) {
        if (n[i] == n[i + 1]) {
            tudoIgual++;
        } else if (n[i] > n[i + 1]) {
            contDecrescente++;
            while (i < t - 1 && n[i] > n[i + 1]) {
                i++;
            }
        } else if (n[i] < n[i + 1]) {
            contCrescente++;
        }
    }

    if (tudoIgual == t - 1) {
        printf("CRESCENTE&DECRESCENTE");
    } else if (contCrescente == t - 1) {
        printf("CRESCENTE");
    } else if (contDecrescente == t - 1) {
        printf("DECRESCENTE");
    } else {
        printf("DESORDENADO");
    }
}


int main () {
    int tam;
    tam = DefineTamVetor();
    int notas[tam];
    
    PreencheVetor(notas, tam);
    AnaliseOrdemVetor(notas, tam);
    return 0;
}