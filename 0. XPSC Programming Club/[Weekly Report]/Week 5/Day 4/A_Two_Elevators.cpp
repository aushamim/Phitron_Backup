#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (abs(a - 1) == (abs(b - c) + c - 1))
        {
            cout << 3 << endl;
        }
        else if (abs(a - 1) < (abs(b - c) + c - 1))
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    return 0;
}