#include <bits/stdc++.h>
#define ll long long
const ll mod = 1e9 + 7;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll arr[n];
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        ll prev = 1, ans = 0;
        for (int i = 1; i <= n; i++)
        {
            ll tmp = prev * mp[i];
            tmp %= mod;
            ans += tmp;
            prev = tmp;
            ans %= mod;
        }
        cout << ans << endl;
    }
    return 0;
}