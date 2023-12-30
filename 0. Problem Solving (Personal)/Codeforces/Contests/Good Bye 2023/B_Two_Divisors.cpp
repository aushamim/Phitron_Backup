#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if ((a * b) / __gcd(a, b) == b)
        {
            bool flag = true;
            for (int i = 2; i < b; i++)
            {
                if ((b % i == 0) || (i <= a && a % i == 0))
                {
                    cout << b * i << endl;
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                cout << b * b << endl;
            }
        }
        else
        {
            cout << (a * b) / __gcd(a, b) << endl;
        }
    }
    return 0;
}