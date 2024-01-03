#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float n;
        cin >> n;
        cout << (n > 1 ? ceil(n / 2) : n) << " " << n << endl;
    }
    return 0;
}