#include <stdio.h>

int main () {
    int n = 2, count = 0, maior = -99999;
    float media = 0;

    while(n != 0) {
        count++;
        scanf("%d", &n);
        if (n == 0) {
        break;
       }
        media = (n + media*(count-1) )/(count);

        if (n > maior) {
            maior = n; }

        printf("%d %.6f\n", maior, media);
    }
    return 0;
} 