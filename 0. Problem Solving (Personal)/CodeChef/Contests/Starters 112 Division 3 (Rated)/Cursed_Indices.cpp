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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        long long arr2[n];
        arr2[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            arr2[i] = arr[i] + arr2[i - 1];
        }

        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr2[i] >= arr[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}