#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;

        bool ans = true;
        long long g = __gcd(a, b);
        while (b > 1)
        {
            if (g == 1)
            {
                ans = false;
                break;
            }
            b = b / g;
            g = __gcd(b, g);
        }

        cout << (ans ? "Yes" : "No") << endl;
    }
    return 0;
}