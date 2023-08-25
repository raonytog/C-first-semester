#include <stdio.h>

int main () {
    int n, m, cont, multi = 0;
    scanf("%d %d", &n, &m);

    for (cont = 1; multi < (m*10); cont++) {
        multi = (n * cont);
        printf("%d x %d = %d\n", n, cont, multi);

        if (cont == 10) {
            cont = 0;
            n++;
        }
    }

    return 0;
}