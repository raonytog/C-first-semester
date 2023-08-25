#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    int codigo;
    char sobrenome[21];
    char nome[21];
    int nota;
    int idade;
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
    
    // como organizar vetor:
    // se o sinal for <, organiza em ordem decrescente
    // se o sinal for >, organiza em ordem crescente
    for (i = 0; i < qtd; i++) {
        for (j = i + 1; j < qtd; j++) {
            if (vet[i].nota < vet[j].nota ||

                (vet[i].nota == vet[j].nota && 
                vet[i].idade > vet[j].idade) ||

                (vet[i].nota == vet[j].nota && 
                vet[i].idade == vet[j].idade && 
                vet[i].codigo > vet[j].codigo)) {

                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
}

int main() {
    int qtdCand, i = 0, j;
    scanf("%d%*c", &qtdCand);
    tCandidato candidatos[MAX];
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

