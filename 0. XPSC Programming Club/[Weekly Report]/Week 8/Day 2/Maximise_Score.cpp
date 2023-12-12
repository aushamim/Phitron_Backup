#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int diff[n - 1];
        for (int i = 0; i < n - 1; i++)
        {
            diff[i] = abs(arr[i] - arr[i + 1]);
        }

        int ans = INT_MAX;
        if (n >= 2)
        {
            ans = min(ans, min(diff[0], diff[n - 2]));
        }

        for (int i = 0; i < n - 2; i++)
        {
            ans = min(ans, max(diff[i], diff[i + 1]));
        }
        cout << ans << endl;
    }
    return 0;
}