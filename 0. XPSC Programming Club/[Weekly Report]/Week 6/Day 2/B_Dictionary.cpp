#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string, int> mp;
    int i = 1;
    string ss = "..";
    for (char a = 'a'; a <= 'z'; a++)
    {
        ss[0] = a;
        for (char b = 'a'; b <= 'z'; b++)
        {
            if (a == b)
            {
                continue;
            }
            ss[1] = b;
            mp[ss] = i;
            i++;
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << mp[s] << endl;
    }
    return 0;
}