#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, sum = 0;
        cin >> a >> b;
        sum = (abs(b - a) + 1) * (a + b) / 2;
        cout << sum << endl;
    }
    return 0;
}