#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];
vector<int> vc;
bool vs[N];

void bfs(int i, int tr)
{
    queue<pair<int, int>> q;
    q.push({i, 0});
    vs[i] = true;

    while (!q.empty())
    {
        int pn = q.front().first;
        int level = q.front().second;
        q.pop();

        if (level == tr)
        {
            vc.push_back(pn);
        }

        for (int cn : adj[pn])
        {
            if (!vs[cn])
            {
                q.push({cn, level + 1});
                vs[cn] = true;
            }
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

    int a;
    cin >> a;
    for (int i = 0; i <= n; i++)
    {
        vs[i] = false;
    }

    bfs(0, a);

    sort(vc.begin(), vc.end());

    if (vc.empty())
    {
        cout << "-1" << endl;
    }
    else
    {
        for (int y : vc)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}
