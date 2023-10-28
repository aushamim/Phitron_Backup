#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x].push_back(i);
        }

        while (k--)
        {
            int a, b;
            cin >> a >> b;

            if (mp[a].empty() || mp[b].empty())
            {
                cout << "NO" << endl;
            }
            else
            {
                if (mp[a].front() <= mp[b].back())
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
    return 0;
}