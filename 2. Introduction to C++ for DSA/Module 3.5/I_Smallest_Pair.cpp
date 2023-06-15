#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int c = 0; c < t; c++)
    {
        int n = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int m = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                m = min((arr[i] + arr[j] + j - i), m);
            }
        }

        cout << m << endl;
    }
    return 0;
}