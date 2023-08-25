#include <stdio.h>

int EhPrimo(int num){
    int i, isPrime = 0;
    for (i = 1; i <= num; i++) {
        if (num%i == 0) {
            isPrime++;
        }
        
        }
        if (isPrime < 2 || isPrime > 2) {
            return 0;
        }
    
        if (isPrime == 2) {
            return 1;
    }
}


int main () {
    int n, m, checkPrime;
    scanf("%d %d", &n, &m);
    
    if (n < m) {
        for (n+= 1; n < m; n++ ) {
            checkPrime = EhPrimo(n);
            if (checkPrime == 1) {
                printf("%d ", n);
            }
        }
    }
    return 0;
}