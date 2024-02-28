#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        long long sum = 0;
        if (n % 2 == 0)
        {
            n = n / 2;
            sum = n * (n + 1);
        }
        else
        {
            n = n / 2;
            sum = n * (n + 1) + n + 1;
        }
        cout << sum << endl;
    }
    return 0;
}
