#include <stdio.h>
int main()
{
    long long int e = 0, m = 0, b = 0, count = 0;
    scanf("%lld %lld %lld", &e, &m, &b);

    if (e >= m && b >= m)
    {
        count += m;
        e -= m;
        b -= m;
        m -= m;
    }
    else if (e >= b)
    {
        count += b;
        e -= b;
        m -= b;
        b -= b;
    }
    else
    {
        count += e;
        m -= e;
        b -= e;
        e -= e;
    }

    if (e > 0)
    {
        if ((e / 2) <= b)
        {
            count += e / 2;
            b -= e / 2;
            e -= (e / 2) * 2;
        }
        else
        {
            count += b;
            e -= b;
            b -= b;
        }
    }
    printf("%lld", count);
    return 0;
}
