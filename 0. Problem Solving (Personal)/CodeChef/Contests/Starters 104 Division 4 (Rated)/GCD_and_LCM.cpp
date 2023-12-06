#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;

        int sum = INT_MAX;
        for (int i = 0; i < k; i++)
        {
            if (x == y)
            {
                sum = min(sum, x + y);
                break;
            }
            else if (x > y)
            {
                x = __gcd(x, y);
                y = lcm(x, y);
            }
            else
            {
                y = __gcd(x, y);
                x = lcm(x, y);
            }
            sum = min(sum, x + y);
        }
        cout << sum << endl;
    }
    return 0;
}