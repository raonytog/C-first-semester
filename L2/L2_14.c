#include <stdio.h>

int main() {   
    char c = ' ';
    int flag = 1;
    
    printf("RESP:");
    while (c != '.' && c != '?' && c != '!') {
        scanf("%c", &c);
//        if (flag == 1) {
//            printf("RESP:");
//            flag = 0;
//        }
// visivelmente, com o flag é mais agradável, mas desnecessário 
        if (c != ' ') {
            printf("%c", c);
        }
        
    }
    return 0;
}
