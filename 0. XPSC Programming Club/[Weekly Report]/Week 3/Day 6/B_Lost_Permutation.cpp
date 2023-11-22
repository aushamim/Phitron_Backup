#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int arr[n];
        map<int, int> mp;
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
            mx = max(mx, arr[i]);
        }

        int i = 1;
        while (i <= s)
        {
            if (!mp[i])
            {
                mp[i]++;
                s -= i;
                mx = max(mx, i);
            }
            i++;
        }

        bool flag = true;
        for (int i = 1; i <= mx; i++)
        {
            if (!mp[i])
            {
                flag = false;
                break;
            }
        }

        cout << ((s == 0 && flag) ? "YES" : "NO") << endl;
    }
    return 0;
}