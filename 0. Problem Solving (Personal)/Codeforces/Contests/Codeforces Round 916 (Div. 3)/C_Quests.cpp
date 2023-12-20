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
        int arr1[n], arr2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }

        int ans = INT_MIN, tmp = 0, mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (i == k)
            {
                break;
            }
            tmp += arr1[i];
            mx = max(mx, arr2[i]);
            ans = max(ans, tmp + (k - i - 1) * mx);
        }
        cout << ans << endl;
    }
    return 0;
}