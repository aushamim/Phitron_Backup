#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int num = 0, x = 0;
        scanf("%d", &num);
        {
            do
            {
                x = num % 10;
                num = num / 10;
                printf("%d ", x);
            } while (num != 0);
        }
        printf("\n");
    }
    return 0;
}