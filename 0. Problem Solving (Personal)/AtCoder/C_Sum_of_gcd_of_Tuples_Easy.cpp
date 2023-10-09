#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;

    int sum = 0;
    for (int a = 1; a <= k; a++)
    {
        for (int b = 1; b <= k; b++)
        {
            for (int c = 1; c <= k; c++)
            {
                sum += gcd(a, gcd(b, c));
            }
        }
    }

    cout << sum << endl;
    return 0;
}