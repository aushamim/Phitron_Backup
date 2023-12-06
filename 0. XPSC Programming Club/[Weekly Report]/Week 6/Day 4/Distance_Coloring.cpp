#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        long long ans = 1;
        for (int i = 0; i < n; i++)
        {
            ans = (ans * k) % (long long)(1e9 + 7);
            if (k > 1)
            {
                k--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}