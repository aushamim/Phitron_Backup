#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m = INT_MAX, sum = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
            m = min(m, x);
        }
        cout << sum - (m * n) << endl;
    }
    return 0;
}