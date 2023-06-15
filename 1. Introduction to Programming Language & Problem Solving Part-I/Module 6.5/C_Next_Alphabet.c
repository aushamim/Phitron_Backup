#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if (a == 'z')
    {
        printf("a");
    }
    else if (a == 'Z')
    {
        printf("A");
    }
    else
    {
        printf("%c", a + 1);
    }
    return 0;
}