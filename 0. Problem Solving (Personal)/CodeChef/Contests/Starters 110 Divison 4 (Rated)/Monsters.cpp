#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isPrime(ll h)
{
    if (h <= 1)
    {
        return false;
    }
    for (ll i = 2; i <= sqrt(h); ++i)
    {
        if (h % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll h;
        cin >> h;

        ll pow = 1, count = 0;
        while (h > 0)
        {
            h -= pow;
            pow *= 2;
            count++;
            if (isPrime(h))
            {
                count++;
                h = 0;
            }
        }
        cout << (h >= 0 ? count : -1) << endl;
    }
    return 0;
}