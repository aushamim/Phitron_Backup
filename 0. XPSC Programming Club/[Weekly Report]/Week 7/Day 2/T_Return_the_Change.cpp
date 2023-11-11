#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        if (x % 10 == 0)
        {
            cout << 100 - x << endl;
        }
        else
        {
            float dec = x % 10;
            if (dec < 5)
            {
                cout << 100 - ((x / 10) * 10) << endl;
            }
            else
            {
                cout << 100 - (((x / 10) + 1) * 10) << endl;
            }
        }
    }
    return 0;
}