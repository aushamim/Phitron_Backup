#include <stdio.h>

int printFun(int x)
{
    if (x == 0)
    {
        return 0;
    }
    printFun(x / 10);
    printf("%d ", x % 10);
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x = 0;
        scanf("%d", &x);
        if (x == 0)
        {
            printf("0");
        }
        else
        {
            printFun(x);
        }
        printf("\n");
    }
    return 0;
}