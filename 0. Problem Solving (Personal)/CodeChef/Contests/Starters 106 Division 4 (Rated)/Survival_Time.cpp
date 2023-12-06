#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, d;
        cin >> n >> x >> d;
        int day = n / (x * 5);
        cout << day + d << endl;
    }
    return 0;
}