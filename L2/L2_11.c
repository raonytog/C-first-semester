#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    if (n > 1000 && m < 9999 && n < m)
    {
        int i;
        int ab, cd, final;
        for (i = n + 1; i < m; i++) // varre de n+i até m-1
        {
            ab = i / 100; // i/100 = 2000/100 = 20, armazena milhares e centenas
            cd = i % 100; // i%100 = 2050%100 = 50, que é o resto não divisível por 100
            final = ab + cd;

            if (final * final == i)
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}