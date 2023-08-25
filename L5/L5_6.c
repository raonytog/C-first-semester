#include <stdio.h>

int DefineTam() {
    int tam;
    scanf("%d", &tam);
    return tam;
}

void PreencheVetor(int n[], int t) {
    int i;
    for (i = 0; i < t; i++) {
        if (scanf(" %d", &n[i]) == 1);
    }
}

void AnalisaVetor1NoVetor2(int l1[], int t1, int l2[], int t2) {
    int i = 0, ii = 0;
    int cont = 0;

    for (i = 0; i < t1; i++) {
        for (ii = 0; ii < t2; ii++) {
            if (l1[i] == l2[ii]) {
                cont++;
                break;  // o break breka se forem iguais mesmo
            }
        }
    }

    if (cont == t1) {
        printf("TODOS");
    } else if (cont > 0) {
        printf("PARCIAL");
    } else {
        printf("NENHUM");
    }
}

int main () {
    int tam1;
    tam1 = DefineTam();
    int L1[tam1];
    PreencheVetor(L1, tam1);
    
    int tam2;
    tam2 = DefineTam();
    int L2[tam2];
    PreencheVetor(L2, tam2);

    AnalisaVetor1NoVetor2(L1, tam1, L2, tam2);
    return 0;
}