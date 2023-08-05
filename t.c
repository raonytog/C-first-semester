#include <stdio.h>

int somaDigitos(int n) {
    if (n < 10) {
        return n;
    }

    int soma = 0;
    while (n > 0) {
        soma += n % 10;  
        n /= 10;        
    }

    return somaDigitos(soma);
}

int main() {
    int numero;
    scanf("%d", &numero);

    int resultado = somaDigitos(numero);

    printf("RESP:%d\n", resultado);

    return 0;
}
