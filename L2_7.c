#include <stdio.h>

int main () {
    int n, j;
    scanf("%d", &n);

    int flag = 0;
    for (j = 1; j <= n; j++)
    {
        if (n%j == 0) 
        {
            flag++;
        }
    }

    if (flag == 2)
        printf("Primo");
    else 
        printf("Nao primo");
    return 0;
}