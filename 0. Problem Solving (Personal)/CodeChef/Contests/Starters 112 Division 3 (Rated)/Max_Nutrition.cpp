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
        int arr1[n], arr2[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
            mp[arr1[i]] = INT_MIN;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
            mp[arr1[i]] = max(0, max(mp[arr1[i]], arr2[i]));
        }

        int ans = 0;
        for (auto [x, y] : mp)
        {
            ans += y;
        }
        cout << ans << endl;
    }
    return 0;
}