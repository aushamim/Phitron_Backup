#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, x;
    cin >> n >> x;
    long long arr[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long pSum[n + 1] = {0};
    for (int i = 1; i < n + 1; i++)
    {
        pSum[i] = arr[i - 1] + pSum[i - 1];
    }

    long long count = 0;
    map<long long, long long> mp;
    for (long long i = 0; i < n + 1; i++)
    {
        long long a = pSum[i] - x;
        if (mp[a])
        {
            count += mp[a];
        }
        mp[pSum[i]]++;
    }
    cout << count << endl;
    return 0;
}