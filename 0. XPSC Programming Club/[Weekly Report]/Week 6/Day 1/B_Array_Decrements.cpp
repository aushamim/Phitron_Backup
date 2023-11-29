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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        bool flag = false;
        int d = -1, zd = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                flag = true;
                break;
            }
            if (b[i] != 0)
            {
                if (d == -1)
                {
                    d = a[i] - b[i];
                }
                else if (a[i] - b[i] != d)
                {
                    flag = true;
                    break;
                }
            }
            else
            {
                zd = max(zd, a[i] - b[i]);
            }
        }

        if (!flag && (d == -1 || zd <= d))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}