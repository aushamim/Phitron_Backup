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
        long long arr[n];
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        vector<int> v;
        for (int i = 0; i < (1 << 15); i++)
        {
            string s = to_string(i);
            string ss = s;
            reverse(ss.begin(), ss.end());
            if (s == ss)
            {
                v.push_back(i);
            }
        }

        long long count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < v.size(); j++)
            {
                int xr = arr[i] ^ v[j];
                if (xr > arr[i])
                {
                    count += mp[xr];
                }
            }
        }
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            count += ((long long)it->second * (it->second + 1)) / 2;
        }

        cout << count << endl;
    }
    return 0;
}
