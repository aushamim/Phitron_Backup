#include <stdio.h>
int main()
{
    int m = 0, n = 0;
    scanf("%d %d", &m, &n);

    int arr1[m][n], arr2[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr1[i][j] + arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}