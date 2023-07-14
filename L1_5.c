#include <stdio.h>
#include <math.h>

int main () {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    
    if (num1 > num2) {
        printf("N1 = %d", num1);
    }

    else if (num2 > num1) {
        printf("N2 = %d", num2);
    }

    else if (num1 == num2) {
        printf("N1 = N2");
    }

    return 0;
}