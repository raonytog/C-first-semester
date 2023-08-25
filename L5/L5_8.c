#include <stdio.h>

void PreencheVetor(int n[], int t) {
    int i;
    for (i = 0; i < t; i++) {
        scanf("%d", &n[i]);
    }
}

void TrocaParEImpar(int vet[], int qtd) {
    int i, j;
    int temp;

    for (i = 0; i < qtd; i++) {
        if (i % 2 == 0 && i+1 < qtd) {
                temp = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = temp;
        }
    }
}

void ImprimeDadosDoVetor(int vet[], int qtd) {
    printf("{");
    int cont = 0;
    
    int i;
    for (i = 0; i < qtd; i++) {
        printf("%d", vet[i]);
        cont++;
        if (cont != qtd) {
            printf(", ");
        }
    }
    printf("}");
}

int main () {
    int tam;
    scanf("%d", &tam);
    int num[tam];
    PreencheVetor(num, tam);

    TrocaParEImpar(num, tam);
    ImprimeDadosDoVetor(num, tam);
    return 0;
}