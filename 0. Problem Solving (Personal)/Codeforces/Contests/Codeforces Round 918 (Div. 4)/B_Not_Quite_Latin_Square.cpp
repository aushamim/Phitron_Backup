#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        map<char, int> mp;
        for (int i = 0; i < 9; i++)
        {
            char x;
            cin >> x;
            if (x != '?')
            {
                mp[x]++;
            }
        }
        for (auto [x, y] : mp)
        {
            if (y == 2)
            {
                cout << x << endl;
                break;
            }
        }
    }
    return 0;
}