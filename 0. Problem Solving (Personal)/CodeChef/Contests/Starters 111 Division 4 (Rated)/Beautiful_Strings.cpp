#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll M = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        map<char, ll> mp;
        for (auto c : s)
        {
            mp[c]++;
        }

        ll ans = 1;
        for (auto [x, y] : mp)
        {
            ans *= y + 1;
            ans %= M;
        }
        cout << (ans - 1) % M << endl;
    }
    return 0;
}