#include <stdio.h>
int main()
{
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);
    if ((a == b && b == c && c == a) && (a > 0 && b > 0 && c > 0))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}