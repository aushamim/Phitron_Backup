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

        vector<int> v;
        int chk = -1;
        bool same = true;
        for (auto [x, y] : mp)
        {
            cout << x << " " << y << endl;
            if (chk == -1)
            {
                chk = y;
            }
            else
            {
                if (y != chk)
                {
                    same = false;
                }
            }
            v.push_back(y);
        }

        if (same)
        {
            cout << n % 2 << endl;
        }
        else
        {
            sort(v.begin(), v.end(), greater<int>());

            for (int i = 0; i < v.size(); i++)
            {
                if (v[i] == 0)
                {
                    continue;
                }
                for (int j = i + 1; j < v.size(); j++)
                {
                    int mn = min(v[i], v[j]);
                    v[i] -= mn;
                    v[j] -= mn;
                }
            }

            int count = 0;
            for (auto val : v)
            {
                count += val;
            }
            cout << count << endl;
        }
    }
    return 0;
}