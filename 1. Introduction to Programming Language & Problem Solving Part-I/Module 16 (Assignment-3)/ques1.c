#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);

    int digits = 1, spaces = n - 1;
    for (int i = 1; i <= 2 * n; i++)
    {
        for (int j = spaces; j > 0; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= digits; k++)
        {
            printf("%d", k);
        }

        if (i < n)
        {
            digits += 2;
            spaces--;
        }
        else
        {
            digits -= 2;
            spaces++;
        }

        printf("\n");
    }
    return 0;
}