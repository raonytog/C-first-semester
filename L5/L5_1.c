#include <stdio.h>
#include <math.h>

int DefineTamanhoVetorEQtdDeParticipantes() {
    int n;
    scanf("%d[^\n]", &n);

    return n;
}

void LeNotasParaVetor(int participantes[], int tam) {
    int i = 0;
    for (i = 0; i < tam; i++) {
        if (scanf("%d[^\n]", &participantes[i]) == 1) {
        }
    }
}

int EhMenorNota(int p[], int t) {
    int i;
    int menor = 101;
    for (i = 0; i < t; i++) {
        if (p[i] < menor) {
            menor = p[i];
        }
    }
    return menor;
}

int EhMaiorNota(int p[], int t) {
    int i;
    int maior = -1;
    for (i = 0; i < t; i++) {
        if (p[i] > maior) {
            maior = p[i];
        }
    }
    return maior;
}

float MediaDeNotas(int p[], int t) {
    int i;
    float soma = 0;
    float media = 0;
    for (i = 0; i < t; i++) {
        soma += p[i];
    }
    return soma/t;
}

float StdNotas(int p[], int t) {
    int i = 0;  float somatorio = 0;
    float media = MediaDeNotas(p, t);
    for (i = 0; i < t; i++) {
        somatorio += pow( (p[i] - media) ,2);
    }
    somatorio /= t;
    somatorio = sqrt(somatorio);
    return somatorio;
}

int QtdAlunosAcimaMedia(int p[], int t) {
    float media = MediaDeNotas(p, t);
    int i, cont = 0;
    for(i = 0; i < t; i++) {
        if (p[i] > media) {
            cont++;
        }
    }
    return cont;
}

int QtdAlunosReprovados(int p[], int t) {
    int i = 0, cont = 0;
    for (i = 0; i < t; i++) {
        if (p[i] < 70) {
            cont++;
        }
    }
    return cont;
}

void ImprimeStatus(int menor, int maior, float med, float std, int acimaMed, int rep) {
    printf("MENOR:%d, MAIOR:%d, MEDIA:%.2f, STD:%.2f, ACIMA_MEDIA_CONC:%d, REPROV:%d", 
            menor, maior, med, std, acimaMed, rep);
}

int main () {

    int tam = DefineTamanhoVetorEQtdDeParticipantes(); 
    int nParticipantes[tam];
    LeNotasParaVetor(nParticipantes, tam);

    int menor = EhMenorNota(nParticipantes, tam);
    int maior = EhMaiorNota(nParticipantes, tam);
    float media = MediaDeNotas(nParticipantes, tam);
    float std = StdNotas(nParticipantes, tam);
    int acimaMedia = QtdAlunosAcimaMedia(nParticipantes, tam);
    int reprovados = QtdAlunosReprovados(nParticipantes, tam);

    ImprimeStatus(menor, maior, media, std, acimaMedia, reprovados);

    return 0;
}