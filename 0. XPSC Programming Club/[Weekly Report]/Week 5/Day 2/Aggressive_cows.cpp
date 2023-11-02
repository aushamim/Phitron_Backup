#include <bits/stdc++.h>
using namespace std;

bool isValid(int arr[], int n, int mid, int c)
{
    int count = 1;
    int last = 0;

    for (int i = 1; i < n; i++)
    {
        if (abs(arr[i] - arr[last] >= mid))
        {
            count++;
            last = i;
        }
    }
    return (count >= c ? true : false);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        int ans;
        int l = 0, r = INT_MAX;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            if (isValid(arr, n, mid, c))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}