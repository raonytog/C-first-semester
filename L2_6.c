#include <stdio.h>
#include <math.h>

int main () {
    int n;
    double soma;
    double i, j, k=2;
    double odd;

    scanf("%d", &n);

    switch (n)
    {
    case 1:
        for ((i = 1) && (j = 1); (i <= 99) && (j <= 50); (i += 2) && (j++))
        {
            soma += i/j;
        }
        printf("%.6lf", soma);
        break;

    case 2:
        for ((i = 1) && (j = 50); (i <= 50) && (j >= 1); (i++) && (j--))
        {
            soma += pow(2, i)/j;
        }
        printf("%.6lf", soma);
        break;

    case 3:
        soma = (double)1/1 + (double)2/4 + (double)3/9 + (double)4/16 + (double)5/25 + (double)6/36 + (double)7/49 + (double)8/64 + (double)9/81 + (double)10/100;
        printf("%.6lf", soma);
        break;
    
    default:
        break;
    }

    return 0;
}
