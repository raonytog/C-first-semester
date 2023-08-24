#include <stdio.h>
#include <ctype.h>

int main () {
    char ch, uppercase;
    scanf("%c", &ch);
    uppercase = ch - 32;

    if ((ch>='A') && (ch<='Z')) {
            printf("A letra deve ser minuscula!");
    }
    
        else if (!((ch >= 'a') && (ch <= 'z'))) {
            printf("Nao e letra!"); 
    }

                else {
                    printf("%c(%d)", uppercase, uppercase); 
    }
    return 0; 
} //blank line
