#include <stdio.h>
int pbr(int *x)
{
    *x = 50;
}
int main()
{
    int x = 10;
    printf("X Before Function Call - %d\n", x);
    pbr(&x);
    printf("X After Function Call - %d\n", x);
    return 0;
}