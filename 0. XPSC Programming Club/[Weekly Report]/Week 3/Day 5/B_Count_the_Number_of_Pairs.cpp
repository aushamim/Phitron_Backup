#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;

        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }

        int count = 0;
        for (char c = 'a'; c <= 'z'; c++)
        {
            int mn = min(mp[c], mp['A' + (c - 'a')]);
            count += mn;
            mp[c] -= mn;
            mp['A' + (c - 'a')] -= mn;
        }
        for (char c = 'a'; c <= 'z'; c++)
        {
            int mx = max(mp[c], mp['A' + (c - 'a')]);
            int mn = min(k, mx / 2);
            count += mn;
            k -= mn;
        }
        cout << count << endl;
    }
    return 0;
}