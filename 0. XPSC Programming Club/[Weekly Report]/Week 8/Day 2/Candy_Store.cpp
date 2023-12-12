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
        cout << (y < x ? y : x + ((y - x) * 2)) << endl;
    }
    return 0;
}