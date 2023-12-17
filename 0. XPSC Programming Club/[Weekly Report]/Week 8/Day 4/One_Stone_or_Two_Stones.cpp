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
        if (x == y)
        {
            cout << (x % 2 == 0 ? "CHEFINA" : "CHEF") << endl;
        }
        else if (x > y && abs(x - y) >= 2)
        {
            cout << "CHEF" << endl;
        }
        else if (x < y && abs(x - y) >= 2)
        {
            cout << "CHEFINA" << endl;
        }
        else if (x > y)
        {
            cout << (x % 2 == 0 ? "CHEF" : "CHEFINA") << endl;
        }
        else
        {
            cout << (y % 2 == 0 ? "CHEF" : "CHEFINA") << endl;
        }
    }
    return 0;
}