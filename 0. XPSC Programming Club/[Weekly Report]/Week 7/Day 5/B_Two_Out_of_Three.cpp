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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        vector<int> v;
        for (auto [x, y] : mp)
        {
            if (y >= 2)
            {
                v.push_back(x);
            }
        }

        if (v.size() >= 2)
        {
            bool c1 = false, c2 = false;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == v[0])
                {
                    cout << (c1 ? 2 : 1) << " ";
                    c1 = true;
                }
                else if (arr[i] == v[1])
                {
                    cout << (c2 ? 3 : 1) << " ";
                    c2 = true;
                }
                else
                {
                    cout << 1 << " ";
                }
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}