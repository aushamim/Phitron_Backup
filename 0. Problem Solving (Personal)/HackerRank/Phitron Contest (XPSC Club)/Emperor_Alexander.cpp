#include <bits/stdc++.h>
using namespace std;

const int N = 10e5 + 5;
long long int parent[N];
long long int parentSize[N];

class Edge
{
public:
    int a, b, w;
    Edge(int a, int b, int w)
    {
        this->a = a;
        this->b = b;
        this->w = w;
    }
};

bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}

void dsu_set(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        parentSize[i] = 1;
    }
}

int dsu_find(int node)
{
    while (parent[node] != -1)
    {
        node = parent[node];
    }
    return node;
}

void dsu_union(int a, int b)
{
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);
    if (leaderA != leaderB)
    {
        if (parentSize[leaderA] > parentSize[leaderB])
        {
            parent[leaderB] = leaderA;
            parentSize[leaderA] += parentSize[leaderB];
        }
        else
        {
            parent[leaderA] = leaderB;
            parentSize[leaderB] += parentSize[leaderA];
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> v;
    dsu_set(n);

    while (e--)
    {
        long long int a, b, w;
        cin >> a >> b >> w;
        v.push_back(Edge(a, b, w));
    }

    sort(v.begin(), v.end(), cmp);

    int rmvroad = 0;
    long long cost = 0;

    for (Edge val : v)
    {
        int a = val.a;
        int b = val.b;
        int w = val.w;

        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);

        if (leaderA == leaderB)
        {
            rmvroad++;
        }
        else
        {
            dsu_union(a, b);
            cost += w;
        }
    }

    if (rmvroad >= n - 1)
    {
        cout << rmvroad << " " << cost << endl;
    }
    else
    {
        cout << "Not Possible" << endl;
    }

    return 0;
}