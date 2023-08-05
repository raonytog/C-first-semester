#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);

    printf("RESP:");
    printf("%c", c);

    while (c != '?' && c != '!' && c != '.') {
        scanf("%c", &c);

        if (c == '.' || c == '!' || c == '?') {
            printf("%c", c);
            break;
        }

        if (c == ' ') {
            printf("_");
        } else {
            printf("%c", c);
        }
    }
    return 0;
}