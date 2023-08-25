#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int codigo;
    char sobrenome[21];
    char nome[21];
    int nota;
    int idade;
    char nomeCompleto[50];
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



 void OrdenaCrescente(tCandidato *vet, int qtd) {
    tCandidato aux;
    int i, j;
    for (i = 0; i < qtd; i++) {
        for (j = i+1; j < qtd; j++) {
            if (strcmp(vet[i].nome, vet[j].nome) > 0) {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
                
            } else if (strcmp(vet[i].nome, vet[j].nome) == 0) {
                if (strcmp(vet[i].sobrenome, vet[j].sobrenome) > 0) {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
                }
            }
        }
    }
}


int main() {
    int qtdCand;
    scanf("%d", &qtdCand);
    tCandidato candidatos[qtdCand];

    int i;
    for (i = 0; i < qtdCand; i++)
    {
        candidatos[i] = LeCandidato();
    }

    OrdenaCrescente(candidatos, qtdCand);

    for (i = 0; i < qtdCand; i++)
    {
        ImprimeCandidato(candidatos[i]);
    }
    return 0;
}
