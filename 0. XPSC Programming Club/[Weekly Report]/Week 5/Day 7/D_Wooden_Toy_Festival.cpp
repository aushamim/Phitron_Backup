#include <bits/stdc++.h>
#define ll long long
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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        ll l = 0, r = INT_MAX, ans;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;

            int count = 1, p1 = 0, p2 = p1 + 1;
            while (p2 < n)
            {
                if (arr[p1] + mid + mid >= arr[p2])
                {
                    p2++;
                }
                else
                {
                    count++;
                    p1 = p2;
                    p2 = p1 + 1;
                }
            }

            if (count < 4)
            {
                ans = mid;
                r = mid - 1;
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