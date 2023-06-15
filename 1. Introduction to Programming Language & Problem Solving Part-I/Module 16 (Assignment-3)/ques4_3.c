#include <stdio.h>
void sum_of_odd_sequence(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }

    printf("%d", sum);
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    sum_of_odd_sequence(n);
    return 0;
}