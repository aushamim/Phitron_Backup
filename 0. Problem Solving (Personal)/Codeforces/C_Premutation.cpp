#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int ind[n][2];
        memset(ind, -1, sizeof ind);
        vector<int> v[n];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                int x;
                cin >> x;
                v[i].push_back(x);
                ind[x - 1][0] = ind[x - 1][0] == -1 ? j : min(ind[x - 1][0], j);
                ind[x - 1][1] = ind[x - 1][1] == -1 ? j : max(ind[x - 1][1], j);
            }
        }

        int ans[n];
        for (int i = 0; i < n; i++)
        {
            if (ind[i][0] == ind[i][1] && ind[i][0] == n - 2)
            {
                ans[n - 1] = i + 1;
            }
            else
            {
                ans[max(ind[i][0], ind[i][1])] = i + 1;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}