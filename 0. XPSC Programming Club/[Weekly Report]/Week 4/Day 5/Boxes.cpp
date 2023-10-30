#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n, greater<long long>());

        long long bc = 1, xr = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (xr >= arr[i])
            {
                xr ^= arr[i];
            }
            else
            {
                xr = arr[i];
                bc++;
            }
        }
        cout << bc << endl;
    }
    return 0;
}
