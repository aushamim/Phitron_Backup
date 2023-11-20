#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> v1, v2;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v1.push_back({x, i});
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v2.push_back({x, i});
        }

        sort(v1.begin(), v1.end(), cmp);
        sort(v2.begin(), v2.end(), cmp);

        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            ans[v1[i].second] = v2[i].first;
        }

        for (auto val : ans)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}