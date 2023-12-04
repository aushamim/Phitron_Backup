#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<char, int> a, pair<char, int> b)
{
    return a.first > b.first;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int p;
        cin >> s >> p;

        int cost = 0;
        vector<pair<char, int>> v;
        for (int i = 0; i < s.size(); i++)
        {
            v.push_back({s[i], i});
            cost += (s[i] - 'a') + 1;
        }

        sort(v.begin(), v.end(), cmp);

        int ind[s.size()] = {0}, i = 0;
        while (cost > p)
        {
            cost -= ((v[i].first - 'a') + 1);
            ind[v[i].second] = -1;
            i++;
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (ind[i] == 0)
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}