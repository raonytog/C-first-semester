#include <stdio.h>

int Propriedade(int num) {
    int a = 0, b = 0;
    int soma;

    a = num/100;
    b = num%100;
    soma = a + b;

    if (soma * soma == num) {
        return 1;
    }
    return 0;
}

int main () {
    int n, m, i;
    int prop;
    scanf("%d %d", &n, &m);

    if (1000 < n && m < 9999 && n < m) {
        for(i = n+1; i < m+1; i++) {
            if (Propriedade(i) == 1) {
            printf("%d\n", i);
            }
        }
    }
    return 0;
}