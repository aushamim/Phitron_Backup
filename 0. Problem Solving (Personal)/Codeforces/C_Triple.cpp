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

        int flag = 0;
        for (int i = 0; i < n - 2; i++)
        {
            if (arr[i] == arr[i + 1] && arr[i] == arr[i + 2])
            {
                cout << arr[i] << endl;
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}