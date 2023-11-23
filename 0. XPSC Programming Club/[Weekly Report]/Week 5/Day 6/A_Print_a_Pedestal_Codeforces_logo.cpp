#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int h1, h2, h3;
        for (int i = 1; i <= n; i++)
        {
            h2 = i;
            int x = n - h2;

            h1 = x % 2 == 0 ? h1 = (x / 2) + 1 : (x + 1) / 2;
            h3 = n - h1 - h2;

            if (h1 > 0 && h2 > 0 && h3 > 0 && h1 < h2 && h1 > h3)
            {
                break;
            }
        }

        cout << h1 << " " << h2 << " " << h3 << endl;
    }
    return 0;
}