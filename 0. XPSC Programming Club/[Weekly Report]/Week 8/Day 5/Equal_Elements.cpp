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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        int mx = INT_MIN;
        for (auto [x, y] : mp)
        {
            mx = max(mx, y);
        }
        cout << n - mx << endl;
    }
    return 0;
}