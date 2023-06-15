#include <stdio.h>

int printFun(int arr[], int n, int i)
{
    if (n == i)
    {
        return 0;
    }
    printFun(arr, n, i + 1);

    if (i % 2 == 0)
    {
        if (n != i)
        {
            printf(" ");
        }
        printf("%d", arr[i]);
    }
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
    printFun(arr, n, 0);
    return 0;
}