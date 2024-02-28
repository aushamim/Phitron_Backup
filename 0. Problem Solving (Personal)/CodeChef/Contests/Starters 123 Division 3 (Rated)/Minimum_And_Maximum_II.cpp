#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll sum = n * (n + 1) / 2;
        sum -= 1;
        sum += n;
        cout << sum << endl;
    }
    return 0;
}