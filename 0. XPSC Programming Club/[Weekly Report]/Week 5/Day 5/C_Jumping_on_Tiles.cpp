#include <bits/stdc++.h>
using namespace std;

bool cmpGr(pair<char, int> a, pair<char, int> b)
{
    return a.first > b.first;
}
bool cmp(pair<char, int> a, pair<char, int> b)
{
    return a.first < b.first;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        vector<pair<char, int>> v;
        for (int i = 1; i < s.length() - 1; i++)
        {
            v.push_back({s[i], i});
        }

        if (s[0] > s[s.length() - 1])
        {
            sort(v.begin(), v.end(), cmpGr);
        }
        else
        {
            sort(v.begin(), v.end(), cmp);
        }

        int cost = 0;
        char crnt = s[0];
        vector<int> ans;
        ans.push_back(0);
        char mn = min(s[0], s[s.length() - 1]);
        char mx = max(s[0], s[s.length() - 1]);
        for (auto val : v)
        {
            if (val.first >= mn && val.first <= mx)
            {
                ans.push_back(val.second);
                cost += abs((crnt - 'a' + 1) - (val.first - 'a' + 1));
                crnt = val.first;
            }
        }
        ans.push_back(s.length() - 1);
        cost += abs((crnt - 'a' + 1) - (s[s.length() - 1] - 'a' + 1));

        cout << cost << " " << ans.size() << endl;
        for (auto val : ans)
        {
            cout << val + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}

// Accepts 🔥