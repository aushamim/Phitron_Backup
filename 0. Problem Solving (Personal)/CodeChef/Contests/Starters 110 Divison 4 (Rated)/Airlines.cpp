#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if (x % 100 == 0)
        {
            cout << max(0, (x / 100) - n) << endl;
        }
        else
        {
            cout << max(0, (x / 100) - n + 1) << endl;
        }
    }
    return 0;
}