#include <stdio.h>
int pbv(int x)
{
    x += 20;
    printf("X in Function - %d\n", x);
}
int main()
{
    int x = 10;
    pbv(x);
    printf("X in Main - %d\n", x);
    return 0;
}