#include <stdio.h>

void printFun(int n, long long int fact)
{
    if (n == 0)
    {
        printf("%lld", fact);
        return;
    }
    printFun(n - 1, fact * n);
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    printFun(n, 1);
    return 0;
}