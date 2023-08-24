#include <stdio.h>

int main () {
    int num, unity;
    scanf("%d %d", &num, &unity);

    if (unity == 1) {
       if ((num%2) == 0) {
        printf("PAR");
       }
       
       else {
        printf("IMPAR");
       }
    }

    if (unity == 2) {
       if (((num/10)%2) == 0) {
        printf("PAR");
       }
       
       else {
        printf("IMPAR");
       }
    }

     if (unity == 3) {
       if (((num/100)%2) == 0) {
        printf("PAR");
       }

       else {
        printf("IMPAR");
       }
    }

    return 0;
} //blank line
