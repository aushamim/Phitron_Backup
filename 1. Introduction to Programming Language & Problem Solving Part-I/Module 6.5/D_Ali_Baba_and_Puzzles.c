#include <stdio.h>
int main()
{
    int a, b, c, d, x1, x2, x3, x4, x5, x6;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    x1 = a + b - c;
    x2 = a + b * c;
    x3 = a - b + c;
    x4 = a - b * c;
    x5 = a * b + c;
    x6 = a * b - c;

    if (x1 == d || x2 == d || x3 == d || x4 == d || x5 == d || x6 == d)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}