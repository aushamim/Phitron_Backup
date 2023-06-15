#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 0, b = 0, c = 0, max = 0, min = 0;
    cin >> a >> b >> c;

    if (a >= b && a >= c)
    {

        max = a;
    }
    else if (b >= a && b >= c)
    {

        max = b;
    }
    else if (c >= a && c >= b)
    {
        max = c;
    }

    if (a <= b && a <= c)
    {

        min = a;
    }
    else if (b <= a && b <= c)
    {

        min = b;
    }
    else if (c <= a && c <= b)
    {
        min = c;
    }

    cout << min << " " << max << endl;
    return 0;
}