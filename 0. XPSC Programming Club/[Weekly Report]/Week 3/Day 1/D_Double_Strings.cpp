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

        vector<string> v;
        map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
            mp.insert({s, 1});
        }

        int ans[n] = {0};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < v[i].size(); j++)
            {
                string s1 = v[i].substr(0, j);
                string s2 = v[i].substr(j, v[i].size() - j);

                if (mp.find(s1) != mp.end() && mp.find(s2) != mp.end())
                {
                    ans[i] = 1;
                    break;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}