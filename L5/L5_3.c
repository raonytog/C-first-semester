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

void AnaliseEImprimeVetor(int n[], int t) {
    int i = 0; 
    int maior = -1;
    int dif = 0;

    if (t == 1) {
        printf("IMPOSSIVEL");
        return;
    }
    
    maior = abs(n[i] - n[i+1]); 
    for (i = 0; i < t-1; i++) {
        dif = abs(n[i] - n[i+1]);
        if (dif > maior) {
            maior = dif;
        }
    }

    printf(" ");
    for (i = 0; i < t-1; i++) {
        dif = abs(n[i] - n[i+1]);
        if (dif == maior) {
            printf("(%d %d) ", i, i+1);
        }
    }
    printf("\n");
}


int main () {
    int tam;
    tam = DefineTamVetor();
    int altura[tam];

    PreencheVetor(altura, tam);
    AnaliseEImprimeVetor(altura, tam);

    return 0;
}