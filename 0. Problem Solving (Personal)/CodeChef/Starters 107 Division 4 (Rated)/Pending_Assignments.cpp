#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        cout << (x * y <= z * 24 * 60 ? "YES" : "NO") << endl;
    }
    return 0;
}