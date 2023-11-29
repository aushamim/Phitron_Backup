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
        long long s[n], f[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> f[i];
        }

        long long prev = 0;
        for (int i = 0; i < n; i++)
        {
            if (prev > s[i])
            {
                cout << f[i] - prev << " ";
            }
            else
            {
                cout << f[i] - s[i] << " ";
            }
            prev = f[i];
        }
        cout << endl;
    }
    return 0;
}