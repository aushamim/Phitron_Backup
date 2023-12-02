#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x, k;
        cin >> n >> x >> k;

        ll b = x, g = n - x;
        ll rb = b - ((b / k) * k);
        ll rg = g - ((g / k) * k);

        cout << max(rb, rg) - min(rb, rg) << endl;
    }
    return 0;
}