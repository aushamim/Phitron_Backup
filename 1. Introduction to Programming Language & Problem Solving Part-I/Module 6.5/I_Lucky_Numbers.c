#include <stdio.h>
int main()
{
    int x, a, b;
    scanf("%d", &x);
    a = x / 10;
    b = x % 10;

    if (b == 0)
    {
        b = 1;
    }
    if (a % b == 0 || b % a == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}