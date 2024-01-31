#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        for (int i = 1; i <= k; i++)
        {
            cout << i << " ";
        }

        int i = k + 2;
        while (i <= n)
        {
            cout << i << " ";
            i += 2;
        }

        int j = k + 1;
        while (j <= n)
        {
            cout << j << " ";
            j += 2;
        }

        cout << endl;
    }
    return 0;
}