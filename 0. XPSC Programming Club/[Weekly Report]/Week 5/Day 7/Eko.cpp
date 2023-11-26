#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, m;
    cin >> n >> m;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll l = 0, r = 1e9, ans = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;

        ll chk = 0;
        for (int i = 0; i < n; i++)
        {
            chk += max((ll)0, arr[i] - mid);
        }

        if (chk < m)
        {
            r = mid - 1;
        }
        else
        {
            ans = max(ans, mid);
            l = mid + 1;
        }
    }
    cout << ans << endl;
    return 0;
}