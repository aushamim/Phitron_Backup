#include <stdio.h>
int main()
{
    int n = 0, a = 0, max = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a >= max)
        {
            max = a;
        }
    }
    printf("%d", max);

    return 0;
}