#include <bits/stdc++.h>
using namespace std;

long long int calc(int x, int n, int z)
{
    long long int sum = 1;
    for (int i = 0; i < z; i++)
    {
        sum *= x;
    }
    if (z > n)
    {
        return 0;
    }
    else
    {
        return sum + calc(x, n, z + 2);
    }
}
int main()
{
    int x, n;
    cin >> x >> n;
    long long int sum = 0;
    sum = calc(x, n, 2);
    cout << sum << endl;
    return 0;
}