#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int arr1[n], arr2[m];
        unordered_map<int, int> mpa, mpb;
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
            mpa[arr1[i]]++;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
            mpb[arr2[i]]++;
        }

        int chk1 = 0, chk2 = 0;
        bool flag = true;
        for (int i = 1; i <= k; i++)
        {
            flag = true;
            if (mpa[i])
            {
                flag = false;
                chk1++;
            }
            if (mpb[i])
            {
                flag = false;
                chk2++;
            }
            if (flag)
            {
                cout << "NO" << endl;
                break;
            }
        }

        if (!flag)
        {
            cout << (chk1 >= k / 2 && chk2 >= k / 2 ? "YES" : "NO") << endl;
        }
    }
    return 0;
}