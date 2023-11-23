#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 6;
vector<long long> v[N], leafs;

void dfs(int c, int p)
{
    bool chk = false;
    for (auto i : v[c])
    {
        if (i == p)
        {
            continue;
        }
        chk = true;
        dfs(i, c);
        leafs[c] += leafs[i];
    }
    if (!chk)
    {
        leafs[c] = 1;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 0; i <= n; i++)
        {
            v[i].clear();
        }
        leafs.assign(n + 2, 0);

        for (int i = 1; i <= n - 1; i++)
        {
            int a, b;
            cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        dfs(1, -1);

        int q;
        cin >> q;
        while (q--)
        {
            int x, y;
            cin >> x >> y;
            long long ans = leafs[x] * leafs[y];
            cout << ans << endl;
        }
    }
    return 0;
}