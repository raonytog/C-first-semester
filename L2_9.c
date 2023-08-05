#include <stdio.h>

int main()
{
    int hasMultiples;
    int n, m;
    int i, j, k;
    scanf("%d %d", &n, &m);

    int primeFlag = 1;
    for (i = n + 1; i < m; i++)
    {
        primeFlag = 1;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                primeFlag = 0;
                break;
            }
        }

        if (primeFlag)
        {
            printf("%d\n", i);
            hasMultiples = 0;
            for (k = i * 2; k < m; k++) {
                if (k % i == 0 && k >= n + 1) {
                    printf("%d ", k);
                    hasMultiples = 1;
                }
            }
            if (hasMultiples) {
                printf("\n");
            } else {
                printf("*\n");
            }
        }
    }
    return 0;
}