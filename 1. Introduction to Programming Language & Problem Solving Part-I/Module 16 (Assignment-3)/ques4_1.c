#include <stdio.h>
#include <string.h>

int letters_in_word(char str[], char x)
{
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == x)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char str[100], x;
    gets(str);
    scanf("%c", &x);

    int count = letters_in_word(str, x);
    printf("%d", count);
    return 0;
}