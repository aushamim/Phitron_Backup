#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool flag = false;
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= k)
            {
                flag = true;
                ans = min(ans, arr[i] % k);
            }
        }

        if (flag)
        {
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}