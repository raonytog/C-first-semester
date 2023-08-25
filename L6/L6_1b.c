#include <stdio.h>

typedef struct {
    int     id1;        // 3 digitos
    int     id2;        // 3 digitos
    int     TamMsg;     // 1 digito
    char    msg[9];     // SMP 9 char
    int     codErro;    // 4 digitos
} tPacote;

tPacote LePacote() {
    tPacote pack;
    scanf("%3d %3d %1d%9[^\n] %4d", &pack.id1, &pack.id2, &pack.TamMsg, pack.msg, &pack.codErro);
    return pack;
}


void ImprimePacote (tPacote pacote) {
    int sum;
    sum = pacote.id1 + pacote.id2 + pacote.TamMsg;
    
    int i;
    for (i = 0; i < pacote.TamMsg; i++) {
        sum += pacote.msg[i];
    }

    if (sum != pacote.codErro) {
        printf("FALHA!\n");
    } else {
        printf("PCT: %d,%d,%d,", pacote.id1, pacote.id2, pacote.TamMsg);

        for(i = 0; i < pacote.TamMsg; i++) {
            printf("%c", pacote.msg[i]);
        }

        printf(",%d\n", pacote.codErro);
    }
}

int main () {
    tPacote pac;
    int qtdPacotes;
    scanf("%d", &qtdPacotes);

    int i;
    for (i = 0; i < qtdPacotes; i++) {
        pac = LePacote();
        ImprimePacote(pac);
    }

    return 0;
}