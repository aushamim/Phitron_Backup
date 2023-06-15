#include <stdio.h>
#include <string.h>

void printFun(char s[], int i, int count)
{
    if (s[i] == '\0')
    {
        printf("%d", count);
        return;
    }

    if (s[i] == 'A' || s[i] == 'a' ||
        s[i] == 'E' || s[i] == 'e' ||
        s[i] == 'I' || s[i] == 'i' ||
        s[i] == 'O' || s[i] == 'o' ||
        s[i] == 'U' || s[i] == 'u')
    {
        count++;
    }

    printFun(s, i + 1, count);
}

int main()
{
    char s[201];
    gets(s);
    printFun(s, 0, 0);
    return 0;
}