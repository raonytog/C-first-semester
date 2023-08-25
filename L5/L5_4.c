#include <stdio.h>
#include <stdlib.h>

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

int IntervaloVetor() {
    int num;
    scanf(" %d", &num);

    return num;
}

void AnalisaEImprimeVetor(int n[], int t, int a, int b) {
    int i = 0;
    int contDentro = 0;
    int contFora = 0;

    for (i = 0; i < t; i++) {
        if (a <= n[i] && n[i] <= b) {
            contDentro++;
        } else {
            contFora++;
        }
    }

    printf("%d %d", contDentro, contFora);
}

int main () {
    int tam;
    int a, b;

    tam = DefineTamVetor();
    int num[tam];

    PreencheVetor(num, tam);

    a = IntervaloVetor();
    b = IntervaloVetor();
    AnalisaEImprimeVetor(num, tam, a, b);

    return 0;
}