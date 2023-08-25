#include <stdio.h>

int DefineTamVetor(int t) {
    scanf("%d", &t);
    return t;
}

void PreencheVetor(int n[], int t) {
    int i;
    for (i = 0; i < t; i++) {
        scanf("%d", &n[i]);
    }
}

void OrdenaVetorCrescente(int n[], int t) {
    int i, j, aux;
    for (i = 0; i < t; i++) {
        for (j = i; j < t; j++) {
            if (n[i] > n[j]) {
                aux = n[i];
                n[i] = n[j];
                n[j] = aux;
            }
        }
    }
}

void JuntaVetores(int tam1, int tam2, int t, int n1[tam1], int n2[tam2], int n[]) {
    int i = 0, j = 0, cont1 = 0, cont2 = 0, flag = 0;

    for(i = 0; i < t; i++) {
        if (j < tam1) {
            n[i] = n1[j];
            j++;
        } else {
            if (flag == 0) {
                j = 0;
                flag++;
            }

            n[i] = n2[j];
        }
    }
}

void ImprimeAB(int tam1, int tam2, int t, int n1[], int n2[], int n[]) {
    int i, j, k;
    i = j = k = 0;

    while (k < t) {
        if (i < tam1 && (j >= tam2 || n1[i] <= n2[j])) {
            printf("A");
            n[k++] = n1[i++];
        } else {
            printf("B");
            n[k++] = n2[j++];
        }
    }
}

int main () {
    int tam1;
    tam1 = DefineTamVetor(tam1);
    int num1[tam1];
    PreencheVetor(num1, tam1);
    OrdenaVetorCrescente(num1, tam1);

    int tam2;
    tam2 = DefineTamVetor(tam2);
    int num2[tam2];
    PreencheVetor(num2, tam2);
    OrdenaVetorCrescente(num2, tam2);

    int t = tam1 + tam2;
    int n[t]; 
    JuntaVetores(tam1, tam2, t, num1, num2, n);
    OrdenaVetorCrescente(n, t);
    ImprimeAB(tam1, tam2, t, num1, num2, n);

    return 0;
}