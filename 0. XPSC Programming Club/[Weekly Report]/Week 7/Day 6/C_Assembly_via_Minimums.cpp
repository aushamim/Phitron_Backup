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
        int m = (n * (n - 1)) / 2;
        vector<int> a(n, 1000000000), b(m);

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        sort(b.begin(), b.end());

        int ind = 0, ia = 1, ib = n - 1;
        while (n - ia > 0)
        {
            a[ind] = b[ib - 1];
            ind++;
            ia++;
            ib += n - ia;
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}