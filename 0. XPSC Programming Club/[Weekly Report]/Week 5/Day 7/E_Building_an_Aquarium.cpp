#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int l = 0, r = 2e9, ans = 0;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            ll w = 0;
            for (int i = 0; i < n; i++)
            {
                w += max((ll)0, mid - arr[i]);
            }

            if (w <= x)
            {
                ans = max(ans, mid);
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}