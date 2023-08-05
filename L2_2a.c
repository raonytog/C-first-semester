#include <stdio.h>

int main () {
    int n, m, i;
    scanf("%d %d", &n, &m);
    
    for (i = 1; (n+i) < m; i++) {
        if (((n+i)%3 == 0) || ((n+i)%4 == 0) || ((n+i)%7 == 0) ) {
            printf("%d ", n+i);
        }
    }
    return 0;
}