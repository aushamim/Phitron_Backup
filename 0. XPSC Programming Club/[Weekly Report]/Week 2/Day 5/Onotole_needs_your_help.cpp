#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    map<int, int> mp;
    while (t--)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second == 1)
        {
            cout << it->first << endl;
            break;
        }
    }
    return 0;
}