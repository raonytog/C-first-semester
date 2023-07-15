#include <stdio.h>
#include <ctype.h>

int main () {
    char letra;
    scanf("%c", &letra);

   if (tolower(letra) == 'a' || tolower(letra) == 'e' || tolower(letra) == 'i' || tolower(letra) == 'o' || tolower(letra) == 'u') {
        printf("Vogal");
   }

    else { 
        printf("Nao vogal");
    }

    return 0;
}