#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int arr[2][n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[0][i];
        i == 0 ? arr[1][i] = arr[0][i] : arr[1][i] = arr[0][i] + arr[1][i - 1];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[1][i] << " ";
    }
    return 0;
}