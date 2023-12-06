#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if ((i + j + 2) % 2 != 0 && (arr[i] + arr[j]) % 2 == k)
                {
                    count++;
                }
            }
        }

        long long mod = 10e9 + 7;
        cout << count % mod << endl;
    }
    return 0;
}