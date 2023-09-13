#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adj[N];
bool visited[N];

void dfs(int u)
{
    cout << "Visiting Node : " << u << endl;
    visited[u] = true;
    for (int v : adj[u])
    {
        if (!visited[v])
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
        adj[v].push_back(u);
    }

    dfs(1);

    // cout << endl
    //      << "Adjancey Matrix" << endl;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << "List " << i << " : ";
    //     for (int j : adj[i])
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}

/* Input
10 9
1 2
1 3
1 10
2 4
3 5
3 6
4 7
4 8
6 9
*/