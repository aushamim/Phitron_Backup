#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], a2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a2[i] = a[i];
        }
        sort(a2, a2 + n, greater<int>());
        int fst = 0, sfst = 0;
        for (int i = 0; i < n; i++)
        {
            fst = a2[0];
            sfst = a2[1];
        }
        int ans1 = distance(a, find(a, a + n, fst));
        int ans2 = distance(a, find(a, a + n, sfst));
        if (ans1 < ans2)
        {
            cout << ans1 << " " << ans2 << endl;
        }
        else
        {
            cout << ans2 << " " << ans1 << endl;
        }
    }

    return 0;
}