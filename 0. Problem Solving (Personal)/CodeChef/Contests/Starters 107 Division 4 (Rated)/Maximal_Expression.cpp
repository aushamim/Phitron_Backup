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

        if (n == 0)
        {
            cout << 0 << endl;
        }
        else if (k == 1)
        {
            cout << 0 << endl;
        }
        else if (k == 2)
        {
            if (n % 2 == 0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else if (k >= n)
        {
            cout << n / 2 << endl;
        }
        else
        {
            int ans = 0, prev = 0;
            for (int i = n / 2; i >= 0; i--)
            {
                if (((i % k) * ((n - i) % k)) >= prev)
                {
                    prev = ((i % k) * ((n - i) % k));
                    ans = i;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}