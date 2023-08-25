#include <stdio.h>
#include <math.h>

// 2 int + str && '.'
// num = 1== codificar (+), 2== decodificar (-)
// codif_decodif = somar n aos caracteres
// so letra minuscula p codificar
int main() {

    int num, codif_decodif, flag = 0;
    char text;
    scanf("%d %d ", &num, &codif_decodif);

 
    codif_decodif%= 26;
    

    while (scanf("%c", &text) == 1) {

    switch (num) {
        case 1: // codifica
            if (text >= 'a' && text <= 'z') {
            text += codif_decodif;

                if (text > 'z') {
                    text -= 26;
            }
            }
            printf("%c", text);
            break;

        case 2: // decodifica
            if (text >= 'a' && text <= 'z') {
            text -= codif_decodif;

                if (text <'a') {
                    text -= 26;
                }
            }
            printf("%c", text);
            break;
            

        default:
            if (flag == 0) {
                printf("Operacao invalida."); 
                flag++;
                }
            break;
        }

        if (text == '.') {
            break;
        }
    }
    return 0;
}