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
        if (n < 5)
        {
            cout << 0 << " " << n << endl;
        }
        else
        {
            cout << 1 << " " << n - 1 << endl;
        }
    }
    return 0;
}