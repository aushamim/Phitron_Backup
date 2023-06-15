#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int pSum = 0, sSum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                pSum += arr[i][j];
            }
            if (i + j == n - 1)
            {
                sSum += arr[i][j];
            }
        }
    }

    printf("%d", abs(pSum - sSum));

    return 0;
}