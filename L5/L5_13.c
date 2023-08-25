#include <stdio.h>
#include <stdlib.h>

int ComparaString(char * str1, char * str2) {
    int j = 0, k = 0;
    while (str1[j] != '\0') {
        j++;
    }

    while (str2[k] != '\0') {
        k++;
    }

    if (k != j) return 0;

    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0;
        } 
        i++;
    }
    
    return 1;
}

int main(){
    char str1[1000] = "ola";
    char str2[1000] = "ola";

    printf("teste\n");
    while(scanf("%s", &str1) == 1 && scanf("%s", &str2) == 1){
        if (ComparaString(str1, str2)) 
            printf("IGUAL\n");
        else 
            printf("DIFERENTE\n");
    }

return 0;
}