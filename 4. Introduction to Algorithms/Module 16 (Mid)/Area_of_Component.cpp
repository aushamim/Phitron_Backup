#include <bits/stdc++.h>
#define pr pair<int, int>
using namespace std;

int n, m;
const int N = 1005;
bool vis[N][N];
char a[N][N];
vector<pr> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool isValid(int cI, int cJ)
{
    if (cI >= 0 && cI < n && cJ >= 0 && cJ < m && a[cI][cJ] == '.')
        return true;
    else
        return false;
}

int dfs(int i, int j)
{
    vis[i][j] = true;
    int area = 1;
    for (int k = 0; k < 4; k++)
    {
        pr p = path[k];
        int ci = i + p.first;
        int cj = j + p.second;
        if (isValid(ci, cj) && !vis[ci][cj])
        {
            area += dfs(ci, cj);
        }
    }
    return area;
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int mArea = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == '.' && !vis[i][j])
            {
                int area = dfs(i, j);
                if (mArea == -1 || area < mArea)
                {
                    mArea = area;
                }
            }
        }
    }
    cout << mArea << endl;

    return 0;
}