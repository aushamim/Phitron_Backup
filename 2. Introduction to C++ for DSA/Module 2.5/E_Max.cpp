#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    long long int arr[n], max = INT_MIN;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    cout << max;

    return 0;
}