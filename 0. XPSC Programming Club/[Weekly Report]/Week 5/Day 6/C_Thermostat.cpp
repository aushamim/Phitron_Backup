#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, x, a, b;
        cin >> l >> r >> x >> a >> b;

        if (a == b)
        {
            cout << 0 << endl;
        }
        else if (abs(b - a) >= x)
        {
            cout << 1 << endl;
        }
        else if (b < a)
        {
            if ((a + x) <= r || (b - x) >= l)
            {
                cout << 2 << endl;
            }
            else if ((a - x) >= l && (r - b) >= x)
            {
                cout << 3 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            if ((b + x) <= r || (a - x) >= l)
            {
                cout << 2 << endl;
            }
            else if ((a + x) <= r && (b - l) >= x)
            {
                cout << 3 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}