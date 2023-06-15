#include <stdio.h>
int main()
{
    int n = 0, x = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x)
        {
            x = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", x - arr[i]);
    }
    return 0;
}