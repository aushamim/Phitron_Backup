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
        double arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int ans = -1;
        int l = 0, r = INT_MAX;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            double prod = 1;
            for (int i = 0; i < n; i++)
            {
                prod *= (arr[i] / mid);
            }

            if (fabs(prod - 1) < 1e-15)
            {
                ans = mid;
                break;
            }
            else if (prod > 1)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        cout << (ans == -1 ? "NO" : "YES") << endl;
    }
    return 0;
}