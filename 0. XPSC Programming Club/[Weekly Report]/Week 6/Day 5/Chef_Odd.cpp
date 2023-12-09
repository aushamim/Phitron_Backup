#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        if (n < 2 * k)
        {
            cout << "NO" << endl;
        }
        else if (n == 2 * k)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << ((((n / 2) + (n % 2)) - k) % 2 == 0 ? "YES" : "NO") << endl;
        }
    }
    return 0;
}