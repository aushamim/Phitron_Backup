#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = n - i - 1; j > 0; j--)
        {
            printf(" ");
        }

        for (int k = 1; k <= 2 * i + 1; k++)
        {
            if (i % 2 == 0)
            {
                printf("^");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}