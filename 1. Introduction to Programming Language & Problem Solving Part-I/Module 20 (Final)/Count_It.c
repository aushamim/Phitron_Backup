#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    gets(s);

    int cp = 0, sm = 0, sp = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            cp++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            sm++;
        }
        else
        {
            sp++;
        }
    }

    printf("Capital - %d\nSmall - %d\nSpaces - %d", cp, sm, sp);
    return 0;
}