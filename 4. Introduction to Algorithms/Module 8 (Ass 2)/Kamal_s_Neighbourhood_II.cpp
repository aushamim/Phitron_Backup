#include <bits/stdc++.h>
using namespace std;

const int N = 21;
vector<int> adj[N];
bool vs[N];

void dfs(int u)
{
    vs[u] = true;
    for (int v : adj[u])
    {
        if (!vs[v])
        {
            dfs(v);
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
    }

    int x;
    cin >> x;
    dfs(x);

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (vs[i])
        {
            count++;
        }
    }
    cout << count - 1 << endl;
    return 0;
}
