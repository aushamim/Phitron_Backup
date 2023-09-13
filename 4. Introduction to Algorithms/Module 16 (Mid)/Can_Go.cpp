#include <bits/stdc++.h>
#define pr pair<int, int>
using namespace std;

const int N = 1e5 + 5;
vector<pr> v[N];
int dis[N];
bool vis[N];

void dijkstra(int src)
{
    priority_queue<pr, vector<pr>, greater<pr>> pq;

    pq.push({0, src});
    dis[src] = 0;
    while (!pq.empty())
    {
        pr parent = pq.top();
        pq.pop();
        int parentNode = parent.second;
        if (vis[parentNode])
        {
            continue;
        }
        vis[parentNode] = true;
        long long int parentCost = parent.first;
        long long int s = v[parentNode].size();
        for (int i = 0; i < v[parentNode].size(); i++)
        {
            pr child = v[parentNode][i];
            long long int childNode = child.first;
            long long int childCost = child.second;
            if (parentCost + childCost < dis[childNode])
            {
                dis[childNode] = parentCost + childCost;
                pq.push({dis[childNode], childNode});
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
        int a, b, w;
        cin >> a >> b >> w;
        v[a].push_back({b, w});
    }

    for (int i = 1; i <= n; i++)
    {
        dis[i] = INT_MAX;
    }

    int src;
    cin >> src;
    dijkstra(src);

    int t;
    cin >> t;
    while (t--)
    {
        long long int d, dw;
        cin >> d >> dw;
        cout << (dis[d] <= dw ? "YES" : "NO") << endl;
    }

    return 0;
}