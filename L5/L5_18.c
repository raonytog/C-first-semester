#include <stdio.h>
#define MAX 50

void LeMatriz (int l, int c, int m[l][c]) 
{
    int i, j;
    for (i = 0; i < l; i++) 
    {
        scanf("\t");
        for (j = 0; j < c; j++) 
        {
            scanf("%d%*c", &m[i][j]);
        }
    }

    scanf("%*c");
}

int VerificaSePossivelMultiplicarMatrizes(int c, int l) 
{
    if (l == c) 
    {
        return 1;
    } else {
        return 0;
    }
}

void MultiplicaMatrizes(int l1, int c1, int m1[l1][c1], int l2, int c2, int m2[l2][c2]) 
{
    printf("\n");

    int i, j, k, l;
    int sum = 0;
    if (VerificaSePossivelMultiplicarMatrizes(c1, l2)) 
    {
        printf("beleza\n");
    } else {
        printf("IMPOSSIVEL");
    }

    printf("\n");
}

int main () 
{
    int nPares;
    scanf("%d\n", &nPares);
    scanf("%*c");


    int i, c1, c2, l1, l2;
    int m1[l1][c1], m2[l2][c2];
    for (i = 0; i < nPares; i++) 
    {
        scanf("%d %d\n", &c1, &l1);
        m1[l1][c1];
        LeMatriz(l1, c1, m1);
        
        scanf("%d %d\n", &c2, &l2);
        m2[l2][c2];
        LeMatriz(l2, c2, m2);

        MultiplicaMatrizes(l1, c1, m1, l2, c2, m2);
    }

    return 0;
}