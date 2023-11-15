#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    long long ans = 0;
    ans += (n / a) * p;
    ans += (n / b) * q;

    long long same = n / (lcm(a, b));
    ans -= same * min(p, q);

    cout << ans << endl;
    return 0;
}