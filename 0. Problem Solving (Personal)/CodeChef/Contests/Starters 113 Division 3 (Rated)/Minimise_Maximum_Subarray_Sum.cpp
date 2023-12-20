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

        int ny = y % 2;

        if (x == 1 && ny == 1)
        {
            cout << 1 << endl;
        }
        else if (x == y)
        {
            cout << 1 << endl;
        }
        else if (x == y * 2)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << x - 2 << endl;
        }
    }
    return 0;
}