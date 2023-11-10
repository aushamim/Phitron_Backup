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
        string s;
        cin >> s;
        unordered_map<char, int> m;
        for (int i = 0; i < n; i++)
        {
            m[s[i]]++;
        }

        int od = 0, ev = 0;
        for (auto it : m)
        {
            if (it.second % 2 != 0)
            {
                od++;
            }
            else
            {
                ev++;
            }
        }

        bool flag = true;
        if ((n % 2 && od > 1) || (n % 2 == 0 && od))
        {
            flag = 0;
        }

        if (!flag)
        {
            cout << 0 << endl;
        }
        else
        {
            if (n % 2 == 0 || (n % 2 and m.size() >= 2))
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
    }
    return 0;
}