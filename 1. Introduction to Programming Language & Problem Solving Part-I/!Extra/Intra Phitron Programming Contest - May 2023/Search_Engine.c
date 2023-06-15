#include <stdio.h>
int main()
{
    int m = 0;
    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        int n = 0;
        scanf("%d", &n);
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int x = 0, flag = 0, index = 0;
        scanf("%d", &x);

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == x)
            {
                flag = 1;
                index = i;
                break;
            }
        }

        if (flag == 1)
        {
            printf("Case %d: %d\n", i + 1, index + 1);
        }
        else
        {
            printf("Case %d: Not Found\n", i + 1);
        }
    }
    return 0;
}