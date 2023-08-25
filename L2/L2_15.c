#include <stdio.h>

int main() {
    int num = 0;
    int qn = 0, qp = 0, sn = 0, sp = 0;

    while (scanf("%d", &num) == 1) { // ignora white space
        if (num >= 100 || num <= -100) {
            break;
        }
        
        if (num < 0) { // -
            qn++; //qtd 
            sn += num; // soma 

        } else if (num > 0) { // + 
            qp++; //qtd 
            sp += num; //soma 
        }
    }

    printf("%d %d %d %d", qn, qp, sn, sp);
    return 0;
}