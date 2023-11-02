#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    return (n <= 1 ? 1 : n * fact(n - 1));
}
int nPr(int n, int r)
{
    return fact(n) / fact(n - r);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << nPr(n, 2) << endl;
    }
    return 0;
}