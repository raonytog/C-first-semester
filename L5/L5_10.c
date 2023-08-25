#include <stdio.h>

void PreencheVetor(int vet[], int t) {
    int i;
    for (i = 0; i < t; i++) {
        scanf("%d", &vet[i]);
    }
}

void OrdenaCrescente(int vet[], int qtd) {
    int i, j, temp;

    for (i = 0; i < qtd; i++) {         
        for (j = i; j < qtd; j++) {     
            if (vet[i] > vet[j]) {
                temp = vet[i];
                vet[i] = vet[j];
                vet[j] = temp;
            }
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
    int n[tam];
    PreencheVetor(n, tam);

    OrdenaCrescente(n, tam);
    ImprimeDadosDoVetor(n, tam);

    return 0;
}