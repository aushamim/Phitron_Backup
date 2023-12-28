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
        vector<ll> v1, v2;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (i % 2 == 0)
            {
                v1.push_back(x);
            }
            else
            {
                v2.push_back(x);
            }
        }

        ll rs1[v1.size() + 1] = {0}, rs2[v2.size() + 1] = {0};
        for (int i = 0; i < v1.size() + 1; i++)
        {
            rs1[i + 1] = rs1[i] + v1[i];
        }
        for (int i = 0; i < v2.size() + 1; i++)
        {
            rs2[i + 1] = rs2[i] + v2[i];
        }

        map<ll, ll> mp;
        for (int i = 1; i < v1.size() + 1; i++)
        {
            mp[rs1[i]]++;
        }
        for (int i = 1; i < v2.size() + 1; i++)
        {
            mp[rs2[i]]++;
        }

        bool flag = false;
        for (auto [x, y] : mp)
        {
            if (y == 2)
            {
                flag = true;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}