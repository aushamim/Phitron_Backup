#include <stdio.h>
int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 5 - i; j >= 1; j--)
        {
            printf(" ");
        }

        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}