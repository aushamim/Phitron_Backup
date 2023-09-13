#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
vector<int> adj[N];
vector<int> components[N];
bool visited[N];

void dfs(int u, int cc)
{
    visited[u] = true;
    for (int v : adj[u])
    {
        if (!visited[v])
        {
            components[cc].push_back(v);
            dfs(v, cc);
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

    int cc = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            components[cc].push_back(i);
            dfs(i, cc);
            cc++;
        }
    }

    cout << "Number of connected components: " << cc << endl;

    for (int i = 0; i < cc; i++)
    {
        cout << "Component " << i + 1 << ": ";
        for (int comp : components[i])
        {
            cout << comp << " ";
        }
        cout << endl;
    }

    return 0;
}