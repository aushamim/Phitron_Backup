#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    map<string, int> mp;
    for (int i = n - 1; i >= 0; i--)
    {
        if (mp[v[i]] < 1)
        {
            cout << v[i].substr(v[i].size() - 2, 2);
            mp[v[i]]++;
        }
    }
    return 0;
}