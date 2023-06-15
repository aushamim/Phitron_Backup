#include <stdio.h>
int main()
{
    int m = 0, n = 0;
    scanf("%d %d", &m, &n);

    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int x = 0;
    scanf("%d", &x);

    int flag = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == x)
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 1)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }

    return 0;
}