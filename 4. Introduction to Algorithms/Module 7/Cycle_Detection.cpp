#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
vector<int> adj[N];
vector<int> components[N];
bool visited[N];

bool dfs(int u, int p = -1)
{
    bool cycle = false;
    visited[u] = true;
    for (int v : adj[u])
    {
        if (v == p)
        {
            continue;
        }
        if (visited[v])
        {
            return true;
        }
        cycle |= dfs(v, u);
    }
    return cycle;
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

    bool isCycle = false;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            isCycle |= dfs(i);
        }
    }

    if (isCycle)
    {
        cout << "Cycle Detected" << endl;
    }
    else
    {
        cout << "Cycle Not Detected" << endl;
    }

    return 0;
}