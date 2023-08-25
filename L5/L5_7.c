#include <stdio.h>

int DefineTam() {
    int num;
    scanf("%d[^\n]", &num);
    return num;
}

void PreencheVetor(int n[], int tam) {
    int i = 0;
    for (i = 0; i < tam; i++) {
        scanf("%d", &n[i]);
    }
}
 
void AnaliseVetorEImprimeRazao(int n[], int t) {
    PreencheVetor(n, t);
    int diff = n[1]-n[0];

    if (t < 2) {
        printf("NAO");
        exit(1);
    }

    int i;
    for (i=1; i < t; i++) {
        if (diff != n[i] - n[i-1]) {
            printf("NAO");
            exit(1);
        }
    }
    
    printf("RESP:%d", n[1]-n[0]);
}

int main () {
    int tam;
    tam = DefineTam();
    int num[tam];

    AnaliseVetorEImprimeRazao(num, tam);
    return 0;
}