#include <stdio.h>
// maior, menor, n pares, n impares, media.6
int main () {
    int count = 0, maior = 0, menor, n;
    int par = 0, impar = 0, casasLer;
    float media = 0;
    scanf("%d", &casasLer);

    for(count = 1; count <= casasLer; count++) {
        scanf("%d", &n);
        media+= n;
        

        if (n > maior) {
            maior = n; }

        
        if (n < menor) {
            menor = n; }
    

        if (n%2 == 0) {
            par++;
            } else {
                impar++;
            }
        
        }
    
    media = media/casasLer;
    printf("%d %d %d %d %.6f", maior, menor, par, impar, media);

    return 0;
}