#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, h;
        cin >> n >> h;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long l = 0, r = 1e5, ans = LLONG_MAX;
        while (l <= r)
        {
            long long mid = l + (r - l) / 2;

            long long hChk = h;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] > mid)
                {
                    hChk -= arr[i];
                }
            }

            if (hChk > 0)
            {
                r = mid - 1;
                ans = min(ans, mid);
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}