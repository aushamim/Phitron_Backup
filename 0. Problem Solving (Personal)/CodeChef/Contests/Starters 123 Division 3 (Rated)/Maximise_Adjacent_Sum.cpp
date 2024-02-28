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

        int tmp = arr[0];
        for (int i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = tmp;

        int total = 0;
        for (int i = 0; i < n - 1; i++)
        {
            total += arr[i] + arr[i + 1];
        }
        cout << total << endl;
    }
    return 0;
}