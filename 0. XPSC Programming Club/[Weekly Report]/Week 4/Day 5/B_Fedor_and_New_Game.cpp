#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int arr[m + 1];
    for (int i = 0; i < m + 1; i++)
    {
        cin >> arr[i];
    }

    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            int mask = 1 << j;
            if ((arr[m] & mask) != (arr[i] & mask))
            {
                count++;
            }
        }
        if (count <= k)
        {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
