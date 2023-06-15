#include <stdio.h>
int sequence(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
        if (i != n)
        {
            printf(" ");
        }
    }
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    sequence(n);
    return 0;
}