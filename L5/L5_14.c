#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int codigo;
    char sobrenome[21];
    char nome[21];
    int nota;
    int idade;
    int impresso;
} tCandidato;

tCandidato LeCandidato() {
    tCandidato candidato;
    scanf("%*[^{]");
    scanf("%*[{ ]");
    scanf("%d", &candidato.codigo);
    scanf("%*[, ]");
    scanf("%[^,],", candidato.sobrenome);
    scanf("%*[ ]");
    scanf("%[^,],", candidato.nome);
    scanf("%d", &candidato.nota);
    scanf("%*[, ]");
    scanf("%d", &candidato.idade);
    scanf("%*[^\n]%*c");

    return candidato;
}

void ImprimeCandidato(tCandidato candidato) {
    printf("CAND(%d): %s %s, Nota:%d, Idade:%d\n",
           candidato.codigo, candidato.nome,
           candidato.sobrenome, candidato.nota, candidato.idade);
}

int ComparaString(char *str1, char *str2)  {   
    int i;
    for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) 
    {
        if (str1[i] != str2[i]) return 0;
    }

    return 1;   
} 

int ComparaSobrenome(tCandidato c1, tCandidato c2) {
    return ComparaString(c1.sobrenome, c2.sobrenome);
}

tCandidato DefineComoImpresso(tCandidato c) {
    c.impresso = 1;
    return c;
}

int VerificaSeJaFoiImpresso(tCandidato cand) {
    if (cand.impresso == 1) {
    return 1;
    } else return 0;
}

int main() {
    int qtdCand;
    scanf("%d", &qtdCand);
    tCandidato candidatos[qtdCand];

    int i, j, k;
    for (i = 0; i < qtdCand; i++) {
        candidatos[i] = LeCandidato();
    }

    tCandidato aux[qtdCand];

    for (i = 0; i < qtdCand; i++) {
        for (j = i+1; j < qtdCand; j++) {
            if (ComparaSobrenome(candidatos[i], candidatos[j])) {
                if (VerificaSeJaFoiImpresso(candidatos[i]) == 0) {
                    ImprimeCandidato(candidatos[i]);
                    candidatos[i] = DefineComoImpresso(candidatos[i]);
                }

                if (VerificaSeJaFoiImpresso(candidatos[j]) == 0) {
                    ImprimeCandidato(candidatos[j]);
                    candidatos[j] = DefineComoImpresso(candidatos[j]);
                }
            }
        }
    }

    return 0;
}