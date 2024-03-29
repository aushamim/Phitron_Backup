#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adj[N];
bool visited[N];
int depth[N];
int height[N];

void dfs(int u)
{
    visited[u] = true;
    for (int v : adj[u])
    {
        if (!visited[v])
        {
            depth[v] = depth[u] + 1;
            dfs(v);
            height[u] = max(height[u], height[v] + 1);
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

    dfs(1);

    for (int i = 1; i <= n; i++)
    {
        cout << "Depth & Height of Node " << i << " : |" << depth[i] << " - " << height[i] << "|" << endl;
    }
    return 0;
}

/* Input
12 11
1 2
1 3
1 10
2 4
2 5
3 9
10 11
10 12
5 6
5 7
6 8
*/