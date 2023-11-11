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

        int m1, m2;
        m1 = arr[0];

        for (int i = 0; i < n; i++)
        {
            if (arr[i] < m1)
            {
                m2 = arr[i];
                break;
            }
        }

        cout << m1 + m2 << endl;
    }
    return 0;
}