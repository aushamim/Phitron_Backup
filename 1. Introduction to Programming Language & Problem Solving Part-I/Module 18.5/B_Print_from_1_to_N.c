#include <stdio.h>

int printFun(int n, int i)
{
    printf("%d\n", i);
    if (n == i)
    {
        return 0;
    }
    printFun(n, i + 1);
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    printFun(n, 1);
    return 0;
}