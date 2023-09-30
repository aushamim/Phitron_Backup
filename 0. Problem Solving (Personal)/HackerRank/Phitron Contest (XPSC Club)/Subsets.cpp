#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n], s = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s += a[i];
        }

        int diff;
        cin >> diff;

        if (diff > s || (diff + s) % 2 != 0)
        {
            cout << "0" << endl;
            continue;
        }

        int s1 = (diff + s) / 2;
        vector<vector<int>> dp(n + 1, vector<int>(s1 + 1, 0));

        dp[0][0] = 1;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= s1; j++)
            {
                dp[i][j] = dp[i - 1][j];
                if (a[i - 1] <= j)
                {
                    dp[i][j] = (dp[i][j] + dp[i - 1][j - a[i - 1]]) % MOD;
                }
            }
        }
        cout << dp[n][s1] << endl;
    }

    return 0;
}