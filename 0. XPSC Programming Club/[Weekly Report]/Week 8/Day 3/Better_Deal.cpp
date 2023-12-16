#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if ((100 - a) == (200 - 2 * b))
        {
            cout << "BOTH" << endl;
        }
        else
        {
            cout << ((100 - a) < (200 - 2 * b) ? "FIRST" : "SECOND") << endl;
        }
    }
    return 0;
}