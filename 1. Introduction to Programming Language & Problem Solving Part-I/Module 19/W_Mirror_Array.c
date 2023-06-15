#include <stdio.h>
int main()
{
    int m = 0, n = 0;
    scanf("%d %d", &m, &n);

    int arr[m][n], m_arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            m_arr[i][n - j - 1] = arr[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", m_arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}