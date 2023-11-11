#include <bits/stdc++.h>
using namespace std;
const int N = 1e6;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x;
        cin >> x;

        if (x == 1)
        {
            cout << -1 << endl;
        }
        else if (x <= N)
        {
            cout << x - 1 << " " << 1 << " " << 1 << endl;
        }
        else if (x % N == 0)
        {
            cout << x / N - 1 << " " << N << " " << N << endl;
        }
        else
        {
            cout << x / N << " " << N << " " << x % N << endl;
        }
    }
    return 0;
}