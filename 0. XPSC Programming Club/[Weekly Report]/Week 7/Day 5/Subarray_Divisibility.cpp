#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long ans = 0;
    for (int i = 1; i <= n; i++)
    {
        long long sum = 0;
        list<long long> l;
        for (int j = 0; j < n; j++)
        {
            if (l.size() < i)
            {
                l.push_back(arr[j]);
                sum += arr[j];
            }
            else
            {
                if (sum % n == 0)
                {
                    ans++;
                }
                sum -= l.front();
                sum += arr[j];
                l.pop_front();
                l.push_back(arr[j]);
            }
        }
        if (sum % n == 0)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}