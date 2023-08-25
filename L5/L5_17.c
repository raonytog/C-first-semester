#include <stdio.h>

#define MAX 501

typedef struct {
    char palavra[MAX];
} tFrase;

int EhLetra(char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return 1;
    }
    return 0;
}

tFrase PassaPalavraParaStruct (char *str) {
    tFrase fr;
    int i = 0, j = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (EhLetra(str[i])) {
            fr.palavra[j] = str[i];
            j++;
        } else {
            fr.palavra[j] = ' ';
            j++;
        }
    }

    fr.palavra[j] = '\0';
    return fr;
}

void ImprimePalavra (tFrase f) {
    printf("%s ", f.palavra);
}

int main () {
    tFrase frase[MAX];

    int i = 0, cont = 0;
    char str[501];
    while ( (scanf("%s", str) ) == 1) {
        frase[i] = PassaPalavraParaStruct(str);
        i++;
        cont++;
    }

    int j;
    for (j = cont-1; j >= 0; j--) {
        ImprimePalavra(frase[j]);
    }

    return 0;
}