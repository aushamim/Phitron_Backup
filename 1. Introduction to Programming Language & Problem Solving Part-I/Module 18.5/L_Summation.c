#include <stdio.h>

long long int printFun(long long int arr[], int n, int i, long long int sum)
{
    if (n == i)
    {
        printf("%lld", sum);
        return 0;
    }
    sum += arr[i];
    printFun(arr, n, i + 1, sum);
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    printFun(arr, n, 0, 0);
    return 0;
}