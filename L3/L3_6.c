#include <stdio.h>

int EhPalindromo(int num) {
    int original = num;
    int inverso = 0;
    int digito;

    while (num > 0) {
        digito = num % 10;
        inverso = inverso * 10 + digito;
        num /= 10;
    }

    if (original == inverso) {
        return 1;
    } else {
        return 0;
    }
}

int main () {
    int num;
    while (scanf("%d", &num) == 1) {
        if (EhPalindromo(num) == 1) {
            printf("S\n");
        } else {
            printf("N\n");
        }
    }
    return 0;
}