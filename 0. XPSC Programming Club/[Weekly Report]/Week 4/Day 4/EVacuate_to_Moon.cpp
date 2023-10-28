#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, h;
        cin >> n >> m >> h;
        long long cr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> cr[i];
        }
        long long pr[m];
        for (int i = 0; i < m; i++)
        {
            cin >> pr[i];
        }

        sort(cr, cr + n, greater<int>());
        sort(pr, pr + m, greater<int>());

        long long ans = 0;
        for (int i = 0; i < n && i < m; i++)
        {
            ans += min(pr[i] * h, cr[i]);
        }
        cout << ans << endl;
    }
    return 0;
}