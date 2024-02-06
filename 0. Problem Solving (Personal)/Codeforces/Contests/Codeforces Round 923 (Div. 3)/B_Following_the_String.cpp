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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        map<char, int> mp;
        for (char c = 'a'; c <= 'z'; c++)
        {
            mp[c] = 0;
        }

        string s = "";
        for (int i = 0; i < n; i++)
        {
            for (auto [x, y] : mp)
            {
                if (y == arr[i])
                {
                    s += x;
                    mp[x]++;
                    break;
                }
            }
        }
        cout << s << endl;
    }
    return 0;
}