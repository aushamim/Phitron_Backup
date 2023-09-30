#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
bool vis1[N], vis2[N];
int dis1[N], dis2[N];
vector<int> v[N];

void bfs1(int src)
{
    queue<int> q;
    q.push(src);
    vis1[src] = true;
    dis1[src] = 0;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        for (int i = 0; i < v[parent].size(); i++)
        {
            int child = v[parent][i];
            if (!vis1[child])
            {
                q.push(child);
                dis1[child] = dis1[parent] + 1;
                vis1[child] = true;
            }
        }
    }
}

void bfs2(int src)
{
    queue<int> q;
    q.push(src);
    vis2[src] = true;
    dis2[src] = 0;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        for (int i = 0; i < v[parent].size(); i++)
        {
            int child = v[parent][i];
            if (!vis2[child])
            {
                q.push(child);
                dis2[child] = dis2[parent] + 1;
                vis2[child] = true;
            }
        }
    }
}

int main()
{

    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int x, y, k;
    cin >> x >> y >> k;

    bfs1(x);
    bfs2(y);

    vector<int> maxPath1, maxPath2;
    for (int i = 1; i < n; i++)
    {
        if (dis1[i] > 0 && dis1[i] <= k)
        {
            maxPath1.push_back(i);
        }
        if (dis2[i] > 0 && dis2[i] <= k)
        {
            maxPath2.push_back(i);
        }
    }

    int flag = 0;
    for (int i = 0; i < maxPath1.size(); i++)
    {
        for (int j = 0; j < maxPath2.size(); j++)
        {
            if (maxPath1[i] == maxPath2[j])
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}