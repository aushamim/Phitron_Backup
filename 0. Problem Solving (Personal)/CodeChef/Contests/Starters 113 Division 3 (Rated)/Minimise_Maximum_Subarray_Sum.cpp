#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double x, y;
        cin >> x >> y;
        cout << (y >= x ? 1 : max((x - 2 * y), ceil(x / (y + 1)))) << endl;
    }
    return 0;
}