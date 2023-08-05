#include <stdio.h>

int main()
{
    char l;
    while (l != '.' && l != '?' && l != '!')
    {
        scanf("%c", &l);

        if (l >= 'a' && l <= 'z')
        {
            l += ('A' - 'a');
        }
        printf("%c", l);
    }
    return 0;
}