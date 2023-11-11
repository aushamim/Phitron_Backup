#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int p1 = x + y * 2;
        int p2 = x * 3 + y;
        int p3 = x * 5;

        cout << min(p1, min(p2, p3)) << endl;
    }
    return 0;
}