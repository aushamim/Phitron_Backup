#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        if (x == 0)
        {
            for (int k = 1; k <= n; ++k)
            {
                cout << k << " ";
            }
            cout << endl;
            continue;
        }

        if (n - x <= 1)
        {
            cout << "-1" << endl;
            continue;
        }

        int a = n - 1 - x;
        x = n + 1 - a;

        cout << x << " ";
        int count = 1;

        for (int j = 1; j < n; ++j)
        {
            if (j == x)
            {
                count += 1;
            }
            cout << count << " ";
            count++;
        }

        cout << endl;
    }

    return 0;
}