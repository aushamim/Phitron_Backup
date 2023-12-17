#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h, x, y;
        cin >> h >> x >> y;

        h -= y;
        int count = 1;
        while (h > 0)
        {
            h -= x;
            count++;
        }
        cout << count << endl;
    }
    return 0;
}