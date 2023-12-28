#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x, sum = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            sum += x;
        }
        ll rt = sqrt(sum);
        cout << (rt * rt == sum ? "YES" : "NO") << endl;
    }
    return 0;
}