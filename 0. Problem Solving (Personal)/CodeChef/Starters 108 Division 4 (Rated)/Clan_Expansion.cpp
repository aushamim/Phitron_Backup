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
        int arr[n];
        map<int, int> mp, maxMp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (mp[arr[i]] == arr[i])
            {
                if (maxMp[arr[i]])
                {
                    maxMp[arr[i]] = min(maxMp[arr[i]], (mp[arr[i]] / 2));
                }
                else
                {
                    maxMp[arr[i]] = (mp[arr[i]] / 2);
                }
                // mp[arr[i]] = 0;
            }
            else
            {
                mp[arr[i]]++;
            }
        }

        for (auto [x, y] : mp)
        {
            cout << x << " " << y << endl;
        }
        cout << endl;
        for (auto [x, y] : maxMp)
        {
            cout << x << " " << y << endl;
        }
    }
    return 0;
}