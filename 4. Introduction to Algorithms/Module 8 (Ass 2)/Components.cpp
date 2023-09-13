#include <bits/stdc++.h>
using namespace std;

const int N = 1001;
vector<int> adj[N];
vector<vector<int>> vc;
vector<int> vd;
bool vs[N];

void dfs(int cn, vector<int> &vd)
{
    vd.push_back(cn);
    vs[cn] = true;
    for (int cn : adj[cn])
    {
        if (!vs[cn])
        {
            dfs(cn, vd);
        }
    }
}

int main()
{

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 1; i <= 1000; i++)
    {
        if (!vs[i])
        {
            vd.clear();
            dfs(i, vd);
            if (vd.size() == 1)
            {
                continue;
            }
            vc.push_back(vd);
        }
    }

    vector<int> sz;
    for (auto cmp : vc)
    {
        sz.push_back(cmp.size());
    }

    sort(sz.begin(), sz.end());

    for (int cnt : sz)
    {
        cout << cnt << " ";
    }
    return 0;
}