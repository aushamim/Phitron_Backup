#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    long long int a[2][n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[0][i];
        i == 0 ? a[1][i] = a[0][i] : a[1][i] = a[0][i] + a[1][i - 1];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        cout << (l == 0 ? a[1][r] : a[1][r] - a[1][l - 1]) << endl;
    }
    return 0;
}