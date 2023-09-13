#include <bits/stdc++.h>
#define pi pair<int, int>
using namespace std;

vector<pi> path = {{-2, -1}, {-2, 1}, {-1, -2}, {-1, 2}, {1, -2}, {1, 2}, {2, -1}, {2, 1}};

const int N = 10005;
bool vis[N][N];

bool isValid(int cI, int cJ, int n, int m)
{
    if (cI >= 0 && cI < n && cJ >= 0 && cJ < m)
        return true;
    else
        return false;
}

int bfs(int n, int m, int ki, int kj, int qi, int qj)
{
    queue<pi> q;
    q.push({ki, kj});
    vis[ki][kj] = true;
    int step = 0;

    while (!q.empty())
    {
        int size = q.size();
        while (size--)
        {
            pi parent = q.front();
            int pI = parent.first;
            int pJ = parent.second;
            q.pop();

            if (pI == qi && pJ == qj)
                return step;

            for (int i = 0; i < 8; i++)
            {
                pi p = path[i];
                int cI = pI + p.first;
                int cJ = pJ + p.second;
                if (isValid(cI, cJ, n, m) && !vis[cI][cJ])
                {
                    vis[cI][cJ] = true;
                    q.push({cI, cJ});
                }
            }
        }

        step++;
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, ki, kj, qi, qj;
        cin >> n >> m >> ki >> kj >> qi >> qj;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                vis[i][j] = 0;
            }
        }

        int mnstp = bfs(n, m, ki, kj, qi, qj);
        cout << mnstp << endl;
    }

    return 0;
}