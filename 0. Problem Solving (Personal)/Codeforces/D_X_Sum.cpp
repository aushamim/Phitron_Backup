#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }

        long long sum = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                long long xSum = a[i][j];

                int row = i - 1, col = j - 1;
                while (row >= 0 && col >= 0)
                {
                    xSum += a[row][col];
                    row--;
                    col--;
                }

                row = i - 1, col = j + 1;
                while (row >= 0 && col < m)
                {
                    xSum += a[row][col];
                    row--;
                    col++;
                }

                row = i + 1, col = j - 1;
                while (row < n && col >= 0)
                {
                    xSum += a[row][col];
                    row++;
                    col--;
                }

                row = i + 1, col = j + 1;
                while (row < n && col < m)
                {
                    xSum += a[row][col];
                    row++;
                    col++;
                }

                sum = max(sum, xSum);
            }
        }
        cout << sum << endl;
    }
    return 0;
}