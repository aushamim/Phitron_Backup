#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n == 0)
        {
            cout << 2 << " " << 3 << " " << 4 << " " << 6 << endl;
        }
        else
        {
            ll a = 1, b = 2, c = 0, d = 0;
            for (ll i = 3; i <= 1e6; i++)
            {
                ll chk = n ^ i;
                if (i == chk || chk <= 2)
                {
                    continue;
                }
                c = i;
                d = chk;
                break;
            }
            cout << a << " " << b << " " << c << " " << d << endl;
        }
    }
    return 0;
}