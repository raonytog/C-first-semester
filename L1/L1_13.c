#include <stdio.h>

int main () {
    int numPessoas, numItens;
    scanf("%d %d", &numPessoas, &numItens);

    if (numPessoas == 1) {
        printf("RESP:1"); 
    }

    else if (numPessoas == numItens) {
        printf("RESP:%d", numPessoas);
    }

    else if (numPessoas < numItens) {
        if ((numItens%numPessoas) == 0)
            printf("RESP:%d", numPessoas);
        else 
            printf("RESP:%d", (numItens%numPessoas));
    }

    else if(numPessoas > numItens) {
        printf("RESP:%d", numItens);
    }
    return 0;
}
