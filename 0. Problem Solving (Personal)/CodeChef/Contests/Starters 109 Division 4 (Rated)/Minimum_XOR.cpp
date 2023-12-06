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
        long long xr = 0;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            xr ^= arr[i];
        }

        long long minXr = xr;
        for (int i = 0; i < n; i++)
        {
            long long chk = xr ^ arr[i];

            minXr = min(minXr, chk);
        }
        cout << minXr << endl;
    }
    return 0;
}