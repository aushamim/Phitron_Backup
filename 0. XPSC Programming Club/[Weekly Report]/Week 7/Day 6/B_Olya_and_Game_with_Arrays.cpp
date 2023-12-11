#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, mn1 = LLONG_MAX, mn2 = LLONG_MAX;
        cin >> n;
        vector<vector<ll>> v;
        for (int i = 0; i < n; i++)
        {
            int q;
            cin >> q;
            vector<ll> vi(q);
            for (int j = 0; j < q; j++)
            {
                cin >> vi[j];
            }
            sort(vi.begin(), vi.end());
            mn1 = min(mn1, vi[0]);
            mn2 = min(mn2, vi[1]);
            v.push_back(vi);
        }

        ll ans = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i][1] == mn2 && count == 0)
            {
                count++;
            }
            else
            {
                ans += v[i][1];
            }
        }
        ans += mn1;
        cout << ans << endl;
    }
    return 0;
}