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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n, greater<int>());

        vector<pair<int, int>> v;
        int val = a[0], frq = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == val)
            {
                frq++;
            }
            else
            {
                v.push_back({val, frq});
                val = a[i];
                frq = 1;
            }
        }
        v.push_back({val, frq});

        int ans = v.begin()->second;
        for (auto it = v.begin() + 1; it != v.end(); it++)
        {
            if (it->first == (it - 1)->first - 1)
            {
                ans += max(0, it->second - (it - 1)->second);
            }
            else
            {
                ans += it->second;
            }
        }

        cout << ans << endl;
    }
    return 0;
}