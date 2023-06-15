#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    while (q--)
    {
        int x, l, r, mid, flag = 0;
        cin >> x;
        l = 0;
        r = n - 1;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (a[mid] == x)
            {
                flag = 1;
                break;
            }
            else
            {
                if (a[mid] > x)
                {
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
        }
        cout << (flag == 1 ? "found" : "not found") << endl;
    }
    return 0;
}