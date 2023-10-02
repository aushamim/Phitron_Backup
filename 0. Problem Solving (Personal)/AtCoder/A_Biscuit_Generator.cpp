#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, t;
    cin >> a >> b >> t;
    if (t < a)
    {
        cout << 0 << endl;
    }
    else
    {
        int sum = 0;
        while (t >= a)
        {
            sum += b;
            t -= a;
        }
        cout << sum << endl;
    }
    return 0;
}