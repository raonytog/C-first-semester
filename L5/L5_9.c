#include <stdio.h>

int DefineTam() {
    int num;
    scanf("%d[^\n]", &num);
    return num;
}

void PreencheVetorEPrintaOInverso(int n[], int tam) {
    int i = 0;
    for (i = 0; i < tam; i++) {
        scanf("%d", &n[i]);
    }

    printf("{");
    int cont = 0;
    for (i = tam-1; i > -1; i--) {
        printf("%d", n[i]);
        cont++;
        if (cont < tam) printf(", ");
    }
    printf("}");
}

int main () {
     int tam;
    tam = DefineTam();
    int num[tam];
    PreencheVetorEPrintaOInverso(num, tam);




}