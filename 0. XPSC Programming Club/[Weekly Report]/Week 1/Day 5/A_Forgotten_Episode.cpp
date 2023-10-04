#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long arr[n], sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << ((double)n / 2) * (1 + (double)n) - sum << endl;
    return 0;
}