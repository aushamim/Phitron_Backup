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

        sort(arr, arr + n, greater<int>());

        int sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            sum += arr[i];
        }
        cout << sum << endl;
    }
    return 0;
}