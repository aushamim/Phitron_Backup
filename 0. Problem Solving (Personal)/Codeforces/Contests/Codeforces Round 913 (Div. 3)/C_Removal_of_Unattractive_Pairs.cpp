#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        map<char, int> mp;
        int mx = INT_MIN;
        for (auto c : s)
        {
            mp[c]++;
            mx = max(mx, mp[c]);
        }

        if (mx > n / 2)
        {
            cout << mx - (n - mx) << endl;
        }
        else
        {
            cout << (n % 2 == 0 ? 0 : 1) << endl;
        }
    }
    return 0;
}