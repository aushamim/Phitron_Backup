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
        double arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int curr = arr[i];
            for (int j = 2; j * j <= curr; j++)
            {
                while (curr % j == 0)
                {
                    mp[j]++;
                    curr /= j;
                }
            }
            if (curr > 1)
            {
                mp[curr]++;
            }
        }

        int ans = true;
        for (auto [x, y] : mp)
        {
            if (y % n != 0)
            {
                ans = false;
                break;
            }
        }

        cout << (ans ? "YES" : "NO") << endl;
    }
    return 0;
}