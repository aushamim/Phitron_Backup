#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long arr[n], arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr2[i] = arr[i];
    }

    sort(arr2, arr2 + n);

    long long preSum[n + 1], preSum2[n + 1];
    preSum[0] = 0;
    for (int i = 0; i < n; i++)
    {
        preSum[i] = preSum[i - 1] + arr[i];
    }

    preSum2[0] = 0;
    for (int i = 0; i < n; i++)
    {
        preSum2[i] = preSum2[i - 1] + arr2[i];
    }

    int t;
    cin >> t;
    while (t--)
    {
        int k, l, r;
        cin >> k >> l >> r;

        long long sum = 0;
        if (k == 1)
        {
            cout << preSum[r - 1] - preSum[l - 1 - 1] << endl;
        }
        else
        {
            cout << preSum2[r - 1] - preSum2[l - 1 - 1] << endl;
        }
    }
    return 0;
}