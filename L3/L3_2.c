#include <stdio.h>

float Soma(float num1, float num2) {
        return num1 + num2;
    }

    float Subtracao(float num1, float num2) {
        float result = num1 - num2;
        return num1 - num2;
    }

    float Divisao(float num1, float num2) {
        return  num1 / num2;
    }
    
    float Multiplicacao(float num1, float num2) {
        return num1 * num2;
    }



float operacao(float numero1, float numero2, char c) {
    if (c == '+') {
        return Soma(numero1, numero2);

    } else if (c == '-') {
        return Subtracao(numero1, numero2);

    } else if (c == '*') {
        return Multiplicacao(numero1, numero2);

    } else if (c == '/') {
        return Divisao(numero1, numero2);;

    } else return 0;
}



int main() {
    float   n1, n2, nx; 
    char    c, c2;
    float   result;

    scanf("%f %f %c", &n1, &n2, &c);
    result = operacao(n1, n2, c);

    while(scanf("%f %c", &nx, &c2) == 2) {
        result = operacao(result, nx, c2);
    }

    printf("%.2f", result);
    return 0;
}