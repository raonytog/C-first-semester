#include <stdio.h>

#define MAX_TAM 256

typedef struct {
    int idMsg;          // 3 digit
    int idPacote;       // 3 digit
    int tamConteudo;    // 1 a 9
    char msg[10];       // 9 char
    int codErro;        //4 digt
} tPacote;

typedef struct {
    tPacote pac[MAX_TAM];
    int qtdPacs;
} tMensagens;

tPacote LePacote();
tMensagens ArmazenaMensagens(tPacote *pacotes, int num, int *qtdMsg);
tPacote OrdenaPacotes(tPacote *pacote, int qtdPacotes);
void ImprimePacote(tPacote pacote);
void ImprimeMensagens (tMensagens *msg, int n);
int TemErro(tPacote pacote);
int MudouID(tPacote p1, tPacote p2);
int OrdenaIdPacote (tPacote p1, tPacote p2);
int OrdenaIdMsg (tPacote p1, tPacote p2);


int main () {
    tPacote pacotes[MAX_TAM];
    tMensagens mensagens[MAX_TAM];

    int numPacotes, i, j;
    scanf("%d%*c", &numPacotes);

    for (i = 0; i < numPacotes; i++) {
        pacotes[i] = LePacote();
    }

    int n[1];
    *pacotes = OrdenaPacotes(pacotes, numPacotes);
    *mensagens = ArmazenaMensagens(pacotes, numPacotes, n);
    printf("%d", n[0]);

    ImprimeMensagens(mensagens, n[0]);

    return 0;
}


tPacote LePacote() {
    tPacote pac;
    scanf("%3d%*c", &pac.idMsg);
    scanf("%3d%*c", &pac.idPacote);
    scanf("%1d%9[^\n]", &pac.tamConteudo, pac.msg);
    scanf("%4d%*c", &pac.codErro);
    return pac;
}

void ImprimeMensagens(tMensagens *msg, int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        printf("\n");
        for (j = 0; j < msg[i].qtdPacs; j++) {
            ImprimePacote(msg[i].pac[j]);
        }

    }
}

tMensagens ArmazenaMensagens(tPacote *pacotes, int n, int *qtdMsg) {
    tMensagens msg[MAX_TAM];
    int i, j, k, cont, nMsg = 0;
    for(i = 0; i < n; i++) {
        cont = 0;
        for (j = 0, k = j+1; j < n, k < n; j++, k++) {
            msg[i].pac[j] = pacotes[j];
            msg[i].qtdPacs = cont;
            cont++;
            if (MudouID(pacotes[j], pacotes[k])) {
                i++; 
                nMsg++;
                break;
            }
        }
    }

    qtdMsg[0] = nMsg;
    return *msg;
}

int MudouID(tPacote p1, tPacote p2) {
    if (p1.idMsg != p2.idMsg) return 1;
    return 0;
}

int TemErro(tPacote pacote) {
    int sum = 0, i = 0;
    sum = pacote.idMsg + pacote.idPacote + pacote.tamConteudo;
    for (i = 0; i < pacote.tamConteudo; i++) {
        sum += pacote.msg[i];
    }

    if (sum != pacote.codErro) return 1;

    return 0;
}

void ImprimePacote(tPacote pacote) {
    int i;

    if (TemErro(pacote)) {
        printf("##FALHA##");

    } else { 
        for(i = 0; i < pacote.tamConteudo; i++) {
            printf("%c", pacote.msg[i]);
        }
    }
}

int OrdenaIdPacote (tPacote p1, tPacote p2) {
    if (p1.idPacote > p2.idPacote) return 1;
    return 0;
}

int OrdenaIdMsg (tPacote p1, tPacote p2) {
    if (p1.idMsg > p2.idMsg) {
        return 1;

    } else if (p1.idMsg == p2.idMsg) {
        return OrdenaIdPacote(p1, p2);
    }
    return 0;
}

tPacote OrdenaPacotes(tPacote *pacote, int qtdPacotes) {
    tPacote aux;
    int i, j;

    for (i = 0; i < qtdPacotes; i++) {
       for (j = i+1; j < qtdPacotes; j++) {
            if (OrdenaIdMsg(pacote[i], pacote[j])) {
                aux = pacote[i];
                pacote[i] = pacote[j];
                pacote[j] = aux;
            }
        }
    }

    return *pacote;
}