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

        vector<string> s;
        for (int i = 0; i < n; i++)
        {
            string is;
            cin >> is;
            s.push_back(is);
        }

        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int sum = 0;
                for (int k = 0; k < m; k++)
                {
                    sum += abs((s[i][k] - 'a') - (s[j][k] - 'a'));
                }
                mn = min(mn, sum);
            }
        }

        cout << mn << endl;
    }
    return 0;
}