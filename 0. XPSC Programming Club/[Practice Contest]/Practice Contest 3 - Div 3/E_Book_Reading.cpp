#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;

        long long sum = 0;
        while (n > 0)
        {
            if (n % m == 0)
            {
                sum += n % 10;
                n = n / 2;
            }
            else
            {
                n--;
            }
        }
        cout << sum << endl;
    }
    return 0;
}