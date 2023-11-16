#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        long long arr1[n], arr2[m];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }

        for (int i = 0; i < m; i++)
        {
            sort(arr1, arr1 + n);
            arr1[0] = arr2[i];
        }

        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr1[i];
        }

        cout << sum << endl;
    }
    return 0;
}