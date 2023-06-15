#include <stdio.h>
int sort(int a, int b, int c)
{
    int arr[3] = {a, b, c};
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (arr[i] > arr[j])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    printf("%d\n%d\n%d\n", arr[0], arr[1], arr[2]);
    printf("\n%d\n%d\n%d\n", a, b, c);
}
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    sort(a, b, c);
    return 0;
}