#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int t = 0; t < q; t++)
    {
        int l = 0, r = 0;
        long long int sum = 0;
        cin >> l >> r;
        l--;
        r--;
        while (l <= r)
        {
            l != r ? sum += arr[l] + arr[r] : sum += arr[l];
            l++;
            r--;
        }
        cout << sum << endl;
    }
    return 0;
}