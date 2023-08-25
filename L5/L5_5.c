#include <stdio.h>
#include <stdlib.h>

int AtribuiValor() {
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

void PrimeiraOcorrenciaDeX(int n[], int t, int x) {
    int i = -1;
    for (i = 0; i < t; i++) {
        if (n[i] == x) {
            printf("RESP:%d", i);
            exit(1);
        }
    }

    printf("RESP:%d", t);
}

int main () {
    int x;
    x = AtribuiValor();

    int tam;
    tam = AtribuiValor();
    int num[tam];
    PreencheVetor(num, tam);

    PrimeiraOcorrenciaDeX(num, tam, x);
    return 0;
}
