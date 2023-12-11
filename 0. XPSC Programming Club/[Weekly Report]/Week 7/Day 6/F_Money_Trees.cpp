#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr1[n], arr2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }

        ll curr = arr1[0], ans = 0, i = 1, j = 0;
        if (curr <= k)
        {
            ans = 1;
        }
        while (i < n)
        {
            if (arr2[i - 1] % arr2[i] == 0)
            {
                curr += arr1[i];
            }
            else
            {
                curr = arr1[i];
                j = i;
            }
            while (curr > k)
            {
                curr -= arr1[j++];
            }
            ans = max(ans, i - j + 1);
            i++;
        }

        cout << ans << endl;
    }
    return 0;
}