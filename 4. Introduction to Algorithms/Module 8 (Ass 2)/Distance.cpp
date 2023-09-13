#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];

int bfs(int s, int d)
{
    queue<int> q;
    vector<int> level(N, -1);

    q.push(s);
    level[s] = 0;

    while (!q.empty())
    {
        int pn = q.front();
        q.pop();

        for (int cn : adj[pn])
        {
            if (level[cn] == -1)
            {
                level[cn] = level[pn] + 1;
                q.push(cn);
            }
        }
    }
    return level[d];
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

    int q;
    cin >> q;
    while (q--)
    {
        int s, d;
        cin >> s >> d;

        if (s == d)
        {
            cout << 0 << endl;
            continue;
        }

        int distance = bfs(s, d);

        if (distance == -1)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << distance << endl;
        }
    }

    return 0;
}
