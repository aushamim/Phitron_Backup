#include <stdio.h>
int sum_of_numbers()
{
    int n, a, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        sum += a;
    }
    return sum;
}

int main()
{
    int sum = sum_of_numbers();
    printf("%d", sum);
    return 0;
}