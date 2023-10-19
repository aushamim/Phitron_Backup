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
    int k;
    cin >> k;

    int i = 0, j = 0, sum = 0;
    while (j < n)
    {
        sum += arr[j];
        if (j >= k - 1)
        {
            // cout << sum << endl;
            // sum -= arr[i];
            i++;
        }
        j++;
    }
    return 0;
}