#include <bits/stdc++.h>
using namespace std;

const int N = 21;
vector<int> adj[N];

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

    int x;
    cin >> x;
    cout << adj[x].size() << endl;
    return 0;
}