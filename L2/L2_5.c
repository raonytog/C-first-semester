#include <stdio.h>
#include <math.h>

int main() {
    int n, k;
    double soma, pi;
    scanf("%d", &n);

    for (k = 1; k <= n; k++) {
        soma += (6.0/pow(k,2));
    }

    pi = sqrt(soma);
    printf("%.6f", pi);
    return 0;
}