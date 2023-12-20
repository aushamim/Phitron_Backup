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
        for (auto c : s)
        {
            mp[c]++;
        }

        int count = 0;
        for (auto [x, y] : mp)
        {
            if ((x - 'A' + 1) <= y)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}