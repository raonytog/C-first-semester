#include <stdio.h>

int main () {
    int n, m, i;
    scanf("%d %d", &n, &m);
    
    printf("RESP:");
    for (i = 1; (n+i) < m; i++) {
        if ((n+i)%2 == 0) {
            printf("%d ", n+i);
        }
    }
    return 0;
}