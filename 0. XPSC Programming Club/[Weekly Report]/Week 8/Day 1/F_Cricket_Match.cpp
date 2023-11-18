#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        cout << (m * 6 * 6 >= n ? "YES" : "NO") << endl;
    }
    return 0;
}