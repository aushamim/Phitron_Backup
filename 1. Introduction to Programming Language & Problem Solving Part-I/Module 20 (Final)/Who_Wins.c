#include <stdio.h>
int main()
{
    int n = 0, a = 0, b = 0, tCount = 0, pCount = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        if (a > b)
        {
            tCount++;
        }
        else if (a < b)
        {
            pCount++;
        }
    }

    if (tCount > pCount)
    {
        printf("Tiger");
    }
    else if (tCount < pCount)
    {
        printf("Pathan");
    }
    else
    {
        printf("Draw");
    }

    return 0;
}