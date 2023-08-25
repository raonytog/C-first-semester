#include <stdio.h>

int EhPrimo(int num)
{
    int i;
    for (i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void ImprimeMultiplos(int num, int max)
{
    int i;
    int ehMultiplo = 0;
    for (i = num + 1; i < max; i++)
    {
        if (i % num == 0)
        {
            if (ehMultiplo == 0)
            {
                ehMultiplo = 1;
                printf("%d", i);
            }
            else
            {
                printf(" %d", i);
            }
        }
    }

    if (ehMultiplo == 0)
    {
        printf("*");
    }
    printf("\n");
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int i;
    for (i = n + 1; i < m; i++)
    {
        if (EhPrimo(i) == 1)
        {
            printf("%d\n", i);
            ImprimeMultiplos(i, m);
        }
    }
    return 0;
}