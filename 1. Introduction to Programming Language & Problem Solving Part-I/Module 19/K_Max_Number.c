#include <stdio.h>
#include <limits.h>

void printFun(int arr[], int n, int i, int max)
{
    if (n == i)
    {
        printf("%d", max);
        return;
    }

    if (arr[i] > max)
    {
        max = arr[i];
    }

    printFun(arr, n, i + 1, max);
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printFun(arr, n, 0, INT_MIN);
    return 0;
}