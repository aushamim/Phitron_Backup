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
        cout << (2 * x >= n ? "YES" : "NO") << endl;
    }
    return 0;
}