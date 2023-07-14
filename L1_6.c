#include <stdio.h>
    // aprovado >= 7
    // reprovado > 5
    // else recuperação 

int main () {
    float num1, num2, media;
    scanf("%f %f", &num1, &num2);
    media = (num1 + num2) / 2;
    if (media >= 7) {
        printf("%.1f - Aprovado", media);
    }

    else if (media < 5) {
        printf("%.1f - Reprovado", media); 
    }

    else {
        printf("%.1f - De Recuperacao", media);
    }

return 0;
}

