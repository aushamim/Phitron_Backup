#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int h;
        cin >> h;

        int l = 0, r = n - 1;
        auto a = lower_bound(arr, arr + n, h) - arr;
        auto b = upper_bound(arr, arr + n, h) - arr;

        if ((arr[a] == h && a > 0) || a > 0)
        {
            cout << arr[a - 1] << " ";
        }
        else
        {
            cout << "X ";
        }

        if (b != n)
        {
            cout << arr[b] << endl;
        }
        else
        {
            cout << "X" << endl;
        }
    }
    return 0;
}