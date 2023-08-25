#include <stdio.h>

int main () {
    int n, m;
    int i, j;
    scanf("%d %d", &n, &m);

    printf("RESP:");

    for (i = n + 1; i < m; i++)
    {
        int is_prime = 1;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                is_prime = 0;
                break;
            }
        }

        if (is_prime)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
