#include <stdio.h>
#include <ctype.h>
// °F = (°C × 9/5) + 32
// °C = (°F − 32) x 5/9

int main () {
    float temp;
    char uni;
    scanf("%f %c", &temp, &uni);

    if (tolower(uni) == 'c') {
        temp = temp * 1.8 + 32;
        printf("%.2f (F)", temp);
    }

    else if (tolower(uni) == 'f') {
        temp = ((temp - 32) * 5/9);
        printf("%.2f (C)", temp);
    }
     return 0;
}
